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
	struct tresult
	{
		int a, p;
	};

	tresult maxpath(TreeNode *now){
		tresult res;
		if(now == NULL){
			res.a = -1000000000;
			res.p = 0;
		}
		else{
			res.a = now->val;
			res.p = now->val;
			tresult lres, rres;
			lres = maxpath(now->left);
			rres = maxpath(now->right);

			if(res.p < lres.p+now->val)
			   res.p = lres.p+now->val;
			if(res.p < rres.p+now->val)
			   res.p = rres.p+now->val;

			if(res.a < lres.a)
			   res.a = lres.a;
			if(res.a < rres.a)
			   res.a = rres.a;
			if(res.a < res.p)
			   res.a = res.p;
			if(res.a < lres.p+rres.p+now->val)
			   res.a = lres.p+rres.p+now->val;
			   


			   

		}

		return res;
	}

    int maxPathSum(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		tresult res = maxpath(root);
		return res.a;
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

