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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode* pre = NULL, *left = NULL, *now = head;
        
        for (int i = 1;i<=n;i++){
            now = now->next;            
        }
        if(now == NULL){
            return head->next;
        }
        else{
            pre = head;
            left = head->next;
            while(now != NULL){
                if(now->next == NULL){
                    pre->next = left->next;
                    break;
                }
                now = now->next;
                pre = pre->next;
                left = left->next;
            }
            return head;
        }
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

