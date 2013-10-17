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
    void sortColors(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int en[3];
		memset(en, -1, sizeof(en));

		for (int i = 0; i<n; i++)
		if(A[i] == 0){
			if(en[1] == -1){
				if(en[2] == -1){
					en[0] = i;
				}
				else{//A[2]>=0
					swap(A[en[0]+1], A[en[2]+1]);
					en[0]++;
					en[2]++;
				}
			}
			else//en[1]>=0
			if(en[2] == -1){
				swap(A[en[0]+1], A[en[1]+1]);
				en[0]++;
				en[1]++;
			}
			else{//en[2]>=0
				swap(A[en[0]+1], A[en[2]+1]);
				en[0]++;
				swap(A[en[2]+1], A[en[1]+1]);
				en[1]++;
				en[2]++;
			}
		}
		else
		if(A[i] == 1){
			if(en[1] == -1){
				if(en[2] == -1){
					en[1] = i;
				}
				else{//en[2] >= 0
					en[1] = en[0];
					swap(A[en[2]+1], A[en[1]+1]);
					en[2]++;
					en[1]++;
				}
			}
			else{//en[1] >= 0
				if(en[2] == -1){
					en[1] = i;
				}
				else{//en[2] >= 0
					swap(A[en[2]+1], A[en[1]+1]);
					en[2]++;
					en[1]++;
				}				
			}
		}
		else{//A[i] == 2
			en[2] = i;
		}
		

    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

