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
    vector<vector<int> > permute(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<vector<int> > res;
        
        int n = num.size();
        int mark[n];
        memset(mark, 0, sizeof(mark));
        
        
        vector<int> vi_now, vi_num;
        vi_now.resize(n);
        vi_num.resize(n);
        
        stack<int> sta;
        sta.push(0);
        int dep = 0;
        while(!sta.empty()){
            int now = sta.top();
            sta.pop();
            if(now<n){
                
                int ne = now+1;
                sta.push(ne);
                if(mark[now] == 0){
                    mark[now] = 1;
                    vi_now[dep] = num[now];
                    vi_num[dep] = now;
                    
                    if(dep>=n-1){
                        res.push_back(vi_now);
						//Be careful!
						mark[vi_num[dep]] = 0;
                    }
                    else{
                        dep++;
                        sta.push(0);
                    }
                }
                
            }
            else{
                dep--;
				//Be careful!
                if(dep >= 0)
                mark[vi_num[dep]] = 0;                
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

