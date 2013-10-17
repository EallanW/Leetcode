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
    int firstMissingPositive(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<int, int> left, right;
        left.clear();
        right.clear();
        
        for (int i = 0;i<n;i++)
        if(left.find(A[i])==left.end()){
            left[A[i]] = A[i];
            right[A[i]] = A[i];
            
            if(left.find(A[i]-1)!=left.end()){
                left[A[i]] = left[A[i]-1];
                right[A[i]-1] = A[i];
                right[left[A[i]]] = A[i];
            }
            
            if(right.find(A[i]+1)!=right.end()){
                right[A[i]] = right[A[i]+1];
                left[A[i]+1] = left[A[i]];
                left[right[A[i]]] = left[A[i]];
                if(left.find(A[i]-1)!=left.end()){
                    right[A[i]-1] = right[A[i]];
                    right[left[A[i]]] = right[A[i]];
                }
            }
            
        }
        int res = 1;
        if(right.find(res)!=right.end()){
            while(right[res]>res)
                res = right[res];
            res++;
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

