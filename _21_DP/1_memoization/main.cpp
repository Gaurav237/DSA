#include <bits/stdc++.h>
using namespace std;

int n = 7;
vector<int> memo(n+1,-1);

int fib(int n){
    if(memo[n] == -1){
        int res;
        if(n == 0 || n == 1) {
            res = n;
        }else {
            res = fib(n - 1) + fib(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main() {
    fib(n);
    for(int e : memo){
        cout << e << " ";
    }

    return 0;
}
