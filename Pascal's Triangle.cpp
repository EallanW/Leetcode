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
    vector<vector<int> > generate(int numRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		vector<vector<int> > res;
		if(numRows>=1){
			vector<int> v;
			v.push_back(1);
			res.push_back(v);
			for (int i = 2; i<=numRows; i++)
			{
				v.resize(0);
				v.push_back(1);
				for (int j = 1; j<i-1; j++)
				{
					v.push_back(res[i-1-1][j-1]+res[i-1-1][j]);
				}
				v.push_back(1);
				res.push_back(v);
			}
		}
		return res;
        
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

