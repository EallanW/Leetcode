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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int tot = 0;
        ListNode* now = head, *last = NULL;
        while(now!=NULL){
            tot++;
            last = now;
            now = now->next;
        }
        
        if(head == NULL)
            return NULL;
        
        int kk = k%tot;
        
        if(kk == 0)
            return head;
                
        ListNode* pre = NULL;
        
        now = head;
        for (int i = 1;i<=tot-kk;i++){
            pre = now;
            now = now->next;
        }
        
        ListNode* res = now;
        pre->next = NULL;
        last->next = head;
        
        return res;
        
        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

