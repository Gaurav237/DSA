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
    ll w,h,n;
    cin >> w >> h >> n;

    ll count = 0;
    while(w >= 1 || h >= 1){
        if(w % 2 == 0){
            w = w / 2;
            count++;
        }else if(h % 2 == 0){
            h = h / 2;
            count++;
        }

        if(w % 2 != 0 && h % 2 != 0){
            break;
        }
    }

    ll total = pow(2,count);

    if(total >= n){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){


        solve();

    }
    


    return 0;
}
