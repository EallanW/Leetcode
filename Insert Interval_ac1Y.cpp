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


  struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
 
class Solution {
public:
    vector<Interval> insert(vector<Interval> &ivls, Interval newivl) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<Interval> res = ivls;
        res.insert(res.begin(), newivl);
        int now = 0;
        while(now+1<res.size()){
            if(res[now].end<res[now+1].start){
                break;
            }
            else
            if(res[now].start > res[now+1].end){
                swap(res[now], res[now+1]);
                now++;
            }
            else
            if(res[now].start<=res[now+1].start){
                if(res[now+1].end<=res[now].end){
                    res.erase(res.begin()+now+1);
                }
                else{
                    res[now].end = res[now+1].end;
                    res.erase(res.begin()+now+1);
                }
            }
            else
            if(res[now].end <= res[now+1].end){
                res.erase(res.begin()+now);
            }
            else{
                res[now+1].end = res[now].end;
                res.erase(res.begin()+now);
            }
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

