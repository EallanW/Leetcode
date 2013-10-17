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
 
int num = 0;

class Solution {
public:
	TreeNode* getTree(vector<int> &inorder, int i_st, int i_en, 
	                  vector<int> &preorder, int p_st, int p_en){
		
		if(i_st>i_en){
			return NULL;
		}
		else{
			TreeNode* res = new TreeNode(preorder[p_st]);
			int ps = -1;
			for (int i = i_st; i<=i_en; i++)
			if(inorder[i] == preorder[p_st])
			{
				ps = i;
				break;
			}
			//if(num<20)
			//	printf("i[st] = %d p[en] = %d\n", inorder[i_st], postorder[p_en]);
			/*
			if(num++<20) printf("ps = %d %d %d  %d %d left %d %d  %d %d right %d %d  %d %d\n",
				ps, i_st, i_en, p_st, p_en, i_st, ps-1, p_st, p_st+ps-1-i_st, ps+1, i_en,i_en-1-(i_en-(ps+1)), i_en-1);
			*/
			res->left = getTree(inorder, i_st, ps-1, preorder, p_st+1, p_st+1+(ps-1-i_st));
			res->right = getTree(inorder, ps+1, i_en, preorder, p_en-(i_en-(ps+1)), p_en);

			return res;
		}
	}
	
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int l = inorder.size();
		TreeNode* res = getTree(inorder, 0, l-1, preorder, 0, l-1);
		return res;		
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

