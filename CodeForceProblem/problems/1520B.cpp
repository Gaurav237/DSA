#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 
#define PB push_back
#define EB emplace_back
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--) 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

// ll solve(ll n){
//     ll count = 0;
//     for(ll i = 1; i <= n; i++){
//         bool flag = true;
//         ll z = i % 10;
//         ll x = i;
        
//         while(x != 0){
//             if(x % 10 != z){
//                 flag = false;
//                 break;
//             }
//             z = x % 10;
//             x = x / 10;
//         }

//         if(flag){
//             count++;
//         }
//     }
//     return count;
// }

ll solve(int n){
    int count = 0;

    for(ll pw = 1; pw <= n; pw = (pw * 10) + 1){
        for(int d = 1; d <= 9; d++){
            if(d * pw <= n){
                count++;
            }
        }
    }

    return count;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    ll t;
    cin >> t;

    while(t-- > 0){
    ll n;
    cin >> n;
    cout << solve(n) << "\n";
    }

    return 0;
}
