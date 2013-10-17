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
    int romanToInt(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string roman[4][10];
        for (int i = 0;i<4;i++)
        for (int j = 0;j<10;j++)
            roman[i][j] = "";
            
        roman[0][1] = "I";
        roman[0][2] = "II";
        roman[0][3] = "III";
        roman[0][4] = "IV";
        roman[0][5] = "V";
        roman[0][6] = "VI";
        roman[0][7] = "VII";
        roman[0][8] = "VIII";
        roman[0][9] = "IX";
        
        roman[1][1] = "X";
        roman[1][2] = "XX";
        roman[1][3] = "XXX";
        roman[1][4] = "XL";
        roman[1][5] = "L";
        roman[1][6] = "LX";
        roman[1][7] = "LXX";
        roman[1][8] = "LXXX";
        roman[1][9] = "XC";
        
        roman[2][1] = "C";
        roman[2][2] = "CC";
        roman[2][3] = "CCC";
        roman[2][4] = "CD";
        roman[2][5] = "D";
        roman[2][6] = "DC";
        roman[2][7] = "DCC";
        roman[2][8] = "DCCC";
        roman[2][9] = "CM";
        
        roman[3][1] = "M";
        roman[3][2] = "MM";
        roman[3][3] = "MMM";
        
        string now = s;
        
        int mi[4];
        mi[0] = 1;
        
        for (int i = 1;i<4;i++)
            mi[i] = mi[i-1]*10;
            
        int res = 0;
        for (int i = 3;i>=0;i--){
            
            int st = 9;
            if(i == 3)
                st = 3;
            for (int j = st;j>=1;j--)
            if(now.find(roman[i][j]) == 0){
                res+=j*mi[i];
                now.erase(0, roman[i][j].size());
                break;
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

