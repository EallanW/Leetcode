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
	vector<string> res;
	string str;
	bool check(string s){
		return s[0] != '0' ||
			   s[0] == '0' && s.length() == 1;
	}
	void go(int num, int now, int cnt, string s, string s_num){
		if(num<=12)
		if(num == n){
			if(s_num != "")
			if(s_num[0] != '0' || 
  			   s_num[0] == '0' && now == 0 && s_num.length() == 1)
			if(cnt == 3){
				res.push_back(s);
			}
		}
		else{
			int ne = now;
			ne = now*10+(str[num]-'0');
			if(0<=ne && ne<=255 && check(s_num+str[num])){
				go(num+1, ne, cnt, s+str[num], s_num+str[num]);
				go(num+1, 0, cnt+1, s+str[num]+'.', "");
			}
			
			/*
			if(num>0 && 0<=now && now<=255 && 
				(s_num[0] != '0' || 
				 s_num[0] == '0' && now == 0 && s_num.length() == 1)){
				go(num+1, str[num]-'0', cnt+1, s+'.'+str[num], str[num]+"");
			}
			*/
		}
	}
    vector<string> restoreIpAddresses(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		n = s.size();
		res.resize(0);
		str = s;
		
		go(0,0,0,"","");

		return res;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

