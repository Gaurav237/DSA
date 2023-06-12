#include <bits/stdc++.h>
#define ll long long
using namespace std;

int func(int n){
    if(n <= 1){
        return n;
    }

    return func(n-1) + func(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << func(4);

    return 0;
}
