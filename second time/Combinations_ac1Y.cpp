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
    int nn, kk;
    vector<vector<int> > res;
    vector<int> tmp;
    
    void go(int st, int num){
        if(num>=kk){
            res.push_back(tmp);
        }
        else{
            for (int i = st;i<=nn-(kk-1-num);i++){
                tmp[num] = i;
                go(i+1, num+1);
            }
        }
    }
    
    vector<vector<int> > combine(int n, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        res.resize(0);
        tmp.resize(k);
        
        nn = n;
        kk = k;
        
        go(1, 0);
        
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

