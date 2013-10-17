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
		int inf = -1000000000;
        int f[n+1][5];
		f[0][0] = 0;//no buy
		f[0][1] = inf;//buy one
		f[0][2] = inf;//buy one and sell one
		f[0][3] = inf;//sell one and buy one
		f[0][4] = inf;//buy two and sell two

		for (int i = 1; i<=n; i++)
		{
			f[i][0] = 0;

			f[i][1] = f[i-1][0]-prices[i-1];
			if(f[i-1][1]>inf)
				if(f[i][1] < f[i-1][1])
				   f[i][1] = f[i-1][1];

			f[i][2] = inf;
			if(f[i-1][2]>inf)
				f[i][2] = f[i-1][2];
			if(f[i-1][1]>inf)
				if(f[i][2] < f[i-1][1]+prices[i-1])
				   f[i][2] = f[i-1][1]+prices[i-1];

			f[i][3] = inf;
			if(f[i-1][3]>inf)
				f[i][3] = f[i-1][3];
			if(f[i-1][2]>inf)
				if(f[i][3] < f[i-1][2]-prices[i-1])
				   f[i][3] = f[i-1][2]-prices[i-1];

			f[i][4] = inf;
			if(f[i-1][4]>inf)
				f[i][4] = f[i-1][4];
			if(f[i-1][3]>inf)
				if(f[i][4] < f[i-1][3]+prices[i-1])
				   f[i][4] = f[i-1][3]+prices[i-1];
		}

		return max(0, max(f[n][2], f[n][4]));

    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

