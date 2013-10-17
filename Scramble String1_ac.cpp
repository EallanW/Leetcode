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


struct tpo
{
	string s1, s2;
	bool operator < (const tpo& a)const{
		return s1<a.s1;
	}
};

map<tpo, bool> mp;


class Solution {
public:
	bool same(string s1, string s2){
		int mark[260];
		memset(mark, 0, sizeof(mark));
		for (int i = 0; i<s1.length(); i++)
		{
			mark[s1[i]]++;
		}

		for (int i = 0; i<s2.length(); i++)
		{
			mark[s2[i]]--;
			if(mark[s2[i]] < 0)
				return false;
		}
		return true;
	}

	bool check(string s1, string s2){
		if(s1 == "" && s2 == "")
			return true;
		else
		if(s1.length() != s2.length())
			return false;
		else
		if(s1.length() == 1)
			return s1 == s2;
		else
		if(s1 == s2)
			return true;
		else
		if(!same(s1, s2))
			return false;
		else{
			tpo now_p;
			now_p.s1 = s1;
			now_p.s2 = s2;
			
			if(mp.find(now_p)!=mp.end()){
				return mp[now_p];
			}
			

			for (int i = 0; i<s2.length()-1; i++)
			{
				string l_s = s2.substr(0, i+1), r_s = s2.substr(i+1);
				string l_s1 = s1.substr(0, i+1), r_s1 = s1.substr(i+1);
				bool tmp = check(l_s1, l_s) && check(r_s1, r_s);
				if(tmp){
					//cout<<s1<<" "<<s2<<"  "<<"YES\n";
					mp[now_p] = true;
					return true;
				}

				r_s1 = s1.substr(0, s1.length()-(i+1));
				l_s1 = s1.substr(s1.length()-(i+1));

				tmp = check(l_s1, l_s) && check(r_s1, r_s);
				if(tmp){
					//cout<<s1<<" "<<s2<<"  "<<"YES\n";
					mp[now_p] = true;
					return true;
				}				
			}

			//cout<<s1<<" "<<s2<<"  "<<"N\n";
			mp[now_p] = false;
			return false;
		}
	}

    bool isScramble(string s1, string s2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		mp.clear();
		bool res = check(s1,s2);

		return res;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;
	cout<<sol.isScramble("abcd","bdca");
	

	return 0;
};

