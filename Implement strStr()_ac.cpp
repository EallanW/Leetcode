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
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        char* res = NULL;
        char* st = haystack;
    	int len_h = strlen(haystack);
		int len_n = strlen(needle);
		/*
		cout<<strlen(haystack)<<endl;
		cout<<strlen(needle)<<endl;
		cout<<strlen(haystack)-strlen(needle)<<endl;
		cout<<len_h<<" "<<len_n<<" "<<len_h-len_n<<endl;
		*/
        for(int i = 0;i<=len_h-len_n;i++){
            bool yes = true;
            for (int j = 0;j<strlen(needle);j++)
            if(*(st+j) != needle[j]){
                yes = false;
                break;                
            }
            if(yes){
                res = st;
                break;
            }
            st++;
        }
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	Solution sol;
	cout<<sol.strStr("", "a");


	return 0;
};

