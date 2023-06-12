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

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

// ll solve(){
//     ll a,b,c,d;
//     cin >> a >> b >> c >> d;

//     ll x = gcd(a,b);
//     ll y = gcd(c,d);

//     a = a / x;
//     b = b / x;
//     c = c / y;
//     d = d / y;
    
//     if(a == c && b == d){
//         return 0;
//     }

//     if(a == 0 && c == 0){
//         return 0;
//     }else if(a == 0 || c == 0){
//         return 1;
//     }else{
//         ll p = (b * c) % (a * d);
//         ll q = (a * d) % (b * c);

//         if(p == 0 || q == 0){
//             return 1;
//         }else{
//             return 2;
//         }
//     }

// }

ll solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll x = a * d;
    ll y = c * b;

    if(x == y){
        return 0;
    }else if((y != 0 && x % y == 0) || (x != 0 && y % x == 0)){
        return 1;
    }else{
        return 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        cout << solve() << "\n";
    }

    // cout << gcd(0,0);

    return 0;
}
