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
    
    
    int n, m_col[100], m_45[100], m_135[100];
    int res = 0;
    
    void go(int num){
        if(num>=n){
            res++;
        }
        else{
            for (int i = 0;i<n;i++)
            if(m_col[i] == 0 && m_45[num+i] == 0 && m_135[num-i+n] == 0){
                m_col[i] = 1;
                m_45[num+i] = 1;
                m_135[num-i+n] = 1;
                
                
                go(num+1);
                

                m_col[i] = 0;
                m_45[num+i] = 0;
                m_135[num-i+n] = 0;
            }
        }
    }
    int totalNQueens(int nn) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        res = 0;
        n = nn;
        
        memset(m_col, 0, sizeof(m_col));
        memset(m_45, 0, sizeof(m_45));
        memset(m_135, 0, sizeof(m_135));
        
        go(0);
        
        return res;
        
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

