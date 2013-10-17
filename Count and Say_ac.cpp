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

class Solution {
public:
    string countAndSay(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string now = "1", ne = "1";
        
        for (int i = 1;i<n;i++){
            ne = "";
            int st = 0;
            while(st<now.length()){
                int en = st+1;
                while(en<now.length() && now[st] == now[en])
                    en++;
                int tot = en-st;
                ne+='0'+tot;
                ne+=now[st];
                st = en;
            }
            now = ne;
        }
        
        return ne;
    }
};


void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

