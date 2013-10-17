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
    bool isSymmetric(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		bool res = true;
		if(root == NULL){
		}
		else{
			queue<TreeNode*> qu;
			qu.push(root);
			vector<int> f[2];
			f[0].push_back(0);
			vector<TreeNode*> vn;
			int bj = 0, bi = 1-bj;
			int w = 1;
			while(w>0){
				bj = 1-bj; bi = 1-bj;
				f[bj].resize(0);
				int tot = 0;
				vn.resize(0);
				for(int i = 0;i<w;i++){
					TreeNode *now = qu.front();
					qu.pop();
					if(now == NULL){
					}
					else{
						qu.push(now->left);
						tot++;
						vn.push_back(now->left);
						f[bj].push_back(i);

						qu.push(now->right);
						tot++;
						vn.push_back(now->right);
						f[bj].push_back(i);
					}					
				}
				
				for (int i = 0, j = tot-1; i<j; i++, j--)
				if((vn[i] == NULL && vn[j] == NULL ||	// Be careful about the NULL.
					vn[i] != NULL && vn[j] != NULL && vn[i]->val == vn[j]->val )&& 
				   f[bj][i]+f[bj][j] == f[bi].size()-1)
				{

				}
				else{
					return false;
				}
				w = tot;
			}
		}
		return res;
    }
};

void add_l(TreeNode* now, int a){
	TreeNode* tmp = new TreeNode(a);
	now->left = tmp;
}


void add_r(TreeNode* now, int a){
	TreeNode* tmp = new TreeNode(a);
	now->right = tmp;
}


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	

	return 0;
};

