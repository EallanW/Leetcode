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
    int uniquePaths(int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int f[m][n];
        for (int i = 0;i<m;i++)
        for (int j = 0;j<n;j++)
        if(i == 0 && j == 0){
            f[i][j] = 1;            
        }
        else
        if(i == 0){
            f[i][j] = f[i][j-1];
        }
        else
        if(j == 0){
            f[i][j] = f[i-1][j];
        }
        else{
            f[i][j] = f[i-1][j]+f[i][j-1];
        }
        
        return f[m-1][n-1];
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

