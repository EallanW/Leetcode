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
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string str = s;
        int res = 0;

        while(str.length()>0 && str[str.length()-1] == ' ')
            str.erase(str.length()-1,1);

        while(str.length()>0 && ('a'<=str[str.length()-1] && str[str.length()-1]<='z' ||
                                 'A'<=str[str.length()-1] && str[str.length()-1]<='Z')){
            res++;
            str.erase(str.length()-1,1);
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

