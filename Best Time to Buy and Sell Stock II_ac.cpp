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
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = prices.size();
    	int f[n+2][2];
		int inf = -1000000000;
		f[0][1] = 0;f[0][0] = inf;
		for (int i = 1; i<=n; i++)
		{
			f[i][1] = f[i-1][1];
			if(f[i-1][0]>inf){
			   if(f[i][1] < f[i-1][0]+prices[i-1])
			      f[i][1] = f[i-1][0]+prices[i-1];
			}			

			f[i][0] = f[i-1][0];
			if(f[i-1][1]>inf){
				if(f[i][0] < f[i-1][1]-prices[i-1])
				   f[i][0] = f[i-1][1]-prices[i-1];
			}
		}
		return f[n][1];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

