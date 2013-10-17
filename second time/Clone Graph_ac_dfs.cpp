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
    map<int, UndirectedGraphNode *> mp;
    void dfs_clone(UndirectedGraphNode *old_node, UndirectedGraphNode *new_node){
        for (int i = 0;i<old_node->neighbors.size();i++){
            UndirectedGraphNode *tmp = old_node->neighbors[i];
            if(tmp->label != old_node->label){
                if(mp.find(tmp->label) == mp.end()){
                    UndirectedGraphNode *new_one = new UndirectedGraphNode(tmp->label);
                    mp[tmp->label] = new_one;
                    new_node->neighbors.push_back(new_one);
                    dfs_clone(tmp, new_one);
                }
                else{
                    new_node->neighbors.push_back(mp[tmp->label]);
                }
            }
            else{
                new_node->neighbors.push_back(new_node);
            }
        }
    }
    
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(node == NULL){
            return NULL;
        }
        
        UndirectedGraphNode *res = new UndirectedGraphNode(node->label);
        mp.clear();
        mp[node->label] = res;
        
        dfs_clone(node, res);
        
        return res;
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

