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
	bool st;
	int pre;
	
	bool checkBST(TreeNode* r){
		TreeNode *left = r->left,
				 *right = r->right;
		bool l_res = true, r_res = true;
		if(left!=NULL)
			l_res = checkBST(left);
		if(l_res && (st || pre<r->val)){
			st = false;
			pre = r->val;
			if(right!=NULL)
				r_res = checkBST(right);
			if(r_res)
				return true;
		}

		return false;

	}

    bool isValidBST(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		       
		st = true;
		if(root == NULL)
			return true;
		else
			return checkBST(root);
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

