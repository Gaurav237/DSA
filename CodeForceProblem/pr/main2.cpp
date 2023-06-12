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

ll solve(ll m, ll f, ll c){

    // ll x = min(m,f);
    // if(c < x){
    //     return (m + f + c) / 3;
    // }
    // m = m - x;
    // f = f - x;
    // ll sum = m + f + c;
    
    // ll count = min(x, sum);

    // return count;
    int count  = 0;
    while(m > 0 && f > 0 && c > 0){
        m--;
        f--;
        c--;
        count++;
    }   

    // cout << m << f << c << "\n";

    while(m > 0 && f > 0 && (m + f) > 2){
        m--;
        f--;
        if(m >= f){
            m--;
        }else{
            f--;
        }
        count++;
    }

    // cout << m << f << c << "\n";

    return count;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // ll t;
    // cin >> t;

    // while(t-- > 0){

        ll m = 4,f = 4,c = 1;
        // cin >> m >> f >> c;
        cout << solve(m,f,c) << "\n";

    // }
    


    return 0;
}
