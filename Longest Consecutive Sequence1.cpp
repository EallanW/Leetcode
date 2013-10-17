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
    int longestConsecutive(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		sort(num.begin(), num.end());
		for (int i = 1; i<num.size(); i++)
			if(num[i] == num[i-1])
		{
			num.erase(num.begin()+i);
			i--;
		}

        int ans = 0;
		int n = num.size();
		int f[2][n];
		memset(f, 0, sizeof(f));
		

		for (int i = 0; i<n; i++)
		{
			f[0][i] = 1;
			f[1][i] = 1;
			if(i>0 && num[i] == num[i-1]+1)
				f[0][i] = f[0][i-1]+1;
			if(i>0 && num[i] == num[i-1]-1)
				f[1][i] = f[1][i-1]+1;

			if(ans < f[0][i])
			   ans = f[0][i];
			if(ans < f[1][i])
			   ans = f[1][i];
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

