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

void solve(int n, int k){
    map<int, int> hm;
    bool flag = false;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if( ((i + k) * j) % 4 == 0 ){
                flag = true;
                hm[i] = j;
            }
        }
    }

    if(!flag){
        cout << "NO" << "\n";
        return;
    }

    cout << "YES" << "\n";
    for(auto e : hm){
        cout << e.F << " " << e.S << "\n"; 
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

    int n = 4;
    int k = 1;
    solve(n, k);


    // }
    


    return 0;
}
