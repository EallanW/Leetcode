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
    vector<vector<int> > generateMatrix(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        /*
        int mark[n+1][n+1];
        memset(mark, 0, sizeof(mark));
        */

        vector<vector<int> > res;

        for (int i = 0;i<n;i++){
            vector<int> tmp;
            for (int j = 0;j<n;j++){
                tmp.push_back(0);
            }
            res.push_back(tmp);
        }

        int ax[4] = {0, 1,  0, -1},
            ay[4] = {1, 0, -1, 0};
        int now_dir = 0;
        int now_x = 0, now_y = 0;

        for (int i = 1;i<=n*n;i++){
            res[now_x][now_y] = i;
            int ne_x = now_x+ax[now_dir],
                ne_y = now_y+ay[now_dir];
            if(0<=ne_x && ne_x<n &&
               0<=ne_y && ne_y<n &&
               res[ne_x][ne_y] == 0){
            }
            else{
                now_dir = (now_dir+1)%4;
                ne_x = now_x+ax[now_dir];
                ne_y = now_y+ay[now_dir];
            }
            now_x = ne_x;
            now_y = ne_y;
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

