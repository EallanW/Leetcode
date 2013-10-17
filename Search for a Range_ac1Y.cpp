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
    vector<int> searchRange(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;
        res.resize(2);
        res[0] = -1;
        res[1] = -1;
        
        if(n <= 1){
            if(n == 0)
                return res;
            if(A[0] == target){
                res[0] = 0;
                res[1] = 0;
            }
            return res;
        }
        else{
            if(target<A[0] || target>A[n-1])
                return res;
            
            if(A[0] == target){
                res[0] = 0;
            }
            else{
                int left = 0, right = n-1;
                while(left+1<right){
                    int mid = left+(right-left)/2;
                    if(A[mid]<target)
                        left = mid;
                    else
                        right = mid;
                }
                if(A[right] == target)
                    res[0] = right;
            }
            
            if(A[n-1] == target){
                res[1] = n-1;
            }
            else{
                int left = 0, right = n-1;
                while(left+1<right){
                    int mid = left+(right-left)/2;
                    if(A[mid]>target)
                        right = mid;
                    else
                        left = mid;
                }
                if(A[left] == target)
                    res[1] = left;                
            }
            
            return res;
            
        }
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

