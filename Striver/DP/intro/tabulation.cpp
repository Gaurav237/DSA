// DP 1
// space optimized tabulation method


#include <bits/stdc++.h>
using namespace std;


int f(int n){
    int prev2 = 0;  // dp[0]
    int prev1 = 1;  // dp[1]
    int curri;
    for(int i = 2; i <= n; i++){
        curri = prev2 + prev1;
        prev2 = prev1;
        prev1 = curri; 
    }

    return curri; // or prev1
}

int main(){
    int n = 8;

    cout << f(n) << endl;
}