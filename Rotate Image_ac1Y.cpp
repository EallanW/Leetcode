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
    void rotate(vector<vector<int> > &mat) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = mat.size();
        int lx = 0, ly = 0,
            rx = n-1, ry = n-1;
        while(lx<rx){
            for (int i = ly;i<ry;i++){
                int ax[5], ay[5];
                ax[0] = lx;
                ay[0] = i;
                
                ax[1] = lx+i-ly;
                ay[1] = ry;
                
                ax[2] = rx;
                ay[2] = ry-(i-ly);
                
                ax[3] = rx-(i-ly);
                ay[3] = ly;
                
                int tmp = mat[ax[3]][ay[3]];
                for (int j = 3;j>=1;j--)
                    mat[ax[j]][ay[j]] = mat[ax[j-1]][ay[j-1]];
                mat[ax[0]][ay[0]] = tmp;
                
                
            }
            lx++;ly++;
            rx--;ry--;
        }
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

