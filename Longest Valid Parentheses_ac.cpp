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
    int longestValidParentheses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res = 0;
        int n = s.length();
        stack<int> sta;
        int right[n];
        for (int i = 0;i<n;i++)
            right[i] = -1;
        
        
        for (int i = 0;i<n;i++)
        if(s[i] == '('){
            sta.push(i);
        }
        else
        if(!sta.empty()){
            int left = sta.top();
            sta.pop();
            /*
            if(res < i-left+1)
               res = i-left+1;
            */
            right[left] = i;
        }
        
        
        
        int st = 0;
        while(st<n){
            int en = st;
            while(en<n && right[en]!=-1){
                en = right[en]+1;
            }
            
            if(res < en-st)
               res = en-st;
               
            if(en == st)
                st++;
            else
                st = en;
        }
        
        
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

