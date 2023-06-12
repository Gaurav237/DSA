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

ll solve(ll a, ll b, ll c){
    ll A = abs(a - 1);
    ll B = abs(b - c) + abs(c - 1);

    ll x;
    if(A < B){
        x = 1;
    }else if(A > B){
        x = 2;
    }else{
        x = 3;
    }
    return x;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    ll t;
    cin >> t;

    while(t-- > 0){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a,b,c) << "\n";
    }

    return 0;
}
