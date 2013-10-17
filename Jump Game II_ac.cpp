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
        int r = 0, l = 0;
        
        int ans = 0;
        while(true){
            if(r>=n-1)
                break;            
            
            int new_r = r;
            for (int i = l;i<=r;i++){
                if(new_r < i+A[i])
                   new_r = i+A[i];
            }
            l = r+1;
            r = new_r;
            ans++;
        }
        
        
        return ans;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

