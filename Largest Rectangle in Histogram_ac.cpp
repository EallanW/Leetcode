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
    int largestRectangleArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		int n = height.size();
		int left_min[n+1], right_min[n+1];
		memset(left_min, 0, sizeof(left_min));
		for (int i = 1; i<=n; i++)
		{
			right_min[i] = n+1;
		}
		int ans = 0;

		stack<int> sta;
		while(!sta.empty())
			sta.pop();
		for (int i = 1; i<=n; i++)
		{
			while(!sta.empty()){
				int top = sta.top();
				if(height[i-1]<height[top-1]){
					right_min[top] = i;
					sta.pop();
				}
				else
					break;
			}
			sta.push(i);
		}

		while(!sta.empty())
			sta.pop();
		for (int i = n; i>=1; i--)
		{
			while(!sta.empty()){
				int top = sta.top();
				if(height[i-1]<height[top-1]){
					left_min[top] = i;
					sta.pop();
				}
				else
					break;
			}
			sta.push(i);
		}

		for (int i = 1; i<=n; i++)
		{
			int tmp = height[i-1]*(right_min[i]-1-left_min[i]);
			if(ans < tmp)
			   ans = tmp;
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

