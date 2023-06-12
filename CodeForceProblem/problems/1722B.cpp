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

void solve(int n, string &A, string &B){
    for(int i = 0; i < n; i++){
        if(((A[i] == 'G' || A[i] == 'B') && B[i] == 'R') || ((B[i] == 'B' || B[i] == 'G') && A[i] == 'R')){
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

        int n;
        cin >> n;
        string A, B;
        cin >> A;
        cin >> B;

        solve(n, A, B);

    }
    


    return 0;
}
