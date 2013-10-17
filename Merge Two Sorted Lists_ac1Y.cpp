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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		ListNode *res = NULL, *last = NULL;
		ListNode *head1 = l1, *head2 = l2;
		int tot = 0;
		while(head1!=NULL && head2!=NULL){
			tot++;
			ListNode* tmp = NULL;
			if(head1->val < head2->val){
				tmp = new ListNode(head1->val);
				head1 = head1->next;
			}
			else{
				tmp = new ListNode(head2->val);
				head2 = head2->next;
			}
			if(tot == 1){
				res = tmp;
				last = tmp;
			}
			else{
				last->next = tmp;
				last = tmp;
			}
		}
		while (head1!=NULL)
		{
			tot++;
			ListNode *tmp = new ListNode(head1->val);
			if(tot == 1){
				res = tmp;
				last = tmp;
			}
			else{
				last->next = tmp;
				last = tmp;
			}
			head1 = head1->next;
		}
		while (head2!=NULL)
		{
			tot++;
			ListNode *tmp = new ListNode(head2->val);
			if(tot == 1){
				res = tmp;
				last = tmp;
			}
			else{
				last->next = tmp;
				last = tmp;
			}
			head2 = head2->next;
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

