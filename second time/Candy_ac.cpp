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


vector<int> od, class_ratings;

bool cmp(int a, int b){
    return class_ratings[a] < class_ratings[b];
}

class Solution {
public:
    int candy(vector<int> &ratings) {
        // Note: The Solution object is instantiated only once and is reused by each test case.

        class_ratings = ratings;
        int n = ratings.size();
        od.resize(n);
        for (int i = 0;i<n;i++){
            od[i] = i;
        }
        
        sort(od.begin(), od.end(), cmp);
        //sort(&od[0], &od[n], cmp);
        
        int tot[n];
        memset(tot, 0, sizeof(tot));
        int res = 0;
        
        for (int i = 0;i<n;i++){
            int tmp = 1;
            if(od[i]-1>=0){
               if(ratings[od[i]] > ratings[od[i]-1]){
                   if(tmp < tot[od[i]-1]+1){
                      tmp = tot[od[i]-1]+1;
                   }
               }
            }
            if(od[i]+1<n){
               if(ratings[od[i]] > ratings[od[i]+1]){
                   if(tmp < tot[od[i]+1]+1){
                      tmp = tot[od[i]+1]+1;
                   }
               }
            }
            
            tot[od[i]] = tmp;
            
            res+=tmp;
            
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

