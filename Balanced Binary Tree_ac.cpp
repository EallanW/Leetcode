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
	bool balanced(TreeNode *root, int &d){
		if(root == NULL){
			d = 0;
			return true;
		}
		else{
			TreeNode *left = root->left, *right = root->right;
			int ld, rd;
			bool l_res = balanced(left, ld), r_res = balanced(right, rd);
			d = max(ld,rd)+1;
			bool res;
			if(l_res && r_res && abs(ld-rd)<=1)
				res = true;
			else
				res = false;
			return res;			
		}
	}

    bool isBalanced(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int d;
		return balanced(root, d);
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

