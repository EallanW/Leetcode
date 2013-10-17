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

int n;

void init_deal(){
}

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string res = "";
        int i = 0;
        
        while(true){
            bool yes = true, empty = true;
			//cout<<"strs.l = "<<strs.size()<<endl;
            for (int j = 0;j<strs.size();j++){
				int a = i - (strs[j].length()-1);
				//cout<<"i = "<<i<<"   strs[j].l = "<<strs[j].length()<<" a = "<<a<<endl;
				//yes = false;
				//if(i<=strs[j].length()-1){
				if(a<=0){
					//cout<<"no!!!!!!!!!"<<endl;
					if(strs[j][i] == strs[0][i]){
						empty = false;
					}
					else{
						yes = false;
						break;
					}
				}
				else{
//					cout<<"yes!!!!!!!!!"<<endl;
					yes = false;
					break;                
				}
			}
			//cout<<i<<" yes = "<<yes<<endl;

            if(yes && (!empty)){
                res+=strs[0][i];
            }
            else{
                break;                
            }
    		i++;
        }
        
        return res;        
    }
};


Solution sol;

int main(){
	
//	freopen(".in", "r", stdin);

	vector<string> s;
	s.push_back("");
	//cout<<s[0].length()<<endl;
	string r = sol.longestCommonPrefix(s);
	cout<<r<<endl;

	return 0;
};

