#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <cmath>
#include <deque>
#include <stack>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <ctime>

using namespace std;

#define maxn 110
#define datat int
#define ansdatat int

class Solution {
public:

    string reverse_str(string s){
        string res = s;
        for (int i = 0, j = s.length()-1;i<j;i++,j--){
            swap(res[i], res[j]);
        }
        return res;
    }

    string add(string a, string b){
        string c = "";
        int d_one = 0;
        for (int i = 0;i<max(a.length(), b.length());i++){
            int d_a = 0,
                d_b = 0;
            if(i<a.length())
                d_a = a[i]-'0';
            if(i<b.length())
                d_b = b[i]-'0';
            int d_c = d_a+d_b+d_one;
            if(d_c>=10){
                d_one = 1;
                d_c-=10;
            }
            else{
                d_one = 0;
            }
            
            c+='0'+d_c;
        }
        if(d_one>0)
            c+='1';        
            
        if(c == "")
            c = "0";
        
        return c;
    }

    string multiply(string num1, string num2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if(num1.length()<num2.length())
            swap(num1, num2);
        
        string numa = reverse_str(num1),
               numb = reverse_str(num2);
               
        if(num2 == "0")
            return "0";
            
        string res = "0";
        string zero = "";
        for (int i = 0;i<numb.length();i++){
            int a = 0;
            string str_c = "";
            for (int j = 0;j<numa.length();j++){
                int c = (numa[j]-'0')*(numb[i]-'0')+a;
                a = c / 10;
                c = c % 10;
                str_c+='0'+c;                
            }
            if(a>0)
                str_c+='0'+a;
            
            str_c = zero+str_c;
            res = add(res,str_c);
            
            zero += '0';
        }
        
        res = reverse_str(res);
        return res;
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

