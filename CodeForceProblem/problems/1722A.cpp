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

void solve(string st, int n){
    if(n != 5){
        cout << "NO" << "\n";
        return;
    }
    unordered_map<char, int> hm;
    hm['T'] = 1;
    hm['i'] = 1;
    hm['m'] = 1;
    hm['u'] = 1;
    hm['r'] = 1;

    for(int i = 0; i < n; i++){
        hm[st[i]]--;
    }

    for(auto e : hm){
        // cout << e.first << " : " << e.second << "\n";
        if(e.second < 0){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
        int n = 10;
        cin >> n;
        string st;
        cin >> st;
        solve(st, n);
    }
    


    return 0;
}
