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
    int minCut(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int n = s.length();
		bool yes[n][n];
		memset(yes, 0, sizeof(yes));
		
		for (int l = 1; l<=n; l++)
		{
			for (int i = 0; i+l-1<n; i++)
			{
				int j = i+l-1;
				int a = i+1, b = j-1;
				if(s[i] == s[j] &&
					(a>b ||
					 a<=b && yes[a][b]))
					yes[i][j] = true;
				else
					yes[i][j] = false;
			}
		}

		//cout<<"Yes\n";
		
		int f[n];
		memset(f, 0, sizeof(f));
		f[0] = 1;

		for (int i = 1; i<=n; i++ )
		{
			f[i] = 0;
			for (int j = i; j>=1; j--)
				if(yes[j-1][i-1])
			{
				if(f[i] == 0 ||
				   f[i] > f[j-1]+1)
				   f[i] = f[j-1]+1;
			}
		}
		int ans = f[n]-2;
		return ans;
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	Solution s;
	cout<<s.minCut("a")<<endl;
	cout<<s.minCut("ab")<<endl;
	cout<<s.minCut("bb")<<endl;
	cout<<s.minCut("abbab")<<endl;
	cout<<s.minCut("coder")<<endl;
	
	

	return 0;
};

