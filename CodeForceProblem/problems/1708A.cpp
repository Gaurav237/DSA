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

void solve(ll arr[], int n){
    bool flag = true;
    ll x = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] % x != 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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


    int t;
    cin >> t;

    while(t-- > 0){
        
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    solve(arr,n);

    }
    


    return 0;
}
