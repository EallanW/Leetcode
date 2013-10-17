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
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string s = str;
        while(s[0] == ' ')
            s.erase(0,1);
            
        int sign = 1;
        if(s[0] == '-'){
            sign = -1;
            s.erase(0,1);
        }
        else
        if(s[0] == '+'){
            s.erase(0,1);
        }
        
        //while(s.length()>=1 && !('0'<=s[s.length()-1] && s[s.length()-1]<='9'))
        //    s.erase(s.length()-1, 1);
        
        
        long long tmp_ans = 0, ll_max = INT_MAX, ll_min = INT_MIN;
        int res = 0;
        for (int i = 0;i<s.length();i++)
        if('0'<=s[i] && s[i]<='9'){
            tmp_ans = tmp_ans*10+sign*(s[i]-'0');
            if(tmp_ans > ll_max){
                res = INT_MAX;
                break;
            }
            if(tmp_ans < ll_min){
                res = INT_MIN;
                break;
            }
        }
        else
            return tmp_ans;
        
        if(ll_min<=tmp_ans && tmp_ans<=ll_max)
            res = tmp_ans;
        
        return res;
            
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

