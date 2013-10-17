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
	TreeNode* go(TreeNode *r, TreeNode* &tail){
		TreeNode *left, *right;
		left = r->left;
		right = r->right;
		r->left = NULL;
		r->right = left;
		if(left!=NULL){
			go(left, tail);
			tail->left = NULL;
			tail->right = right;
		}
		else{
			tail = r;
			tail->left = NULL;
			tail->right = right;
		}

		if(right!=NULL){
			go(right,tail);
		}
		else{					//Be careful about the link of pointers.
			tail->left = NULL;
			tail->right = NULL;
		}
	}

    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		if(root!=NULL){
			TreeNode *tail = NULL;
			go(root, tail);
		}
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

