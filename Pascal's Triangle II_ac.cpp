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
    vector<int> getRow(int rowIndex) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> f[2];
		f[0].push_back(1);
		int bj = 0, bi = 1;
		for (int i = 1; i<=rowIndex; i++)
		{
			bj = 1-bj;
			bi = 1-bj;
			f[bj].resize(0);
			f[bj].push_back(1);
			for (int j = 1; j<i; j++)
			{
				f[bj].push_back(f[bi][j-1]+f[bi][j]);
			}
			f[bj].push_back(1);
		}
		return f[bj];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

