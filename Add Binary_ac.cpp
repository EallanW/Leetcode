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
	string reverse_str(string s){
		string res = s;
		for (int i = 0, j = s.length()-1; i<j; i++,j--)
		{
			swap(res[i], res[j]);
		}
		return res;
	}

    string addBinary(string a, string b) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string r_a = reverse_str(a), r_b = reverse_str(b);
		string res = "";
		int one = 0;
		for (int i = 0; i<max(r_a.length(), r_b.length()); i++)
		{
			int d_a = 0, d_b = 0;
			if(i<r_a.length())
				d_a = r_a[i]-'0';
			if(i<r_b.length())
				d_b = r_b[i]-'0';

			int res_d = d_a+d_b+one;
			if(res_d>=2){
				res_d-=2;
				one = 1;
			}
			else{
				one = 0;
			}
			res+='0'+res_d;
		}
		if(one>0)
			res+="1";
		res = reverse_str(res);
		return res;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

