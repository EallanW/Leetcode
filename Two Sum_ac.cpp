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

vector<int> num;

bool cmp(int a, int b){
    return num[a]<num[b];
}

class Solution {
public:

    
    
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        num = numbers;
        int n = numbers.size();
        int od[n];
        for (int i = 0;i<n;i++)
            od[i] = i;
        
        sort(od, od+n, cmp);
        
        int st = 0, en = n-1;
        
        while(st<en){
            int tmp = num[od[st]]+num[od[en]];
            if(tmp == target){
                vector<int> res;
                if(od[st]<od[en]){
                    res.push_back(od[st]+1);
                    res.push_back(od[en]+1);
                }
                else{
                    res.push_back(od[en]+1);
                    res.push_back(od[st]+1);
                }
                return res;
            }
            else
            if(tmp<target)
                st++;
            else
                en--;
        }
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

