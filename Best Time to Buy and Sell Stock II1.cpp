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
		int f[n+2];
		f[0] = 0;f[1] = 0;
		for (int i = 2; i<=n; i++)
		{
			f[i] = f[i-1];
			int minp = prices[i-1-1];
			for (int j = i-1; j>=1; j--)
			{
				if(minp > prices[j-1])
				   minp = prices[j-1];
				int now = max(0,prices[i-1]-minp);
				if(f[i] < now+f[j-1])
				   f[i] = now+f[j-1];				
			}
		}
		return f[n];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

