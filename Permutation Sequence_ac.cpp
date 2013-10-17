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
    string getPermutation(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int f[n+1];
        f[0] = 1;
        for (int i = 1;i<=n;i++)
            f[i] = f[i-1]*i;
        int mark[n+1];
        memset(mark, 0, sizeof(mark));
        
        string res = "";
        int left = k;
        for (int i = 1;i<=n;i++){
            int a = (left-1)/f[n-i]+1;
            left -= (a-1)*f[n-i];
            
            int cnt = 0, dig = 0;
            for (int j = 1;j<=n;j++)
            if(mark[j] == 0){
                cnt++;
                if(cnt == a){
                    dig = j;
                    break;
                }                
            }
            
            mark[dig] = 1;
            res+='0'+dig;
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

