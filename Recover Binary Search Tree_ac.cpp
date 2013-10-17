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
	int pre, tot;
	TreeNode *n1, *n2, *pre_n;
	
	void checkBST(TreeNode* r){
		TreeNode *left = r->left,
				 *right = r->right;
		if(left!=NULL)
			checkBST(left);
		if(st || pre<r->val){
			st = false;
		}
		else{
			tot++;
			if(tot == 1){
				n1 = pre_n;
				n2 = r;

			}
			else{
				n2 = r;
			}
		}
		pre_n = r;
		pre = r->val;

		if(right!=NULL)
			checkBST(right);


	}

	void recoverTree(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        st = true;
		tot = 0;
		n1 = NULL; n2 = NULL;
		checkBST(root);
		swap(n1->val, n2->val);
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

