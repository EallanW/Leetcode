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
    vector<vector<int> > res;
    vector<int> num;
    int total, n;
    
    void go(int dep, int sum, vector<int> now){
        if(sum == total){
            res.push_back(now);
        }
        else
        if(total-sum<num[dep]){
            return ;
        }
        else
        if(dep<n){
            int cnt = (total-sum)/num[dep];
            for (int i = 0;i<=cnt;i++){
                go(dep+1, sum, now);
                
                sum+=num[dep];
                now.push_back(num[dep]);
            }
        }
        
    }

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        num = candidates;
        sort(num.begin(), num.end());
        res.resize(0);
        total = target;
        n = num.size();
        
        vector<int> none;
        none.resize(0);
        
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

