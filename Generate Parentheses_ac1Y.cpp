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
    
    int nn;
    
    vector<string> res;
    
    void go(int sum, int num, int num_l, string now){
        if(num >= nn){
            res.push_back(now);        
        }    
        else{
            if(num_l<nn/2){
                go(sum+1, num+1, num_l+1, now+'(');
            }
            if(sum>0){
                go(sum-1, num+1, num_l, now+')');
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        nn = n*2;
        res.resize(0);
        
        go(0, 0, 0, "");
        
        return res;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

