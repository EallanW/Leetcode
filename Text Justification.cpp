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
    vector<string> fullJustify(vector<string> &words, int l) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> res;
        if (words.size() == 0)
		{
			return res;
		}

		int st = 0;
		while (st<words.size())
		{
			int en = st+1, tot = words[st].length();
			while(en<words.size() && tot+1+words[en].length()<=l){
				tot+=1+words[en].length();
				en++;
			}

			if(en>=words.size()){
				//last line
				string tmp = words[st];
				for (int i = st+1; i<en; i++)
				{
					tmp+=" "+words[i];
				}
				int tot_space = l-tmp.length();
				for (int i = 1; i<=tot_space; i++)
				{
					tmp+=" ";
				}
				res.push_back(tmp);
			}
			else
			if(st+1 == en){
				string tmp = "";
				int num_space = l-words[st].length();
				string space_str = "";
				for (int j = 1; j<=num_space; j++)
				{
					space_str+=" ";
				}
				tmp=words[st]+space_str;
				res.push_back(tmp);
			}
			else{				
				int left = l-tot, 
					num_slot = en-1-st, 
					mou = left%num_slot;
				string tmp = words[st];
				for (int i = st+1; i<en; i++)
				{

					int num_space = 1+left/num_slot;
					if(mou>0){
						num_space++;
						mou--;
					}
					string space_str = "";
					for (int j = 1; j<=num_space; j++)
					{
						space_str+=" ";
					}
					tmp+=space_str+words[i];
				}
				res.push_back(tmp);
			}
			st = en;
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

