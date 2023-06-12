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

ll solve(){
    ll n = 2;
    cin >> n;
    
    ll arr[n]; 
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll count = 0;
    for(ll i = n - 2; i >= 0; i--){
        while(arr[i] >= arr[i+1]){
            arr[i] = arr[i]/2;
            count++;
            if(arr[i] == 0){
                break;
            }
        }
        if(arr[i] == 0 && arr[i+1] == 0){
            return -1;
        }
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
      cout << solve() << "\n";
    }


    return 0;
}
