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

    vector<vector<int> > res;
    vector<int> vi_now, mark, number;    
    
    int n;
    
    void go(int num){
        if(num>=n){
            res.push_back(vi_now);
        }
        else{
            for (int i = 0;i<n;i++)
            if(mark[i] == 0){
                mark[i] = 1;
                
                vi_now[num] = number[i];
                go(num+1);
                
                mark[i] = 0;
            }
        }
    }
    
    vector<vector<int> > permute(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        number = num;
        
        n = num.size();
        res.resize(0);
        vi_now.resize(n);
        mark.resize(n);
        for (int i = 0;i<n;i++)
            mark[i] = 0;
            
        go(0);       
      
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

