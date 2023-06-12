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

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // ll q;
    // cin >> q;

    // while(q-- > 0){
    //     
    // }

    ll x;
    cin >> x;

    vector<ll> res;

    while(x > 9){
        int t = x % 10;
        x = x/10;

        if(9-t < t){
            res.push_back(9-t);
        }else{
            res.push_back(t);
        }
    }

    if(x != 9 && 9-x < x){
        res.push_back(9-x);
    }else{
        res.push_back(x);
    }

    for(int i = res.size()-1; i >= 0; i--){
        cout << res[i];
    }

    return 0;
}
