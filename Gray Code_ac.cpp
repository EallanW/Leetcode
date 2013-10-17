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
    vector<int> grayCode(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		vector<int> res;
		int tot = 1<<n;

		for (int i = 0; i<tot; i++)
		{
			res.push_back(0);
		}

		for (int i = 0; i<n; i++)
		{
			int a = 1<<i;

			int st = 0;
			int bj = 0;
			while(st<tot){
				if(bj == 0){
					st+=a;
					for (int j = 0; j<a; j++)
					{
						res[st+j] |= a;
					}
					st+=a;
				}
				else{
					for (int j = 0; j<a; j++)
					{
						res[st+j] |= a;
					}
					st+=2*a;
				}

				bj = 1-bj;
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

