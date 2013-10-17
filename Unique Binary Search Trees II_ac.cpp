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
	vector<TreeNode *> gen_trees(int a, int b){
		vector<TreeNode *> res;
		if(a>b){
			res.push_back(NULL);
			return res;
		}
		else{
			for (int i = a; i<=b; i++)
			{
				vector<TreeNode *> l_res = gen_trees(a, i-1), 
								   r_res = gen_trees(i+1, b);
				for (int j = 0; j<l_res.size(); j++)
				for (int k = 0; k<r_res.size(); k++)
				{
					TreeNode* now = new TreeNode(i);
					now->left = l_res[j];
					now->right = r_res[k];
					res.push_back(now);
				}
			}
			return res;
		}
	}

    vector<TreeNode *> generateTrees(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		vector<TreeNode *> res = gen_trees(1,n);
		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

