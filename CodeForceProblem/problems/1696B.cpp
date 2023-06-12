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

ll solve(){

    ll n;
    // n = 7;
    cin >> n;

    vector<ll> v;
    // v = {0,2,3,0,1,2,0};
    ll e;
    for(ll i = 0; i < n; i++){
        cin >> e;
        v.push_back(e);
    }


    ll x = 0;
    while(v[x] == 0 && x < n){
        x++;
    }

    if(x == n){
        return 0;
    }

    ll y = n - 1;
    while(v[y] == 0 && y >= x){
        y--;
    }

    bool zero_flag = false;
    for(ll i = x; i <= y; i++){
        if(v[i] == 0){
            zero_flag = true;
            break;
        }
    }

    if(zero_flag){
        return 2;
    }else{
        return 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){
        cout << solve() << "\n";
    }


    return 0;
}
