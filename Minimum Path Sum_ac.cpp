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
    int minPathSum(vector<vector<int> > &grid) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res = 0;
        int m = grid.size(), n;
        if(m>0){
            n = grid[0].size();
            
            int f[m][n];
            for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++){
                if(i == 0 && j == 0){
                    f[i][j] = grid[0][0];
                }
                else
                if(i == 0){
                    f[i][j] = f[i][j-1]+grid[i][j];
                }
                else
                if(j == 0){
                    f[i][j] = f[i-1][j]+grid[i][j];
                }
                else{
                    f[i][j] = min(f[i][j-1],f[i-1][j])+grid[i][j];
                }                
            }
            if(m*n>0)
                res = f[m-1][n-1];
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

