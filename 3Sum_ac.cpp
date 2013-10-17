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
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        sort(num.begin(), num.end());
        
        set<vector<int> > res_set;
        
        vector<vector<int> > res;
        
        int n = num.size();
        for (int i = 0;i<n-2;i++){
            int left = i+1, right = n-1;
            while(left<right){
                int tmp = num[i] + num[left] + num[right];
                if(tmp == 0){
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[left]);
                    tmp.push_back(num[right]);
                    
                    if(res_set.find(tmp) == res_set.end()){
                        res_set.insert(tmp);
                        res.push_back(tmp);
                    }
                    left++;
                    
                }
                else
                if(tmp < 0){
                    left++;
                }
                else{
                    right--;                    
                }
                    
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

