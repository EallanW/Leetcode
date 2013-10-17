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
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        vector<string> vs;
        vs.resize(nRows);
        
        for(int i = 0;i<nRows;i++){
            vs[i] = "";
            for (int j = 0;j<(s.length()/nRows+1)*2;j++)
                vs[i]+=" ";
        }
        
        int st = 0, st_col = 0;
        while(st<s.length()){
            
            for (int i = 0;i<nRows;i++){
                vs[i][st_col] = s[st];
                st++;
                if(st>=s.length())
                    break;
            }
            for (int i = nRows-2;i>=1;i--){
                vs[i][st_col+1] = s[st];
                st++;
                if(st>=s.length())
                    break;
            }
            
            
            st_col+=2;
        }
        
        string res = "";
        for (int i = 0;i<nRows;i++)
        for (int j = 0;j<vs[i].length();j++)
        if(vs[i][j] != ' ')
            res+=vs[i][j];
            
        return res;
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

