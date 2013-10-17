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

    string sort_str(string s){
        char * chs = new char[s.length()+1];
        strcpy(chs, s.c_str());
        sort(chs, chs+strlen(chs));
        string res = chs;
        return res;
    }
    
    vector<string> anagrams(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<string> res;
        
        map<string, int> mp;
        
        for (int i = 0;i<strs.size();i++){
            string now = strs[i];
            now = sort_str(now);
            mp[now]++;
        }
        for (int i = 0;i<strs.size();i++){
            string now = strs[i];
            now = sort_str(now);
            if(mp[now]>1)
                res.push_back(strs[i]);
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

