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
    bool wordBreak(string s, unordered_set<string> &dict) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int n = s.length();
        bool f[n+1];
        memset(f, 0, sizeof(f));
        f[0] = true;
        for (int i = 1;i<=n;i++){
            string last = "";
            for (int j = 1;j<=i;j++){
                last = s[i-(j-1)-1]+last;
                if(dict.find(last)!=dict.end()){
                    f[i]= f[i-j]||f[i];
                }
            }
        }
        return f[n];
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

