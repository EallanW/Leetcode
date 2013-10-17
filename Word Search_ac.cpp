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

int ax[4] = {-1,1,0,0},
    ay[4] = {0,0,-1,1};

class Solution {
public:
	vector<vector<char> > b;
	vector<vector<int> > mark;
	string w;
	int len, m, n;
	bool res;

	void go(int num, int x, int y){
		if(num >= len-1){
			res = true;
		}
		else{
			for (int i = 0; i<4; i++)
			{
				int nx = x+ax[i],
					ny = y+ay[i];
				if(0<=nx && nx<m &&
				   0<=ny && ny<n &&
				   b[nx][ny] == w[num+1] &&
				   mark[nx][ny] == 0){
				   mark[nx][ny] = 1;
				   
				   go(num+1, nx, ny);

				   mark[nx][ny] = 0;
				   if(res)
					   return;
				}
			}

		}
	}

    bool exist(vector<vector<char> > &board, string word) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		if(word == "")
			return true;

        len = word.size();
		m = board.size();
		if(m == 0){
			return word == "";
		}
		n = board[0].size();
		b = board;
		w = word;

		res = false;

		mark.resize(0);
		for (int i = 0; i<m; i++)
		{
			vector<int> vi;
			vi.resize(0);
			for (int j = 0; j<n; j++)
			{
				vi.push_back(0);
			}
			mark.push_back(vi);
		}

		for (int i = 0; i<m; i++)
		for (int j = 0; j<n; j++)
		if(word[0] == board[i][j])
		{
			mark[i][j] = 1;
			go(0, i, j);
			mark[i][j] = 0;
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

