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
	void merge_vvi(vector<vector<int> > &a, vector<vector<int> > b){
		for (int i = 0; i<b.size(); i++)
		{
			a.push_back(b[i]);
		}
	}

	vector<vector<int> > path_sum_path(TreeNode *r, int sum, vector<int> now) {
		vector<vector<int> > res;
		
		now.push_back(r->val);
		TreeNode *left = r->left, *right = r->right;
		if(left == NULL && right == NULL){
			if(r->val == sum){
				res.push_back(now);
			}
		}
		else{
			vector<vector<int> > l_res, r_res;
			if(left != NULL)
				l_res = path_sum_path(left, sum-r->val, now);
			if(right != NULL)
				r_res = path_sum_path(right, sum-r->val, now);
			merge_vvi(res, l_res);
			merge_vvi(res, r_res);		
		}
		return res;
	}
    
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		vector<vector<int> > res;
		if(root == NULL){
			return res;
		}        
		else{
			vector<int> now;
			res = path_sum_path(root, sum, now);
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

