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

    bool integer(string s){
		//!
        if(s.length() == 0)
            return false;
            
		if(s[0] == '-' || s[0] == '+')
			s.erase(0,1);

        //!
		if(s.length() == 0)
            return false;

		for (int i = 0; i<s.length(); i++)
		if('0'<=s[i] && s[i]<='9')
		{
		}
		else
			return false;
		return true;
	}

	bool real_num(string s){
		int ps = s.find(".");
		if(ps == -1){
			return integer(s);
		}
		else{
			string left = s.substr(0,ps),
				   right = s.substr(ps+1, s.length());
			//!
			if(integer(left)|| left == "" || left == "+" || left == "-"){
				
                //!
				if((left == "" || left == "+" || left == "-") &&
					right.length() == 0)
                    return false;
                for (int i = 0; i<right.length(); i++)
				if('0'<=right[i] && right[i]<='9')
				{
				}
				else
					return false;
				return true;
			}
			return false;
		}
	}

    bool isNumber(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string str = s;

		//cout<<str<<endl;
		bool res = false;

		while (str[0] == ' ')
		{
			str.erase(0,1);
		}

		while (str[str.length()-1] == ' ')
		{
			str.erase(str.length()-1, 1);
		}

		int ps = str.find("e");
		if (ps!=-1)
		{
			string left = str.substr(0,ps),
				   right = str.substr(ps+1, str.length());

			if (real_num(left) && integer(right))
			{
				res = true;
			}

		}
		else{
			if (real_num(str))
			{
				res = true;
			}
		}



		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;
	const char *s = "12345";
	sol.isNumber(s);
	string str = "abc";
	int res =str.find("dbc");
	//cout<<res<<endl;

	return 0;
};

