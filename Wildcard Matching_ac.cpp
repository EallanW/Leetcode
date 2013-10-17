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
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        
        if(!s || !p){
            return false;
        }
        
        vector<string> str;
        str.resize(0);
        const char * ptr_p = p;
        int tot_left = 0;
        while(*ptr_p){
            while((*ptr_p) && *ptr_p == '*'){
                ptr_p++;
            }
            string tmp = "";
            while((*ptr_p) && *ptr_p != '*'){
                tmp+=*ptr_p;
                ptr_p++;
            }
            if(tmp != ""){
                str.push_back(tmp);                            
                tot_left+=tmp.length();
            }
        }
        
        if(str.size() == 0){
            if(strlen(p)>0){
                return true;
            }
            else{
                return strlen(s) == 0;
            }
            
        }
        
        
        int len_s = strlen(s),
            len_p = strlen(p);
        
        int left = 0, right = str.size()-1;
        int st_s = 0, end_s = len_s-1;
		//cout<<"str[left].size "<<str[left].size()<<endl;
		//cout<<st_s<<" "<<end_s<<" "<<len_s<<endl;
        if(p[0] != '*'){            
            for (int i = 0;i<str[left].size();i++)
            if(st_s<=end_s &&
			   (str[left][i] == '?' ||
                str[left][i] == s[st_s])){
                st_s++;
            }
            else{
                return false;
            }
            
            tot_left-=str[left].size();
            left++;
        }

		//cout<<st_s<<" "<<end_s<<" "<<len_s<<endl;
		//cout<<left<<" "<<right<<endl;
        
        if(p[len_p-1] != '*' &&
           left<=right){
            
            for (int i = str[right].size()-1;i>=0;i--)
            if(end_s>=st_s &&
			   (str[right][i] == '?' ||
                str[right][i] == s[end_s])){
                   end_s--;
            }
            else{
                return false;
            }
            
            tot_left-=str[right].size();
            right--;
               
        }
        else if(p[len_p-1] != '*' && left > right){
            return st_s == len_s;
        }

        
        for (int i = left;i<=right;i++){
            bool get_next = false;
            for (int now_st = st_s;now_st<=end_s-tot_left+1;now_st++){
                bool yes = true;
                for (int j = 0;j<str[i].size();j++)
                if(str[i][j] == '?' ||
                   str[i][j] == s[now_st+j]){
                       
                }
                else{
                    yes = false;
                    break;
                }
                if(yes){
                    get_next = true;
                    st_s = now_st+str[i].size();                    
                    tot_left-=str[i].size();
                    break;
                }
            }
            if(!get_next)
                return false;
        }
        
        return true;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);
	Solution sol;
	cout<<sol.isMatch("b", "?*?")<<endl;
	

	return 0;
};

