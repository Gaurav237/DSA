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

ll GCD(ll a, ll b){
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}

// ll LCM(ll a, ll b){
//     return (a * b) / GCD(a,b);
// }

ll solve(ll k, ll arr[]){
    // ll min = arr[0];
    // for(int i = 1; i < k; i++){
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }
    // }

    set<ll> s;
    for(ll i = 0; i < k; i++){
        s.insert(arr[i]);
    }

    

    set<ll>::iterator it = s.begin();
    ll min = *(it);
    it++;
    // cout << min;

    vector<ll> v;
    // v.push_back(min);
    while(it != s.end()){
        ll num = *it;
        v.push_back(num - min);
        it++;
    }

    // for(auto e : v){
    //     cout << e << " ";
    // }

    ll fl = -1;
    for(ll i = 0; i < v.size() - 1; i++){
        fl = GCD(v[i], v[i+1]);
    }

    return fl;

}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // int t;
    // cin >> t;

    // while(t-- > 0){

    ll k = 6;
    ll arr[k];
    for(ll i = 0; i < k; i++){
        cin >> arr[i];
    }

    cout << solve(k, arr);


    // }
    


    return 0;
}
