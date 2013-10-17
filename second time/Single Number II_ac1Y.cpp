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
    int singleNumber(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        long long num = 1;
        for (int i = 1;i<=31;i++){
            num = num*2;
        }
        
        long long max_num = 0;
        for (int i = 0;i<n;i++)
        if(max_num < A[i]+num){
           max_num = A[i]+num;
        }
        
        long long base = 1;
        long long res = 0;
        while(true){
            long long sum = 0;
            for (int i = 0;i<n;i++){
                sum+=(A[i]+num)/base;
            }
            res+=base*(sum%3);
            if(max_num<=base){
                break;
            }
            base*=3;
        }
        return res-num;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

