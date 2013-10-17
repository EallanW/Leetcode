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
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		string x = "";
		for (int i = 0; i<s.length(); i++)
		if('a'<=s[i] && s[i]<='z')
		{
			x+=s[i];
		}
		else
		if('A'<=s[i] && s[i]<='Z'){
			x+=s[i]+('a'-'A');
		}
		else
		if('0'<=s[i] && s[i]<='9'){
			x+=s[i];
		}

		bool res = true;
		for(int l = 0, r = x.length()-1; l<r;l++, r--)
		if(x[l] != x[r]){
			res = false;
			break;
		}

		return res;        
    }
};

void init_deal(){
}

int main(){


	

	return 0;
};

