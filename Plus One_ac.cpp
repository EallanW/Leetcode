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
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
		vector<int> res = digits;

		int a = 1;
		for (int i = res.size()-1; i>=0; i--)
		{
			res[i]+=a;
			if(res[i]>=10){
				res[i]-=10;
			}
			else{
				a = 0;
				break;
			}
		}
		if(a>0){
			res.push_back(0);
			for (int i = res.size()-1; i>0; i--)
			{
				res[i] = res[i-1];
			}
			res[0] = 1;
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

