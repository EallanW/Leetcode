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

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };



class Solution {
public:
	ListNode* go_list(ListNode* head, int step){
		if(step == 0)
			return NULL;
		else{
			ListNode* res = head;
			step--;
			while(step>0){
				res = res->next;
				step--;
			}
			return res;
		}
	}

	TreeNode* list_bst(ListNode* head, int len){
		if(head == NULL || len == 0){
			return NULL;
		}
		else{
			int mid = (len+1)/2;
			int l_left = mid-1, l_right = len-mid;
			ListNode* midnode = go_list(head, mid);
			TreeNode* res = new TreeNode(midnode->val);
			if(l_left == 0){
			}
			else{
				res->left = list_bst(head, l_left);	
			}
			if(l_right == 0){
			}
			else{				
				res->right = list_bst(midnode->next, l_right);
			}
			return res;
		}
	}

    TreeNode* sortedListToBST(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		       
		int len = 0;
		ListNode* now = head;
		while(now!=NULL){
			len++;
			now = now->next;
		}
		TreeNode* res = list_bst(head, len);
		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

