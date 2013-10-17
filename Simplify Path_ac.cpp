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
    string simplifyPath(string path) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string res = "";
		
		if(path == "/")
			return path;

		if (path[path.length()-1] != '/')
		{
			path+="/";
		}

		int tot = 0;

		int st = 1;
		while(st<path.length()){
			
			string tmp = "";
			int en = st;
			while(en<path.length() && path[en] != '/'){
				tmp+=path[en];
				en++;
			}
			st = en+1;

			if(tmp == "." || tmp == ""){
			}
			else
			if(tmp == ".."){
				while(res.length()>0 && res[res.length()-1] != '/')
					res.erase(res.length()-1, 1);
				if(res.length()>0)
					res.erase(res.length()-1);
			}
			else{
				res+="/"+tmp;
			}

		}

		if(res == "")
			res = "/";



		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

