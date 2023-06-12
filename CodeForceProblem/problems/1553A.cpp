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
//     for(ll i = 9; i <= n; i += 10){
//         if(i % 10 == 9){
//             count++;
//         }
//     }
    
//     return count;
// }

ll solve(ll n){

    ll count = n / 10;

    if(n%10 == 9){
        count++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){

    ll n;
    cin >> n;
    cout << solve(n) << "\n";


    }
    


    return 0;
}
