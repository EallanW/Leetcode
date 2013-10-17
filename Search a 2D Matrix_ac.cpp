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
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int m = matrix.size(), n;
		if(m == 0)
			return false;
		n = matrix[0].size();
        int i = 0, j = m*n-1;
		while(i<=j){
			int k = i+(j-i)/2;
			int a = k/n, b = k%n;
			if(matrix[a][b] == target)
				return true;
			else
			if(target < matrix[a][b])
				j = k-1;
			else
				i = k+1;
		}
		return false;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

