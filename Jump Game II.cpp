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
    int jump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int f[n];
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for (int i = 0;i<n-1;i++)
        if(f[i] > 0){
            for (int j = i+1;j<=i+A[i];j++)
            if(f[j] == 0 ||
               f[j] > f[i]+1)
               f[j] = f[i]+1;
        }
        else{
            break;
        }
        
        return f[n-1]-1;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

