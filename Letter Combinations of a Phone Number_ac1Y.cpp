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

    vector<string> res;
    
    string x[10], dig;
    
    int n;
    
    void go(int num, string now){
        if(num>=n){
            res.push_back(now);            
        }
        else{
            for (int i = 0;i<x[dig[num]-'0'].length();i++){
                go(num+1, now+x[dig[num]-'0'][i]);
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        res.resize(0);
        
        x[2] = "abc";
        x[3] = "def";
        x[4] = "ghi";
        x[5] = "jkl";
        x[6] = "mno";
        x[7] = "pqrs";
        x[8] = "tuv";
        x[9] = "wxyz";
        
        n = digits.length();
        dig = digits;
        
        go(0, "");
        
        
        
        return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

