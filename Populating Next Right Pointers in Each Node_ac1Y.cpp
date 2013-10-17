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

  struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
  };
 
class Solution {
public:
    void connect(TreeLinkNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if(root == NULL)
            return ;
        
        vector<TreeLinkNode*> qu;
        qu.push_back(root);
        int head = -1, tail = 0, w = 1;
        
        while(w>0){
            TreeLinkNode* pre = NULL;
            for (int i = 1;i<=w;i++){
                head++;      
                TreeLinkNode* now = qu[head];
                if(pre != NULL){
                    pre->next = now;
                }
                pre = now;
                
                TreeLinkNode* tmp = now->left;
                if(tmp != NULL){
                    tail++;
                    qu.push_back(tmp);
                }
                tmp = now->right;
                if(tmp != NULL){
                    tail++;
                    qu.push_back(tmp);
                }
                
            }
            pre->next = NULL;
            w = tail - head;
        }
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

