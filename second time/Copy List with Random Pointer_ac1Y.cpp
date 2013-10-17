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
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(head == NULL){
            return NULL;
        }
        
        RandomListNode *res = new RandomListNode(head->label);
        RandomListNode *now = head, *now_new = res;
        map<RandomListNode*,RandomListNode*> hash;
        
        while(now!=NULL){
            hash[now] = now_new;
            now = now->next;
            if(now!=NULL){
                now_new->next = new RandomListNode(now->label);
                now_new = now_new->next;
            }
        }
        
        now = head;
        while(now!=NULL){
            hash[now]->random = hash[now->random];
            now = now->next;
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

