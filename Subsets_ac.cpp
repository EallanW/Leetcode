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

	vector<int> vi;
	vector<vector<int> > res;
	int n;

	void go(int num, vector<int> now){
		if(num >= n)
			res.push_back(now);
		else{
			go(num+1, now);
			now.push_back(vi[num]);
			go(num+1, now);
		}
	}

    vector<vector<int> > subsets(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		sort(S.begin(), S.end());
        vi = S;
		res.resize(0);
		n = S.size();
		
		vector<int> now;
		now.resize(0);
		go(0,now);

		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

