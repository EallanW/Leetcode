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
    int searchInsert(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(target<A[0])
            return 0;
        if(target>A[n-1])
            return n;
            
        int left = 0, right = n-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(target == A[mid])
                return mid;
            else
            if(A[mid]<target)
                left = mid+1;
            else
                right = mid-1;
        }
        if(target< A[right])
            return right;
        else
            return right+1;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

