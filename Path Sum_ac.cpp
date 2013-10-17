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
    bool hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(root == NULL){			//Be careful about the NULL node.
			return false;
		}
		else{
			bool l_res = false, r_res = false;
			TreeNode *left, *right;
			left = root->left;
			right = root->right;
			if(left == NULL && right == NULL){
				return sum == root->val;
			}
			else{
				if(left != NULL)
					l_res = hasPathSum(left, sum-root->val);
				if(right != NULL)
					r_res = hasPathSum(right, sum-root->val);
				bool res = l_res || r_res;
				return res;
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

