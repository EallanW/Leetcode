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
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int f[n+3];
        f[0] = 1;
        f[1] = 1;
        f[2] = 2;
        for(int i = 3;i<=n;i++)
            f[i] = f[i-1]+f[i-2];
        return f[n];
        
    }
};
void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

