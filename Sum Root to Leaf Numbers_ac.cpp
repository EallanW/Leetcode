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
	int go(TreeNode *now, int d){
            if(now == NULL) return 0;//·ÀÖ¹¸ù¾ÍÊÇ¿Õ£¡

			int res = 0;
			int n_d = d*10+now->val;
			
			bool empty = true;
			if(now->left != NULL){
				int tmp = go(now->left, n_d);
				res+=tmp;
				empty = false;
			}
			if(now->right != NULL){
				int tmp = go(now->right, n_d);
				res+=tmp;
				empty = false;
			}

			if(empty)
				res = n_d;

			return res;
	}

    int sumNumbers(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		int res;
		res = go(root, 0);

		return res;        
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

