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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
  
        ListNode* res = head;
        int tot = 0;
        ListNode* now = head;
        while(now!=NULL){
            tot++;
            now = now->next;
        }
        
        ListNode* pre = NULL;
        now = head;
        int st = 1;
        while(st+2<=tot+1){
            ListNode* left = now,
                    * right = now->next;
            if(pre!=NULL){
                pre->next = right;
            }
            now = right->next;
            right->next = left;
            left->next = now;
            pre = left;
            if(st == 1){
                res = right;
            }
            
            st+=2;
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

