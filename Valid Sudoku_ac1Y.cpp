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
    bool checkRow(int r){
        bool res = true;
        int mark[10];
        memset(mark, 0, sizeof(mark));
        
        for (int i = 0;i<9;i++)
        if('0'<=b[r][i] && b[r][i]<='9'){
            mark[b[r][i]-'0']++;
            if(mark[b[r][i]-'0']>1){
                res = false;
                break;
            }                
        }
        return res;
    }

    bool checkColumn(int c){
        bool res = true;
        int mark[10];
        memset(mark, 0, sizeof(mark));
        
        for (int i = 0;i<9;i++)
        if('0'<=b[i][c] && b[i][c]<='9'){
            mark[b[i][c]-'0']++;
            if(mark[b[i][c]-'0']>1){
                res = false;
                break;
            }                
        }
        return res;
    }
    
    bool checkSqu(int x, int y){
        bool res = true;
        int mark[10];
        memset(mark, 0, sizeof(mark));
        
        for (int i = x;i<x+3;i++)
        for (int j = y;j<y+3;j++)
        if('0'<=b[i][j] && b[i][j]<='9'){
            mark[b[i][j]-'0']++;
            if(mark[b[i][j]-'0']>1){
                return false;
            }                
        }
        return res;
        
    }

    bool isValidSudoku(vector<vector<char> > &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        b = board;
        for (int i = 0;i<9;i++){
            bool res = checkRow(i);
            if(!res)
                return false;
            res = checkColumn(i);
            if(!res)
                return false;            
        }
        
        for (int i = 0;i<9;i+=3)
        for (int j = 0;j<9;j+=3){
            bool res = checkSqu(i,j);
            if(!res)
                return false;  
        }
        
        return true;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

