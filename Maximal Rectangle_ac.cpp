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
    int maximalRectangle(vector<vector<char> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int m = matrix.size();
		if(m == 0)
			return 0;
		int n = matrix[0].size();

		int ans = 0;
		int h[2][n+1];
		memset(h, 0, sizeof(h));
		int bj = 1, bi;
		for (int i = 0; i<m; i++){
			bj = 1-bj; bi = 1-bj;
			for (int j = 0; j<n; j++)
			if(matrix[i][j] == '0')
			{
				h[bj][j+1] = 0;
			}
			else{
				h[bj][j+1] = h[bi][j+1]+1;
			}
			int left_min[n+1], right_min[n+1];
			memset(left_min, 0, sizeof(left_min));
			for (int j = 1; j<=n; j++)
			{
				right_min[j] = n+1;
			}

			stack<int> sta;
			while(!sta.empty()){
				sta.pop();
			}
			for (int j = 1; j<=n; j++)
			{
				while(!sta.empty()){
					int top = sta.top();
					if(h[bj][top]>h[bj][j]){
						right_min[top] = j;
						sta.pop();
					}
					else{
						break;
					}
				}
				sta.push(j);
			}

			while(!sta.empty()){
				sta.pop();
			}
			for (int j = n; j>=1; j--)
			{
				while(!sta.empty()){
					int top = sta.top();
					if(h[bj][top]>h[bj][j]){
						left_min[top] = j;
						sta.pop();
					}
					else{
						break;
					}
				}
				sta.push(j);
			}

			for (int j = 1; j<=n; j++)
			{
				int tmp = h[bj][j]*(right_min[j]-1-left_min[j]);
				if(ans < tmp)
				   ans = tmp;
			}
		}
		return ans;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

