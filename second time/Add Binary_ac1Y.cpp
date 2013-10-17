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
        for (int i = 0,j = s.length()-1;i<j;i++,j--){
            swap(res[i],res[j]);
        }
        return res;
    }
    
    string addBinary(string a, string b) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        string r_a = reverse_str(a), r_b = reverse_str(b);    
        string r_res;
        int one = 0;
        for (int i = 0;i<max(r_a.length(), r_b.length());i++){
            int sum = one;
            if(i<r_a.length()){
                sum+=r_a[i]-'0';
            }
            if(i<r_b.length()){
                sum+=r_b[i]-'0';
            }
            
            if(sum>=2){
                sum-=2;
                one = 1;
            }
            else{
                one = 0;
            }
            r_res+='0'+sum;
        }
        if(one>0){
            r_res+='1';
        }
        string res = reverse_str(r_res);
        return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

