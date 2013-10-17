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
    int trap(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int left[n], right[n];
        int highest = -1;
        for (int i = 0;i<n;i++){
            left[i] = highest;
            highest = max(highest, A[i]);
        }
        
        highest = -1;
        for (int i = n-1;i>=0;i--){
            right[i] = highest;
            highest = max(highest, A[i]);
        }
        
        int res = 0;
        for (int i = 0;i<n;i++){
            int height = min(left[i], right[i]);
            if(height>A[i])
                res+=height-A[i];
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

