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

ll solve(ll arr[], ll n){

    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    // cout << min << "\n";
    int x = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            x++;
        }
    }

    return n - x;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;
    while(t-- > 0){
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout << solve(arr, n) << "\n";

    }
    


    return 0;
}
