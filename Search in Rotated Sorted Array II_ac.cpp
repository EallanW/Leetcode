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
    bool search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int left = 0, right = n-1;
		while(left<=right){
			int mid = left+(right-left)/2;
			if(A[mid] == target)
				return true;
			else
			if(A[mid]>A[right]){
				if(target>A[mid])
					left = mid+1;
				else
				if(target>=A[left])
					right = mid-1;
				else
					left = mid+1;
			}
			else
			if(A[mid]<A[right]){
				if(target<A[mid])
					right = mid-1;
				else
				if(target<=A[right])
					left = mid+1;	
				else
					right = mid-1;
			}
			else{//A[mid] == A[right]
				right--;
			}
		}
		return false;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

