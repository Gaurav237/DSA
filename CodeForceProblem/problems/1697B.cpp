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

void solve(){
    ll n;
    ll q;
    cin >> n >> q;

    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        v.push_back(x); 
    }

    sort(v.begin(), v.end(), greater<ll>());

    while(q-- > 0){
        ll x, y;
        cin >> x >> y;
        
        // if(x == y){
        //     x++;
        // }

        ll res = 0;
        ll e = x - y;
        for(ll i = e; i < x; i++){
            res += v[i];
        }

        cout << res << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // int t;
    // cin >> t;

    // while(t-- > 0){
        solve();
    // }


    return 0;
}
