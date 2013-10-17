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
    void setZeroes(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		int m = matrix.size();
		if(m == 0)
			return ;
		int n = matrix[0].size();

		bool mark_r = false, mark_c = false;
		for (int j = 0; j<n; j++)
		if(matrix[0][j] == 0)
		{
			mark_r = true;
			//matrix[0][0] = 0;
		}

		for (int i = 0; i<m; i++)
		if(matrix[i][0] == 0)
		{
			mark_c = true;
			//matrix[0][0] = 0;
		}


		
		for (int i = 1; i<m; i++)
		for (int j = 1; j<n; j++)
		if(matrix[i][j] == 0)
		{
			matrix[0][j] = 0;
			matrix[i][0] = 0;
		}


		for (int i = 1; i<m; i++)
		for (int j = 1; j<n; j++)
		if(matrix[i][0] == 0 ||
           matrix[0][j] == 0)
		{
			matrix[i][j] = 0;
		}

		if(matrix[0][0] == 0){
			for (int j = 1; j<n; j++)
			{
				matrix[0][j] = 0;
			}
			for (int i = 1; i<m; i++)
			{
				matrix[i][0] = 0;
			}
		}
		else{
			if(mark_r){
				for (int j = 0; j<n; j++)
				{
					matrix[0][j] = 0;
				}
			}
			if(mark_c){
				for (int i = 0; i<m; i++)
				{
					matrix[i][0] = 0;
				}
			}
		}

    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

