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


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

 

class Solution {
public:
	int dfs(TreeNode *r, int d){
		int res = -1;
		TreeNode *left, *right;
		left = r->left;
		right = r->right;
		if(left == NULL && right == NULL){
			res = d;
		}
		else{
			int r_l = -1, r_r = -1;
			if(left != NULL)
				r_l = dfs(left, d+1);
			if(right != NULL)
				r_r = dfs(right, d+1);
			res = r_l;
			if(res == -1 || 
			   res > r_r && r_r>-1)
			   res = r_r;
		}
		return res;
	}
    int minDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		if(root == NULL)
			return 0;
		else
			return dfs(root, 1);        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

