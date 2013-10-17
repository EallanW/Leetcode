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
    ListNode *reverseKGroup(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int tot = 0;
        ListNode* now = head;
        while(now!=NULL){
            tot++;
            now = now->next;
        }
        
        int st = 1;
        now = head;
        ListNode* pre = NULL,
                  *next = NULL,
                  *res = head;
        if(k>1)
        while(st+k<=tot+1){
            
            ListNode* new_head = NULL, *first = NULL, *ptr = now, *ptr_pre = NULL;
            
            
            
            for (int i = 1;i<=k;i++){
                if(i == k){
                    new_head = ptr;
                }
                if(i == 1){
                    first = ptr;
                }
                
                ListNode* ptr_next = ptr->next;
                
                if(i>1){
                    ptr->next = ptr_pre;
                }
                
                ptr_pre = ptr;
                ptr = ptr_next;
                if(i == k){
                    next = ptr;
                }                
            }
            
            first->next = next;
            if(pre != NULL)
                pre->next = new_head;
                
            pre = first;
            
            if(st == 1){
                res = new_head;
            }
            
            now = next;            
            
            st+=k;
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

