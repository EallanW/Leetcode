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
    vector<int> findSubstring(string s, vector<string> &l) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string, int> mp;
        mp.clear();
        
        for (int i = 0;i<l.size();i++)
            mp[l[i]]++;
        
        vector<int> res;
        
        int tot = s.length()-l.size()*l[0].length();
        for (int i = 0;i<=tot;i++){
            map<string, int> now;
            now.clear();
            
            bool yes = true;
            for(int j = 0;j<l.size();j++){
                string tmp = s.substr(i+j*l[0].length(), l[0].length());
                if(mp.find(tmp) == mp.end()){
                    yes = false;
                    break;
                }
                else{
                    now[tmp]++;
                }
            }
            if(yes){
                for (int j = 0;j<l.size();j++)
                if(mp[l[j]] != now[l[j]]){
                    yes = false;
                    break;
                }
                if(yes){
                    res.push_back(i);
                }
            }
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

