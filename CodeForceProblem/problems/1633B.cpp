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

ll solve(string st){
    ll count1 = 0;
    for(ll i = 0; i < st.length(); i++){
        if(st[i] == '1'){
            count1++;
        }
    }

    ll count0 = 0;
    for(ll i = 0; i < st.length(); i++){
        if(st[i] == '0'){
            count0++;
        }
    }

    // cout << count0 << " " << count1;
    if(count1 < count0){
        return count1;
    }else if(count0 < count1){
        return count0;
    }else{
        return count1 - 1;  // count0 - 1
    }

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
    
        string st;
        cin >> st;
        cout << solve(st) << "\n";

    }

    return 0;
}
