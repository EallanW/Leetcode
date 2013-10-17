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
   int ladderLength(string start, string end, unordered_set<string> &dict) {
       // Start typing your C/C++ solution below
       // DO NOT write int main() function
       
       if(start == end)
           return 1;
       
       set<string> dict_s;
       unordered_set<string>::iterator it;
       for(it = dict.begin();it != dict.end();it++)
           dict_s.insert(*it);
           
       queue<string> qu;
       int w = 1;
       qu.push(start);
       int dep = 1;
       set<string> hash;
       hash.insert(start);
       
       while(w>0){
           dep++;
           int tot = 0;
           for (int ttt = 0;ttt < w;ttt++){
               string now = qu.front();
               qu.pop();
               for (int i = 0;i<now.length();i++){
                   string new_str = now;
                   for (int j = 0;j<26;j++)
                   if(now[i] != 'a'+j){
                       new_str[i] = 'a'+j;
                       if(/*hash.find(new_str) == hash.end()&&*/
                          dict.find(new_str) != dict.end()){
                           if(new_str == end)
                               return dep;
                           dict.erase(new_str);
                           //hash.insert(new_str);
                           tot++;
                           qu.push(new_str);
                       }
                   }
               }
           }
           w = tot;
           
       }
       return 0;
   }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

