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

int solve(ll n, vector<pair<ll,ll>> wallet, ll price){
    if(price % 2 != 0){
        return -1;
    }
    
    ll x = 0;
    ll i = 0;
    while(i < n){
        if(price >= wallet[i].first){
            i++;
        }else{
            x = i;
            break;
        }
    }

    ll res = 0;
    for(ll i = x; i >= 0; i--){
        if(wallet[i].S > 0){
            ll t = price / wallet[i].F;
            if(t <= wallet[i].S){
                price = (price % wallet[i].F);
                res += t;
            }
            
        }
    }

    if(price == 0){
        return res;
    }else{
        return -1;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll n, s;
    cin >> n >> s;

    vector<pair<ll,ll>> wallet;
    vector<ll> wood;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        wallet.push_back({pow(2, i+1), x});
    }
    for(ll i = 0; i < s; i++){
        int price;
        cin >> price;
        wood.push_back(price);
    }

    for(ll i = 0; i < s; i++){
        cout << solve(n, wallet, wood[i]) << "\n";
    }

    return 0;
}
