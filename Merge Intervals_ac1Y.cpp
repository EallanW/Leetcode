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
 
bool cmp(const Interval &a, const Interval &b){
    return a.start < b.start ||
           a.start == b.start &&
           a.end < b.end;
}
 
 
class Solution {
public:

    vector<Interval> merge(vector<Interval> &intervals) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<Interval> sort_ivls = intervals, res;
        sort(sort_ivls.begin(), sort_ivls.end(), cmp);
        
        int st = 0, en = 0;
        while(st<sort_ivls.size()){
            en = st+1;
            Interval now = sort_ivls[st];
            while(en<sort_ivls.size() && now.end>=sort_ivls[en].start){
                now.end = max(now.end, sort_ivls[en].end);
                en++;
            }
            res.push_back(now);
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

