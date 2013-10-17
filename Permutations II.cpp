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

    map<int, int> ps;
    vector<int> num, left, mark, now;
    int n;
    vector<vector<int> > res;
    
    void go(int dep){
        if(dep>=n){
            res.push_back(now);
        }
        else{
            for (int i = 0;i<n;i++)
            if(mark[i] == 0 &&
                (left[i] == -1 ||
                 left[i] != -1 && mark[left[i]] == 1)){
                mark[i] = 1;
                
                now[dep] = num[i];
                
                go(dep+1);
                
                mark[i] = 0;
                     
            }
            
            
        }
    }

    vector<vector<int> > permuteUnique(vector<int> &number) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        ps.clear();

    	res.resize(0);
        
        num = number;
        
        n = num.size();
        left.resize(n);
        mark.resize(n);
        now.resize(n);
        
        for (int i = 0;i<n;i++){
            now[i] = -1;
            mark[i] = 0;
            left[i] = -1;
            if(ps.find(num[i]) == ps.end()){
                ps[num[i]] = i;
            }
            else{
                left[i] = ps[num[i]];
                ps[num[i]] = i;
            }
        }
        
        go(0);
        
        return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;

	vector<int> vc;
	vc.push_back(1);
	vc.push_back(1);

	vector<vector<int> > res = sol.permuteUnique(vc);

	
	
	for (int i = 0; i<res.size(); i++)
	{
		for (int j = 0; j<res[i].size(); j++)
		{
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}

	

	return 0;
};

