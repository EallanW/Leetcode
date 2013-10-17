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
        int ans = 0;
		int n = prices.size();
		if(n>=1){
			int low = prices[0];
			for (int i = 1; i<n; i++ )
			{
				if (ans < prices[i]-low)
					ans = prices[i]-low;
				if(low > prices[i])
				   low = prices[i];
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

