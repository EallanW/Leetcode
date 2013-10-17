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
    vector<int> findSubstring(string S, vector<string> &L) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<string, int> mp, cnt;
        int n = L.size();
        for (int i = 0;i<n;i++){
            if(mp.find(L[i]) == mp.end()){
                mp[L[i]] = i;
                cnt[L[i]]++;
            }
            else{
                cnt[L[i]]++;                
            }
        }
        
        int tot[n+1];
        memset(tot, 0, sizeof(tot));
        for (int i = 0;i<n;i++){
            tot[i] = cnt[L[i]];
        }
        
        
            
        int step = L[0].length();
        int len = S.length()-step+1;
        vector<int> num;
        num.resize(len);
        for (int i = 0;i<len;i++){
            string tmp = S.substr(i, step);
            if(mp.find(tmp) != mp.end()){
                num[i] = mp[tmp];
            }
            else{
                num[i] = -1;
            }
        }
        
        int mark[n+1], tt = 0;
        
        vector<int> res;
        for (int i = 0;i+(n-1)*step<len;i++){
            tt++;
            int now = i;
            memset(mark, 0, sizeof(mark));
            
            bool yes = true;
            for (int j = 0;j<n;j++){
                if(num[now] < 0 ||
                   mark[num[now]] >= tot[num[now]]){
                       yes = false;
                       break;
                   }
                mark[num[now]]++;
                now+=step;
            }
            if(yes){
                res.push_back(i);
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

