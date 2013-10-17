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
	TreeNode* array_bst(vector<int> &num, int st, int en){
		if(st>en){
			return NULL;
		}
		else{
			int mid = st+(en-st)/2;
			TreeNode *now = new TreeNode(num[mid]);
			TreeNode *left = array_bst(num, st, mid-1), 
				     *right = array_bst(num, mid+1, en);
			now->left = left;
			now->right = right;

			return now;
		}
	}

    TreeNode* sortedArrayToBST(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int n = num.size();
		TreeNode *res = array_bst(num, 0, n-1);
		return res;        
    }
};



void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

