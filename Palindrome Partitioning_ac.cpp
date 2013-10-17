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
	bool **yes;
	string str;
	int n;

	vector<vector<string> > go(int st, vector<string> vs){
		vector<vector<string> > res;
		if(st>=n){
			res.push_back(vs);
			return res;
		}

		for (int j = st; j<n; j++)
			if(yes[st][j])
		{
			vector<string> vs_new = vs;
			vs_new.push_back(str.substr(st, j-st+1));
			vector<vector<string> > tmp;
			tmp = go(j+1,vs_new);
			for (int k = 0; k<tmp.size(); k++)
			{
				res.push_back(tmp[k]);
			}			
		}
	}
		
    vector<vector<string> > partition(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		str = s;
		vector<vector<string> > res;

		n = s.length();
		
		yes = new bool*[n];
		for (int i = 0; i<n; i++)
		{
			yes[i] = new bool[n];
		}

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

		vector<string> vs;
		res = go(0, vs);
		return res;
        
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

