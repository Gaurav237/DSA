#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 
#define PB push_back
#define EB emplace_back


int solve(int n){
    int x = n;
    if(x % 7 == 0){
        return x;
    }

    // int k = n;
    // int digits = 0;
    // while(k != 0){
    //     digits++;
    //     k = k/10;
    // }
    

    for(int i = 0; i <= 9; i++){
        // x = (n / 10) * 10;
        // x += i;
        x = x - (x % 10) + i;
        if(x % 7 == 0){
            return x;
        } 
    }

    // int l = n % 10;
    // for(int i = 0; i <= 9; i++){
    //     x = (n / 100)  * 100;
    //     x += i * 10;
    //     x += l;
    //     if(x % 7 == 0){
    //         return x;
    //     }
    // }

    // int sl = n % 100;
    // for(int i = 1; i <= 9; i++){
    //     x = i * 100;
    //     x += sl;
    //     if(x % 7 == 0){
    //         return x;
    //     }
    // }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        cout << solve(n) << "\n";
    }
    


    return 0;
}
