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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

		ListNode *st_pre = NULL, *now = head;
		int tot = 1;
		while(tot<m){
			st_pre = now;
			now = now->next;
			tot++;
		}
		ListNode *st = now, *ne_ne = now->next;

		int tmp = m;

		while(tmp<n){
			ListNode *ne = ne_ne;
			if(st_pre != NULL){
				st_pre->next = ne;
			}
			st->next = ne->next;
			ne_ne = ne->next;
			ne->next = now;
			tmp++;
			now = ne;
		}

		if(st_pre == NULL)
			return now;
		else
			return head;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

