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



void init_deal(){
}

void init_test1(){
	map<int, int> m;
	m[0] = 0;
	cout<<(m.find(0) == m.end())<<endl;
}

int main(){
	
//	freopen(".in", "r", stdin);

	string s = "bcdea";
	char * chs = new char[s.length()+1];
	strcpy(chs, s.c_str());

	sort(chs, chs+strlen(chs));
//	sort(chs, chs+s.length());

	cout<<chs<<endl;
	s = chs;
	cout<<s<<endl;


	return 0;
};

