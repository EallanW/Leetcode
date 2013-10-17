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
    struct Item{
        int ind, sum;
    };
    
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int n = gas.size();
        int num[2*n];
        for (int i = 0;i<n;i++){
            num[i] = gas[i]-cost[i];
        }
        for (int i = n;i<2*n-1;i++){
            num[i] = num[i-n];
        }
        int sum[2*n];
        sum[0] = num[0];
        for (int i = 1;i<n;i++){
            sum[i] = sum[i-1]+num[i];
        }
        
        Item qu[n+1];
        int head = 0, tail = 0;
        for (int i = 0;i<n;i++){
            while(head<tail && sum[i]<qu[tail].sum){
                tail--;
            }
            tail++;
            qu[tail].ind = i;
            qu[tail].sum = sum[i];
        }
        
        int res = -1;
        int delta = 0;
        int pre_sum = sum[n-1];
        for (int i = n-1;i<2*n-1;i++){
            int tmp = qu[head+1].sum;
            if(delta+tmp>=0){
                res = i-(n-1);
                break;
            }
            if(head<tail && qu[head+1].ind == i-(n-1)){
                head++;
            }
            delta-=num[i-(n-1)];
            if(i+1<2*n-1){
                int new_sum = pre_sum+num[i+1];
                pre_sum = new_sum;
                while(head<tail && new_sum < qu[tail].sum){
                    tail--;
                }
                tail++;
                qu[tail].ind = i+1;
                qu[tail].sum = new_sum;
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

