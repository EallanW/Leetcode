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
#define ansdatat int


#define datat long long
class Solution {
public:
    string int_to_str(datat a){
        stringstream ss;
        ss<<a;
        string res;
        ss>>res;
        return res;
    }

    datat str_to_int(string s){
        stringstream ss(s);
        datat res;
        ss>>res;
        return res;
    }

    
    int divide(int dividend, int divisor) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int sign = 1;
        if((dividend<0)^(divisor<0))
            sign = -1;
        datat a = abs((datat)dividend),
              b = abs((datat)divisor);
    	string str_a = int_to_str(a),
			   str_b = int_to_str(b);
            
        int len_a = int_to_str(a).length(),
            len_b = int_to_str(b).length();
        
        datat tmp_res = 0;
        int res = 0;
        
        string res_str = "";
        if(len_a<len_b)
            return 0;
        else{
            string left_str = int_to_str(a).substr(0, len_b);
            datat left = str_to_int(left_str);
            for (int i = len_a-len_b;i>=0;i--){
				datat sum = 0;
                int tmp = -1;
                for(int j = 1;j<=10;j++){
                    sum+=b;
                    if(sum>left){
                        tmp = j-1;
                        sum-=b;
                        break;
                    }
                }
                left = left-sum;
                //cout<<left_str<<" "<<tmp<<" "<<left;
                if(i>0){
                    left_str = int_to_str(left);
                    left_str+=str_a[(len_a-1)-(i-1)];
                    left = str_to_int(left_str);
                }
				//cout<<" new_left = "<<left_str<<" "<<left<<" "<<"i-1 = "<<i<<"a = "<<int_to_str(a)<<" "<<str_a[i-1]<<endl;
                res_str+='0'+tmp;
				//cout<<left_str<<" "<<tmp<<endl;
            }
            if(res_str[0] == '0' && res_str.length()>1)
                res_str.erase(0,1);
            tmp_res = str_to_int(res_str)*sign;
        }
        res = tmp_res;
        
        return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	Solution sol;
	cout<<sol.divide(2147483647,1)<<endl;

	return 0;
};

