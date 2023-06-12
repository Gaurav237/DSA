#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    set<ll> st;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        st.insert(x);
    }
    
    ll x = st.size();
 
    for(ll k = 1; k <= n; k++){
        cout << max(k,x) << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){
        solve();
    }


    return 0;
}
