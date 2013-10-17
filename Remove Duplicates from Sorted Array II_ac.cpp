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

vector<int> res;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
		res.resize(0);
		int st = 0, en = st+1;
		while(st<n){
			while(en<n && A[st] == A[en])
				en++;
			res.push_back(A[st]);
			if(en > st+1){
				res.push_back(A[st]);
			}
			st = en;
		}
		for (int i = 0; i<res.size(); i++)
		{
			A[i] = res[i];
		}
		return res.size();
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

