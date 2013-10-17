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
 
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		ListNode *pre = NULL, *res_head = head;
		if(head == NULL){
		}
		else{
			ListNode* now = head;
			while(now!=NULL){
				ListNode* next = now->next;
				if(next != NULL && now->val == next->val){
					while(next != NULL && now->val == next->val){
						next = next->next;
					}
					if(pre == NULL){
						res_head = next;
						now = next;						
					}
					else{
						pre->next = next;
						now = next;
					}
				}
				else{
					pre = now;
					now = next;
				}
			}

		}

		return res_head;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

