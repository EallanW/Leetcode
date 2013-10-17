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
    int numDistinct(string s, string t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	int m = s.length(), n = t.length();
        int f[m+1][n+1];
		memset(f, 0, sizeof(f));
		f[0][0] = 1;
		for (int i = 1; i<=m; i++)
		{
			f[i][0] = 1;			//You must be careful about the initialization.
		}
		for (int j = 1; j<=n; j++)
		{
			for (int i = j; i<=m; i++)
			{
				f[i][j] = f[i-1][j];
				if(s[i-1] == t[j-1]){
					f[i][j]+=f[i-1][j-1];
				}
			}
		}
		return f[m][n];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

