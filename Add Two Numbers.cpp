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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *head1 = l1, *head2 = l2, *last = NULL, *res = NULL;
        int tot = 0, one = 0;
        while(head1 != NULL || head2 != NULL){
            int a1, a2;
            if(head1 == NULL)
                a1 = 0;
            else
                a1 = head1->val;
            if(head2 == NULL)
                a2 = 0;
            else
                a2 = head2->val;
                
            int a = a1+a2+one;
            if(a>=10){
                one = 1;
                a-=10;
            }
            else
                one = 0;
                
            ListNode *now = new ListNode(a);
            tot++;
            if(tot == 1)
                res = now;
            else{
                last->next = now;
            }
            last = now;
            
            if(head1 != NULL)
                head1 = head1->next;
            if(head2 != NULL)
                head2 = head2->next;            
        }
        
        if(one > 0){
            ListNode *now = new ListNode(one);
            last->next = now;
            last = now;
            one = 0;
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

