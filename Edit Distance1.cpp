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
    vector<vector<int> > f;
	int mindis(string w1, string w2, int l, int r){
		if(l+r == 0)
            return 1;
        else
		if(l == 0 || r == 0){
			return l+r+1;
		}
        else
		if(f[l][r]>0){
    		return f[l][r];
		}
		else{
			int tmp = mindis(w1, w2, l-1, r-1);
			if(w1[l-1] != w2[r-1])
				tmp++;
			f[l][r] = tmp;
			if(f[l][r] > mindis(w1, w2, l-1, r)+1)
			   f[l][r] = mindis(w1, w2, l-1, r)+1;
			if(f[l][r] > mindis(w1, w2, l, r-1)+1)
			   f[l][r] = mindis(w1, w2, l, r-1)+1;
			return f[l][r];
		}
	}

    int minDistance(string word1, string word2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		f.resize(word1.size()+1);
		for (int i = 0; i<=word1.size(); i++)
		{
			f[i].resize(word2.size()+1);
			for (int j = 0; j<=word2.size(); j++)
			{
				f[i][j] = 0;
			}
		}

		int res = mindis(word1, word2, word1.size(), word2.size());

		return res-1;        
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

