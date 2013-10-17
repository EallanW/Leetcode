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
    vector<vector<int> > levelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		vector<vector<int> > res;
		if(root == NULL){			
		}
		else{
			int w = 1;
			queue<TreeNode*> qu;
			qu.push(root);
			vector<int> vi;
			

			while(w>0){
				vi.resize(0);
				int tot = 0;
				for (int i = 0; i<w; i++)
				{
					TreeNode* now = qu.front();
					vi.push_back(now->val);
					qu.pop();
					if(now->left!=NULL){
						tot++;
						qu.push(now->left);						
					}
					if(now->right!=NULL){
						tot++;
						qu.push(now->right);						
					}
				}
				res.push_back(vi);
				w = tot;
			}
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

