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
    int minimumTotal(vector<vector<int> > &triangle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int res = 0;
		int n = triangle.size();
		if(n>=1){
			int f[2][n+1];
			f[1][0] = triangle[0][0];
			int bj = 1, bi = 0;
			for (int i = 2; i<=n; i++)
			{
				bj = 1-bj;bi = 1-bj;
				f[bj][0] = f[bi][0]+triangle[i-1][0];
				f[bj][i-1] = f[bi][i-1-1]+triangle[i-1][i-1];
				for (int j = 1; j<i-1; j++)
				{
					f[bj][j] = f[bi][j-1]+triangle[i-1][j];
					if(f[bj][j] > f[bi][j]+triangle[i-1][j])
					   f[bj][j] = f[bi][j]+triangle[i-1][j];
				}				
			}
			res = f[bj][0];
			for (int j = 1; j<n; j++)
			if(res > f[bj][j])
			{
			   res = f[bj][j];
			}
		}
        return res;
    }
};

void init_deal(){
}

int main(){
	


	

	return 0;
};

