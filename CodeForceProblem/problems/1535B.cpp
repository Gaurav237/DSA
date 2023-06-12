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

ll GCD(ll a, ll b){
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}

ll solve(ll arr[], ll n){
    sort(arr, arr+ n, greater<ll>());

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    ll count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(gcd(arr[i], arr[j]) > 1){
                count++;
            }
        }
    }

    return count;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    // int t;
    // cin >> t;

    // while(t-- > 0){

        ll arr[] = {1,7};
        ll n = 2;

        cout << solve(arr, n);

    // }
    


    return 0;
}

