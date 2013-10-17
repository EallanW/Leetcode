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
    vector<vector<char> > b;
    
    int mark[9][9][10];
    
    bool yes;
    
    void go(int dep){
        if(dep>=81){
            yes = true;
        }
        else{
            int now_x = dep/9,
                now_y = dep%9;
            if(b[now_x][now_y] == '.'){
                for (int i = 1;i<=9;i++)
                if(mark[now_x][now_y][i] == 0){
                                        
                    int num = i;
                    for (int k = 0;k<9;k++){
                        mark[k][now_y][num]++;
                        mark[now_x][k][num]++;
                    }
                    
                    int sx = now_x/3*3, sy = now_y/3*3;
                    
                    for (int x = sx;x<sx+3;x++)
                    for (int y = sy;y<sy+3;y++)
                        mark[x][y][num]++;            
                        
                        
                    b[now_x][now_y] = i+'0';
                    
                    go(dep+1);
                    
                    if(yes)
                        return ;
                    b[now_x][now_y] = '.';
                    
                    for (int k = 0;k<9;k++){
                        mark[k][now_y][num]--;
                        mark[now_x][k][num]--;
                    }                    
                    
                    for (int x = sx;x<sx+3;x++)
                    for (int y = sy;y<sy+3;y++)
                        mark[x][y][num]--;            


                }
            }
            else{
                go(dep+1);
            }
        }
    }
    
    void solveSudoku(vector<vector<char> > &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        b = board;
        
        memset(mark, 0, sizeof(mark));
        
        for (int i = 0;i<9;i++)
        for (int j = 0;j<9;j++)
        if(b[i][j] != '.'){
            int num = b[i][j] - '0';
            for (int k = 0;k<9;k++){
                mark[k][j][num]++;
                mark[i][k][num]++;
            }
            
            int sx = i/3*3, sy = j/3*3;
            
            for (int x = sx;x<sx+3;x++)
            for (int y = sy;y<sy+3;y++)
                mark[x][y][num]++;            
        }
        
        yes = false;
        go(0);
        
        board = b;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

