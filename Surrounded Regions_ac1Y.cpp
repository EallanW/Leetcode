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
    int m,n;
    
    struct tpo{
        int x,y;    
    };
    
    void fill1(vector<vector<char> > &b, int st_x, int st_y){
        tpo st;
        st.x = st_x;
        st.y = st_y;
        
        int mark[m][n];
        memset(mark, 0, sizeof(mark));
        
        int ax[4] = {-1,1, 0, 0},
            ay[4] = {0, 0,-1, 1};
        
        queue<tpo> qu;
        qu.push(st);
        mark[st.x][st.y] = 1;
        while(!qu.empty()){
            tpo now = qu.front();
            qu.pop();
            b[now.x][now.y] = '1';
            for (int i = 0;i<4;i++){
                tpo ne = now;
                ne.x = ne.x+ax[i];
                ne.y = ne.y+ay[i];
                if(0<=ne.x && ne.x<m &&
                   0<=ne.y && ne.y<n &&
                   mark[ne.x][ne.y] == 0 &&
                   b[ne.x][ne.y] == 'O'){
                   mark[ne.x][ne.y] = 1;
                   qu.push(ne);                           
                }
            }
            
        }
    }
    
    void solve(vector<vector<char> > &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        m = board.size();
        if(m>0){
            n = board[0].size();
            if(n == 0)
                return ;
                
            for (int j = 0;j<n;j++){
                if(board[0][j] == 'O')
                    fill1(board, 0,j);
                if(board[m-1][j] == 'O')
                    fill1(board, m-1,j);
            }
            
            for (int i = 0;i<m;i++){
                if(board[i][0] == 'O')
                    fill1(board, i, 0);
                if(board[i][n-1] == 'O')
                    fill1(board, i, n-1);
            }
            
            for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++)
            if(board[i][j] != '1')
                board[i][j] = 'X';
                
            for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++)
            if(board[i][j] == '1')
                board[i][j] = 'O';
            
        }
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

