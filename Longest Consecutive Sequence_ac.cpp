/*
    Scan original array and for each element:
        If it already belongs to any range skip it
        Otherwise create unit size range [i..i]
        If there is a range next to the right [i+1.. y] merge with it to produce [i..y] range
        If there is a range next to the left [x..i-1] merge with it as well (either [i..i] or merged [i..y] will be merged with [x..i-1])
		If there is a range of [x..i-1] and [i+1..y] then merge them to [x..y]
		Construct two value for the hashtable
			m_l[i] means the left most consecutive number of i
			m_r[i] means the right most consecutive number of i
			when scan each number, update these two hashtable

    Scan through created ranges to find out the longest
*/

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
    int longestConsecutive(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int n = num.size();
		int ans = 0;
		map<int, int> m_l, m_r;
		m_l.clear();
		m_r.clear();

		for (int i = 0; i<n; i++)
			if(m_l.find(num[i]) == m_l.end())
		{
			m_l[num[i]] = num[i];
			m_r[num[i]] = num[i];

			bool y_l = false, y_r = false;
			if(m_l.find(num[i]-1) != m_l.end()){
				m_l[num[i]] = m_l[num[i]-1];
				m_r[m_l[num[i]-1]] = num[i];
				y_l = true;
			}

			if(m_r.find(num[i]+1) != m_r.end()){
				m_r[num[i]] = m_r[num[i]+1];
				m_l[m_r[num[i]+1]] = num[i];
				y_r = true;
			}
			if(y_l && y_r){
				m_r[m_l[num[i]]] = m_r[num[i]];
				m_l[m_r[num[i]]] = m_l[num[i]];
			}
			int tmp = m_r[num[i]]-m_l[num[i]]+1;
			if(ans < tmp)
			   ans = tmp;
		}

		return ans;        
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

