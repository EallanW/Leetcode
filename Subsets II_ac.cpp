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
	vector<int> vn, vc;
	vector<vector<int> > res;

	void go(int num, vector<int> now){
		if(num == vn.size()){
			res.push_back(now);
		}
		else{
			for (int i = 0; i<=vc[num]; i++)
			{
				go(num+1, now);
				now.push_back(vn[num]);
			}
		}
	}

    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		sort(S.begin(), S.end());

		vn.resize(0);
		vc.resize(0);


		int st = 0, en = 1;
		while(st < S.size()){
			while(en<S.size() && S[st] == S[en])
				en++;
			vn.push_back(S[st]);
			vc.push_back(en-st);
			st = en;
			en = st+1;
		}
		res.resize(0);
		vector<int> now;
		now.resize(0);
		go(0, now);
		return res;		//Don't forget it!!!
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	vector<int> a;
	a.push_back(0);
	Solution sol;
	sol.subsetsWithDup(a);
	

	return 0;
};

