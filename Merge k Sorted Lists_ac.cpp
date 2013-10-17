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
    struct HeapNode{
        int num, v;    
    };
    
    vector<HeapNode> h;
    
    int tot;
    
    void go_down(){
        int i = 1;
        while(i*2<=tot){
            int j = i*2;
            if(j+1<=tot &&
               h[j+1].v < h[j].v)
               j++;
            if(h[j].v < h[i].v){
                swap(h[i], h[j]);
                i = j;
            }
            else{
                break;
            }               
        }        
    }
    
    void go_up(int num){
        int i = num;
        while(i/2>=1){
            int j = i/2;
            if(h[i].v < h[j].v){
                swap(h[i], h[j]);
                i = j;
            }
            else
                break;
        }
    }
    
    
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int n = lists.size();
        
        h.resize(n+1);
        
        HeapNode now;
        tot = 0;
        
        for (int i = 0;i<n;i++)
        if(lists[i] != NULL){
            now.num = i;
            now.v = lists[i]->val;
            lists[i] = lists[i]->next;
            
            tot++;
            h[tot] = now;
            
            go_up(tot);            
            
        }
        
        ListNode * res = NULL, *last = NULL;
        
        while(tot>0){
            HeapNode tmp = h[1];
            ListNode* tmpNode = new ListNode(tmp.v);
            if(res == NULL){
                res = tmpNode;
                last = tmpNode;
            }
            else{
                last->next = tmpNode;
                last = tmpNode;
            }
            
            h[1] = h[tot];
            tot--;
            go_down();
            
            if(lists[tmp.num] != NULL){
                tot++;
                HeapNode newHeapNode;
                newHeapNode.num = tmp.num;
                newHeapNode.v = lists[tmp.num]->val;
                h[tot] = newHeapNode;
                go_up(tot);
                lists[tmp.num] = lists[tmp.num]->next;
            }            
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

