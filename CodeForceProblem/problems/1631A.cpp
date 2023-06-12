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


int solve(int n, int a[], int b[]){
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            swap(a[i], b[i]);
        }
    }

    int max_A = a[0];
    int max_B = b[0];
    for(int i = 1; i < n; i++){
        if(max_A < a[i]){
            max_A = a[i];
        }
        if(max_B < b[i]){
            max_B = b[i];
        }
    }

    return max_A * max_B;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int a[n];
        int b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        cout << solve(n,a,b) << "\n";
    }


    return 0;
}
