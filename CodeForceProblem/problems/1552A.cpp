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

int solve(int n, string &st){
    string old_st = st;
    sort(st.begin(), st.end());
    int res = 0;
    for(int i = 0; i < n; i++){
        if(old_st[i] != st[i]){
            res++;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        string st;
        cin >> n >> st;
        cout << solve(n, st) << "\n";
    }

    return 0;
}
