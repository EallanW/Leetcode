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
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if(strs.size() == 0)
            return "";
        
        int min_len = strs[0].length();
        for (int i = 1;i<strs.size();i++)
        if(min_len > strs[i].length()){
            min_len = strs[i].length();
        }
        
        string res = "";
        for(int i = 0;i<min_len;i++){
            bool yes = true;
            for (int j = 1;j<strs.size();j++)
            if(strs[0][i] != strs[j][i]){
                yes = false;
                break;
            }
            if(yes){
                res+=strs[0][i];
            }
            else
                break;
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

