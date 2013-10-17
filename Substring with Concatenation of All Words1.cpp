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
        map<string, int> mp;
        int n = L.size();
        for (int i = 0;i<n;i++)
            mp[L[i]] = i+1;
            
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
			cout<<num[i]<<" ";
        }
		cout<<endl;
        
        int mark[n+1], tt = 0;
        memset(mark, 0, sizeof(mark));
        vector<int> res;
        for (int i = 0;i+(n-1)*step<len;i++){
            tt++;
            int now = i;
            bool yes = true;
            for (int j = 0;j<n;j++){
                if(num[now] < 0 ||
                   mark[num[now]] == tt){
                       yes = false;
                       break;
                   }
                mark[num[now]] = tt;
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

	string s = "lingmindraboofooowingdingbarrwingmonkeypoundcake";
	string a[] = 
		{"fooo","barr","wing","ding","wing"};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<sizeof(a)<<" "<<sizeof(a[0])<<" "<<n<<" "<<a[n-1]<<endl;
	vector<string> x;
	for (int i = 0; i<n; i++)
	{
		x.push_back(a[i]);
	}

	Solution sol;
	cout<<sol.findSubstring(s, x).size()<<endl;
	

	return 0;
};

