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
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;
		res.resize(0);
		
		if(root == NULL){
		}
		else{
			stack<TreeNode*> sta; 
			stack<int> sta_state;
			sta.push(root);
			sta_state.push(0);
			while(!sta.empty()){
				TreeNode* now = sta.top();
				int n_sta = sta_state.top();
				if(n_sta == 0){
					sta_state.pop();
					sta_state.push(1);
					TreeNode *left = now->left;
					if(left != NULL){
						sta.push(left);
						sta_state.push(0);
					}
					else{
						sta_state.pop();
						sta_state.push(2);
					}
				}
				else
				if(n_sta == 2){
					res.push_back(now->val);
					sta_state.pop();
					sta_state.push(3);
					TreeNode *right = now->right;
					if(right != NULL){
						sta.push(right);
						sta_state.push(0);
					}
					else{
						sta_state.pop();
						sta_state.push(4);
					}
				}
				else
				if(n_sta == 4){
					sta.pop();
					sta_state.pop();
					if(!sta_state.empty()){		//!Don't forget this!
						int tmp_sta = sta_state.top();
						tmp_sta++;
						sta_state.pop();
						sta_state.push(tmp_sta);
					}
				}

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

