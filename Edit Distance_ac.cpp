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

    int minDistance(string word1, string word2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		
		vector<int> f[2];
		f[0].resize(word2.size()+1);
		f[1].resize(word2.size()+1);
		for (int j = 0; j<=word2.size(); j++)
		{
			f[0][j] = j;
		}

		int bj = 0, bi = 1;
		for (int i = 1; i<=word1.size(); i++)
		{
			bj = 1-bj; bi = 1-bj;
			f[bj][0] = i;
			for (int j = 1; j<=word2.size(); j++)
			{
				int tmp = f[bi][j-1];
				if(word1[i-1] != word2[j-1])
					tmp++;
				f[bj][j] = tmp;
				if(f[bj][j] > f[bi][j]+1)
				   f[bj][j] = f[bi][j]+1;
				if(f[bj][j] > f[bj][j-1]+1)
				   f[bj][j] = f[bj][j-1]+1;
			}
		}

		int res = f[bj][word2.size()];

		return res;        
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;

	int ans = sol.minDistance("prosperity", "properties");
	cout<<ans<<endl;
	

	return 0;
};

