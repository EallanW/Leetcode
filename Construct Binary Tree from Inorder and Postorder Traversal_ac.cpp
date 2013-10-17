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
	                  vector<int> &postorder, int p_st, int p_en){
		
		if(i_st>i_en){
			return NULL;
		}
		else{
			TreeNode* res = new TreeNode(postorder[p_en]);
			int ps = -1;
			for (int i = i_st; i<=i_en; i++)
			if(inorder[i] == postorder[p_en])
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
			res->left = getTree(inorder, i_st, ps-1, postorder, p_st, p_st+ps-1-i_st);
			res->right = getTree(inorder, ps+1, i_en, postorder, p_en-1-(i_en-(ps+1)), p_en-1);

			return res;
		}
	}
	
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int l = inorder.size();
		TreeNode* res = getTree(inorder, 0, l-1, postorder, 0, l-1);
		return res;		
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;
	vector<int> a,b;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	b.push_back(3);
	b.push_back(2);
	b.push_back(1);
	sol.buildTree(a,b);

	return 0;
};

