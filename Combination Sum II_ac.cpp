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
    int n, total;
    vector<int> num, mark;
    
    vector<vector<int> > res;
    
    
    void go(int dep, int sum, vector<int> now){
        if(sum == total){
            res.push_back(now);
        }
        else
        if(total-sum < num[dep]){
            return;
        }
        else
        if(dep<n){
            go(dep+1, sum, now);
            
            if(dep == 0 ||
               dep > 0 && num[dep] != num[dep-1] ||
               dep > 0 && num[dep] == num[dep-1] && mark[dep-1] == 1){
                sum+=num[dep];
                now.push_back(num[dep]);
                mark[dep] = 1;
                
                go(dep+1, sum, now);
                
                mark[dep] = 0;
            }
        }
        
    }
    
    vector<vector<int> > combinationSum2(vector<int> &number, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        sort(number.begin(), number.end());
        num = number;
        
        
        res.resize(0);
        
        n = num.size();
        total = target;

        mark.resize(n);
        for (int i = 0;i<n;i++)
            mark[i] = 0;


        vector<int> none;
        
        go(0,0,none);
            
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

