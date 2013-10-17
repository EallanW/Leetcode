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
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		vector<int> res;
		res.resize(0);
		int sa = 0, sb = 0;
		while(sa<m && sb<n){
			if(A[sa] < B[sb]){
				res.push_back(A[sa]);
				sa++;
			}
			else{
				res.push_back(B[sb]);
				sb++;
			}
		}

		while(sa<m){
			res.push_back(A[sa]);
			sa++;
		}
		
		while(sb<n){
			res.push_back(B[sb]);
			sb++;
		}
		
		for (int i = 0; i<res.size(); i++)
		{
			A[i] = res[i];
		}

    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

