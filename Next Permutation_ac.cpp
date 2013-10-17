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
    void nextPermutation(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = num.size();
    	if(n>1){
			int i = n-1;
			while(i>0 && num[i-1]>=num[i]){
				i--;
			}
			//cout<<i<<endl;
			if(i == 0){
				for (int j = 0, k = n-1; j<k; j++,k--)
				{
					swap(num[j], num[k]);
				}
			}
			else{
				int ps, min_num = 2147483647;
				for (int j = i; j<n; j++)
				if(num[i-1] < num[j] &&
				   min_num > num[j]) 
				{
					ps = j;
					min_num = num[j];
				}
				swap(num[i-1], num[ps]);
				for (int j = i; j<n; j++)
					for (int k = j+1; k<n; k++)
					if(num[j]>num[k])
					{
						swap(num[j], num[k]);
					}				
			}
		}
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	vector<int> vc;
	vc.push_back(1);
	vc.push_back(1);
	vc.push_back(5);

	Solution sol;
	sol.nextPermutation(vc);


	

	return 0;
};

