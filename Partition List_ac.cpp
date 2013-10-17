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
    ListNode *partition(ListNode *head, int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		if(head == NULL)
			return head;
		else{
			ListNode* next = head->next;
			ListNode* res = partition(next, x);
			head->next = res;
			if(head->val < x){
				return head;
			}
			else{
				ListNode* now = head;
				ListNode* ne = head->next;
				while(ne!= NULL && ne->val<x){
					swap(now->val, ne->val);
					now = ne;
					ne = ne->next;
				}
				return head;
			}
		}
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

