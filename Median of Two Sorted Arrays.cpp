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

    int get_kth(int A[], int m, int B[], int n, int k){
        
        int left = 0, right = m-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            int front = k-1-mid;
            //cout<<mid<<" "<<front<<endl;
			//printf("B[front-1] = %d, A[mid] = %d\n", B[front-1], A[mid]);
            if(front<0){
                right = mid-1;
            }
            else
            if(front == 0){
                if(n == 0){
                    if(mid+1 == k)
                        return A[mid];
                    else
                    if(mid+1<k)
                        left = mid+1;
                    else
                        right = mid-1;
                }
                else
                if(A[mid] <= B[0])
                    return A[mid];
                else
                    right = mid-1;
            }
            else{
                if(front>n){
                    left = mid+1;
                }
                else{
                    if(B[front-1]<=A[mid] && 
                        (front>=n || A[mid]<=B[front]))//Don't forget the brackets!
                        return A[mid];
                    else
                    if(B[front-1]>A[mid]){
                        left = mid+1;
                    }
                    else{
                        right = mid-1;
                    }
                }
            }
            
        }

        
        left = 0; right = n-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            int front = k-1-mid;
			//printf("b mid = %d, front = %d\n", mid, front);
            if(front<0){
                right = mid-1;
            }
            else
            if(front == 0){
                if(m == 0){
                    if(mid+1 == k)
                        return B[mid];
                    else
                    if(mid+1<k)
                        left = mid+1;
                    else
                        right = mid-1;
                }
                else
                if(B[mid] <= A[0])
                    return B[mid];
                else
                    right = mid-1;
            }
            else{
                if(front>m){
                    left = mid+1;
                }
                else{
                    if(A[front-1]<=B[mid] && 
                        (front>=m || B[mid]<=A[front]))//Don't forget the brackets!
                        return B[mid];
                    else
                    if(A[front-1]>B[mid]){
                        left = mid+1;
                    }
                    else{
                        right = mid-1;
                    }
                }
            }
        }
        

    }
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        double res = 0;
        
        if((m+n) % 2 == 1){
            res = get_kth(A, m, B, n, (m+n+1)/2);            
        }
        else{
            res = ((double)get_kth(A, m, B, n, (m+n)/2)+get_kth(A, m, B, n, (m+n)/2+1))*0.5;
        }
        
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	int a[] = {1,2};
	int b[] = {1,2,3};
	int m = sizeof(a)/sizeof(a[0]),
		n = sizeof(b)/sizeof(b[0]);

	Solution sol;
	cout<<sol.findMedianSortedArrays(a,m,b,n)<<endl;
	

	return 0;
};

