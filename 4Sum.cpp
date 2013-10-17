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
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        vector<vector<int> > res;
        
        set<vector<int> > res_set;
        
        sort(num.begin(), num.end());
        
		
		int tot = num.size();
		

        for (int i = 0;i<tot-3;i++)
        for (int j = i+1;j<tot-2;j++){
            
			int left = j+1, right = num.size()-1;
            while(left<right){
                int tmp = num[i]+num[j]+num[left]+num[right];
                if(tmp == target){
                    vector<int> res_item;
                    res_item.push_back(num[i]);
                    res_item.push_back(num[j]);
                    res_item.push_back(num[left]);
                    res_item.push_back(num[right]);
                    
                    if(res_set.find(res_item) == res_set.end()){
                        res.push_back(res_item);
                        res_set.insert(res_item);
                    }
                    
                    left++;
                }
                else
                if(tmp < target){
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
	Solution sol;
	vector<int> vi;
	sol.fourSum(vi, 0);
	

	return 0;
};

