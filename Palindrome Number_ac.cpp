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
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(x<0)
            return false;
        if(x>=1000000000){
            if(x/1000000000 == x % 10){
                x%=1000000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10000000 == x % 10){
                x%=10000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/100000 == x % 10){
                x%=100000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/1000 == x % 10){
                x%=1000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10 == x % 10){
                x%=10;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=100000000){
            if(x/100000000 == x % 10){
                x%=100000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/1000000 == x % 10){
                x%=1000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10000 == x % 10){
                x%=10000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/100 == x % 10){
                x%=100;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=10000000){
            if(x/10000000 == x % 10){
                x%=10000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/100000 == x % 10){
                x%=100000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/1000 == x % 10){
                x%=1000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10 == x % 10){
                x%=10;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=1000000){
            if(x/1000000 == x % 10){
                x%=1000000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10000 == x % 10){
                x%=10000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/100 == x % 10){
                x%=100;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=100000){
            if(x/100000 == x % 10){
                x%=100000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/1000 == x % 10){
                x%=1000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10 == x % 10){
                x%=10;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=10000){
            if(x/10000 == x % 10){
                x%=10000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/100 == x % 10){
                x%=100;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=1000){
            if(x/1000 == x % 10){
                x%=1000;
                x/=10;
            }
            else{
                return false;                    
            }
            if(x/10 == x % 10){
                x%=10;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=100){
            if(x/100 == x % 10){
                x%=100;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        else
        if(x>=10){
            if(x/10 == x % 10){
                x%=10;
                x/=10;
            }
            else{
                return false;                    
            }
        }
        
        return true;
    }
};

void init_deal(){
}

int main(){
	
//	freopen(".in", "r", stdin);

	

	return 0;
};

