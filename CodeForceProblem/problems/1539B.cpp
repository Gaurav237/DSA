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
    unordered_map<char, int> hm;
    
    for(int i = 97; i <= 122; i++){
        hm[(char)i] = i - 96;
    }

    ll n, q;
    cin >> n >> q;

    string str;
    cin >> str;

    while(q-- > 0){
        ll l,r;
        cin >> l >> r;
        // ll len = r-l+1;
        l--;
        r--;

        // string s = str.substr(l, len);
        // cout << s << endl;

        ll count = 0;
        for(int i = l; i <= r; i++){
            count += hm[str[i]];
        }
        cout << count << "\n";
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

    // int t;
    // cin >> t;

    // while(t-- > 0){

    solve();

    // }
    


    return 0;
}
