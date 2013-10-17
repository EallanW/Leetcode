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
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(node == NULL){
            return NULL;
        }
        
        UndirectedGraphNode *res = new UndirectedGraphNode(node->label);
        res->neighbors.resize(0);
        
        queue<UndirectedGraphNode*> qu_old, qu_new;
        qu_old.push(node);
        qu_new.push(res);
        
        
        while(!qu_old.empty()){
            UndirectedGraphNode *now_old = qu_old.front(), *now_new = qu_new.front();
            qu_old.pop();
            qu_new.pop();
            
            for (int i = 0;i<now_old->neighbors.size();i++){
                UndirectedGraphNode *tmp = now_old->neighbors[i];
                UndirectedGraphNode *new_node = new UndirectedGraphNode(tmp->label);
                new_node->neighbors.resize(0);
                
                now_new->neighbors.push_back(new_node);
                
                qu_old.push(tmp);
                qu_new.push(new_node);
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

