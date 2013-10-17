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

    struct tnode{
        int ps, v;
    };

    int maxArea(vector<int> &height) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = height.size();
        
        vector<tnode> v_n;
        
        int res = 0;
        
        for (int i = 0;i<n;i++)
        if(i == 0){
            tnode now;
            now.ps = 0;
            now.v = height[0];
            v_n.push_back(now);
        }
        else{
            int left = -1, right = v_n.size()-1;
            
            if(v_n[right].v < height[i]){
                tnode now;
                now.ps = i;
                now.v = height[i];
                v_n.push_back(now);
            }
            else{
                while(left+1<right){
                    int mid = left+(right-left)/2;
                    
                    if(mid == -1 || 
                       v_n[mid].v < height[i]){
                           left = mid;
                    }
                    else{
                        right = mid;
                    }
                }
                if(res < (i-v_n[right].ps)*height[i])
                   res = (i-v_n[right].ps)*height[i];
                
            }
        }

        v_n.resize(0);
        for (int i = n-1;i>=0;i--)
        if(i == n-1){
            tnode now;
            now.ps = n-1;
            now.v = height[n-1];
            v_n.push_back(now);
        }
        else{
            int left = -1, right = v_n.size()-1;
            
            if(v_n[right].v < height[i]){
                tnode now;
                now.ps = i;
                now.v = height[i];
                v_n.push_back(now);
            }
            else{
                while(left+1<right){
                    int mid = left+(right-left)/2;
                    
                    if(mid == -1 || 
                       v_n[mid].v < height[i]){
                           left = mid;
                    }
                    else{
                        right = mid;
                    }
                }
                if(res < (v_n[right].ps-i)*height[i])
                   res = (v_n[right].ps-i)*height[i];
                
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

