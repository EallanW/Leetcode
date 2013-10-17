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
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        stack<char> sta;
        while(!sta.empty())
            sta.pop();
            
        bool res = true;
        
        for (int i = 0;i<s.length();i++)
        if(s[i] == '(' ||
           s[i] == '[' ||
           s[i] == '{'){
            sta.push(s[i]);            
        }
        else
        if(s[i] == ')'){
            if(sta.empty() || sta.top() != '('){
                res = false;
                break;
            }
            else{
                sta.pop();
            }
        }
        else
        if(s[i] == ']'){
            if(sta.empty() || sta.top() != '['){
                res = false;
                break;
            }
            else{
                sta.pop();
            }
        }
        else
        if(s[i] == '}'){
            if(sta.empty() || sta.top() != '{'){
                res = false;
                break;
            }
            else{
                sta.pop();
            }
        }
        
        if(!sta.empty())
            res = false;
        
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

