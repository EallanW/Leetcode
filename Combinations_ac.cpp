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
	vector<vector<int> > res;
	void go(int num, int st, int n, int k, vector<int> now){
		if(num == k+1){
			res.push_back(now);
		}
		else{
			now.push_back(0);
			for (int i = st; i<=n-(k-num); i++)
			{
				now[now.size()-1] = i;
				go(num+1, i+1, n, k, now);
			}
		}
	}
    vector<vector<int> > combine(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        res.resize(0);
		vector<int> now;
		now.resize(0);
		if(k == 0){
			res.push_back(now);			
		}
		else{
			go(1,1,n,k,now);
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

