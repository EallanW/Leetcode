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
    string minWindow(string s, string t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int s_len = s.length(), t_len = t.length();
		
		map<char, int> ch_s;
		ch_s.clear();

		int tot = 0;
		for (int i = 0; i<t_len; i++)
		//if(ch_s.find(t[i]) == ch_s.end())		//You don't need this!
		{
			ch_s[t[i]]++;
			if(ch_s[t[i]] == 1)
				tot++;			
		}
		map<char, int> mp;
		mp.clear();

		int st = 0, en = st, now = 0;
		string res = "";
		if(t == "")
			return "";
		while(en<s_len){
			while(en<s_len && now<tot){
				if(ch_s.find(s[en])!=ch_s.end()){
					mp[s[en]]++;
					if(mp[s[en]] == ch_s[s[en]])
						now++;
				}
				en++;
			}
			while(st<s_len && (ch_s.find(s[st]) == ch_s.end() ||
				  mp[s[st]]-1>=ch_s[s[st]])){
				if(ch_s.find(s[st]) != ch_s.end())
					mp[s[st]]--;
				st++;
			}
			//printf("%d %d\n", mp[s[0]], ch_s[s[0]]);
			//cout<<st<<" "<<en<<" "<<now<<endl;

			if(now == tot)
			if(res == "" ||
			   res.length() > en-st){
				res = s.substr(st, en-st);
			}
			mp[s[st]]--;
			if(mp[s[st]] < ch_s[s[st]])
				now--;
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
	cout<<sol.minWindow("a", "aa")<<endl;
	

	return 0;
};

