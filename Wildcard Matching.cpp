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
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len_s = strlen(s),
            len_p = strlen(p);
            
        bool f[2][len_p+1];
        memset(f, 0, sizeof(f));

        int bj = 1, bi = 0;
        
        for (int i = 0;i<=len_s;i++){
            bj = 1-bj;bi = 1-bj;
            memset(f[bj], 0, sizeof(f[bj]));
            if(i == 0)
                f[bj][0] = true;
                
            for (int j = 0;j<=len_p;j++)
            if(i+j>0){
                if(i*j == 0){
                    if(i == 0){
                        if(p[j-1] == '*')
                            f[bj][j] = f[bj][j-1];
                    }
                    else
                    if(s[i-1] == '*')
                        f[bj][j] = f[bi][j];
                    
                }
                else
                if(p[j-1] == '*'){
                    f[bj][j] = f[bj][j-1] || f[bi][j];
                }
                else
                if(p[j-1] == '?'){
                    f[bj][j] = f[bi][j-1];
                }
                if(p[j-1] == s[i-1]){
                    f[bj][j] = f[bi][j-1];
                }
                
            }
        }
        return f[bj][len_p];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

