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


    ll t;
    cin >> t;

    while(t-- > 0){

    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<ll, ll> um;
    for(ll i = 0; i < n; i++){
        um[arr[i]]++;
    }

    // for(auto v : um){
    //     cout << v.first << " : " << v.second << "\n";
    // }

    ll x;
    for(auto e : um){
        if(e.second == 1){
            x = e.first;
            break;
        }
    }

    // cout << x;

    for(ll i = 0; i < n; i++){
        if(x==arr[i]){
            cout << i + 1 << "\n";
        }
    }

    }
    


    return 0;
}
