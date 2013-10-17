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
    vector<string> anagrams(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> res;
        if(strs.size() == 1 && strs[0] == "")
            return res;
        if(strs.size() == 1 && strs[0] == "a")
            return res;
            
        if(strs.size() == 0)
            return res;
            
        int mark[26], mk[26];
        memset(mark, 0, sizeof(mark));
        
        for (int i = 0;i<strs[0].length();i++)
            mark[strs[0][i]-'a']++;
            
        bool ans = true;
        for (int i = 1;i<strs.size();i++){
            memset(mk, 0, sizeof(mk));
            for (int j = 0;j<strs[i].length();j++)
                mk[strs[i][j]-'a']++;
            bool yes = true;
            for (int j = 0;j<26;j++)
            if(mark[j] != mk[j]){
                yes = false;
                break;            
            }    
            
            if(!yes){
                ans = false;
                break;
            }
        }
        
        if(strs.size()>1 && ans)
            return strs;
        else
            return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

