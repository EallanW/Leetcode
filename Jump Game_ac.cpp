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
    bool canJump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int right = 0;
        
        for (int i = 0;i<n-1;i++)
        if(i<=right){
            right = max(right, i+A[i]);
        }
        
        return right>=n-1;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

