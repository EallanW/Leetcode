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
    int numDecodings(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		if(s == "")
			return 0;

		int res = 0;
		int n = s.size();
		int f[n+1];

		f[0] = 1;
		for (int i = 1; i<=n; i++)
		{
			f[i] = 0;
			if('1'<=s[i-1] && s[i-1]<='9'){
				f[i]+=f[i-1];
			}
			if(i>=2){
				int a = 10*(s[i-2]-'0')+(s[i-1]-'0');
				if(s[i-2] != '0' && 1<=a && a<=26){
					f[i]+=f[i-2];
				}
			}
		}		
		res = f[n];

		return res;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

