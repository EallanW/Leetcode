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
	int x, y;
	bool operator<(const tpo &p) const{ 
         return x < p.x ||
			    x == p.x && y < p.y;
    }
};

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
		if (s1.size()+s2.size() != s3.size())
		{
			return false;
		}
		else{
			set<tpo> s[2];
			s[0].clear();
			s[1].clear();
			tpo p;
			p.x = -1;
			p.y = -1;

			s[0].insert(p);
			int bj = 0, bi = 1;
			for (int i = 1; i<=s3.size(); i++)
			{
				bj = 1-bj; bi = 1-bj;
				set<tpo>::iterator it;
				s[bj].clear();
				for (it = s[bi].begin(); it != s[bi].end(); it++)
				{
					tpo now = *it, ne;
					if(s3[i-1] == s1[now.x+1]){
						ne = now;
						ne.x++;
						s[bj].insert(ne);
					}
					if(s3[i-1] == s2[now.y+1]){
						ne = now;
						ne.y++;
						s[bj].insert(ne);
					}
				}
			}
			return s[bj].size()>0;
		}        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

