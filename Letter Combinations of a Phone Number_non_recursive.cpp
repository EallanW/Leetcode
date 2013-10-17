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

    
    
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> res;
    
        string x[10], dig;
    
        int n;
        
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
        
        stack<int> sta;
        int dep = 0;
        
        sta.push(0);
        
        string tmp = "";
        while(!sta.empty()){
            if(dep >= n){
                res.push_back(tmp);
                dep--;
                if(dep>=0)
                    tmp.erase(dep,1);
                sta.pop();
            }
            else{
                int now = sta.top();
                sta.pop();
                
                if(now >= x[dig[dep]-'0'].length()){
                    tmp.erase(dep,1);
                    dep--;
                }
                else{
                    sta.push(now+1);
                    if(tmp.length() == dep+1)
                        tmp[dep] = x[dig[dep]-'0'][now];
                    else
                        tmp+=x[dig[dep]-'0'][now];
                    /*
                    if(dep == n-1){
                        res.push_back(tmp);
                    }
                    else{
                    */
                        sta.push(0);
                        dep++;
                                    
                    //}
                    
                }
            }
            
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

