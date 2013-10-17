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
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;

        int ax[4] = {0,1, 0,-1},
            ay[4] = {1,0,-1, 0};
            
        int now_dir = 0;
        int m = matrix.size();
        
        if(m == 0)
            return res;
        
        int n = matrix[0].size();
        int mark[m][n];
        memset(mark, 0, sizeof(mark));
        
        
        int nowx = 0,
            nowy = 0;
        for (int i = 0;i<m*n;i++){
            mark[nowx][nowy] = 1;
            res.push_back(matrix[nowx][nowy]);
            int nex = nowx+ax[now_dir],
                ney = nowy+ay[now_dir];
            if(0<=nex && nex<m &&
               0<=ney && ney<n && mark[nex][ney] == 0){
                nowx = nex;
                nowy = ney;
            }
            else{
                now_dir = (now_dir+1)%4;
                nex = nowx+ax[now_dir];
                ney = nowy+ay[now_dir];
                
                //Don't forget these two lines.
                nowx = nex;
                nowy = ney;
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

