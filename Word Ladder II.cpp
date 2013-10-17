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
#define unordered_set set

struct tnode{
    string v;
    tnode *next;
};

class Solution {
public:
    vector<vector<string> > res;
    int dep;
    map<string, tnode*> mp;
    string st;
    vector<string> sol, sol_reverse;    
    
    void go(string now, int num){
        if(sol.size()<num){
            sol.push_back(now);
        }
        else{
            sol[num-1] = now;
        }
        
        if(now == st){
            sol_reverse = sol;
            reverse(sol_reverse.begin(), sol_reverse.end());
            res.push_back(sol_reverse);
        }
        else{
            tnode *p = mp[now];
            while(p != NULL){
                string now = p->v;
                go(now,num+1);
                p = p->next;                
            }            
        }
    }
    
    vector<vector<string> > findLadders(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        unordered_set<string> cur_level;
        //dict = dict1;
        
        mp.clear();
        res.resize(0);
        dep = 0;
        st = start;
        sol.resize(0);
        sol_reverse.resize(0);
        
        int n = dict.size();
        
        int head = 0, tail = 1, w = 1;
        string qu[n+1];
        qu[1] = start;
        dict.erase(start);
        
        if(start == end){
            vector<string> one;
            one.push_back(start);
            res.push_back(one);
            return res;
        }
        int len = start.length();
        
        bool yes = false;
        
        while(head<tail){
            cur_level.clear();
            dep++;
            for (int ttt = 0;ttt<w;ttt++){
                head++;
                string now = qu[head];
                for (int i = 0;i<len;i++){
                    string ne = now;
                    for (int j = 0;j<26;j++)
                    if(now[i] != 'a'+j){
                        ne[i] = 'a'+j;
                        bool b1 = dict.find(ne) != dict.end(),
                             b2 = cur_level.find(ne) != cur_level.end();
                        if(b1 || b2){
                            if(!b2){
                                dict.erase(ne);
                                cur_level.insert(ne);
                                tail++;
                                qu[tail] = ne;                                
                                
                            }
                            tnode *one = new tnode;
                            one->v = now;
                            one->next = mp[ne];
                            mp[ne] = one;
                            if(ne == end){
                                yes = true;
                            }
                        }
                    }
                }
                
            }
            if(yes){
                break;
            }
            
            w = tail-head;
        }
        
        
        if(yes)
            go(end, 1);
        return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	
	string start = "hot", end = "dog";
	string a[] = 
		{"hot","dog","dot"};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<sizeof(a)<<" "<<sizeof(a[0])<<" "<<n<<" "<<a[n-1]<<endl;
	/*
	vector<string> x;
	for (int i = 0; i<n; i++)
	{
		x.push_back(a[i]);
	}
	*/
	set<string> x;
	for (int i = 0; i<n; i++)
	{
		x.insert(a[i]);
	}

	Solution sol;
	
	vector<vector<string> > ans = sol.findLadders(start, end, x);

	for (int i = 0; i<ans.size(); i++)
	{
		for (int j = 0; j<ans[i].size(); j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}


	string start1 = "hot", end1 = "dog";
	string a1[] = 
		{"hot","dog","dot"};
	n = sizeof(a1)/sizeof(a1[0]);
	cout<<sizeof(a1)<<" "<<sizeof(a1[0])<<" "<<n<<" "<<a1[n-1]<<endl;
	set<string> x1;
	for (int i = 0; i<n; i++)
	{
		x1.insert(a1[i]);
	}
	
	ans = sol.findLadders(start1, end1, x1);
	

	return 0;
};

