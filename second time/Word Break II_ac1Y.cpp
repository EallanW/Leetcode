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
    int n;
    vector<bool> f;
    vector<vector<int> > edge;
    string str;
    vector<string> res;
    
    void go(int num, string now){
        if(num == 0){
            now.erase(0,1);
            res.push_back(now);
        }
        else{
            for (int i = 0;i<edge[num].size();i++){
                string new_now = " "+str.substr(edge[num][i], num-edge[num][i])+now;
                go(edge[num][i], new_now);
            }
        }
    }
    
    vector<string> wordBreak(string s, unordered_set<string> &dict) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        str = s;
        n = s.length();
        f.resize(n+1);
        f[0] = true;
        edge.resize(n+1);
        res.resize(0);
        
        for (int i = 1;i<=n;i++){
            edge[i].resize(0);
            f[i] = false;
            string tmp = "";
            for (int j = i;j>=1;j--){
                tmp = s[j-1]+tmp;
                if (dict.find(tmp)!=dict.end()){
                    f[i] = f[i] || f[j-1];
                    edge[i].push_back(j-1);
                }
            }
        }
        
        if(f[n]){
            go(n,"");
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

