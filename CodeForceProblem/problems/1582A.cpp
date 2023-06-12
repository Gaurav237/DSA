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

ll solve(ll a, ll b, ll c){
    ll concertX = 0;
    ll concertY = 0;

    while(c > 0){
        if(concertX > concertY){
            concertY += 3;
        }else{
            concertX += 3;
        }
        c--;
    }

    while(b > 0){
        if(concertX > concertY){
            concertY += 2;
        }else{
            concertX += 2;
        }
        b--;
    }

    while(a > 0){
        if(concertX > concertY){
            concertY += 1;
        }else{
            concertX += 1;
        }
        a--;
    }

    return abs(concertX - concertY);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
        ll a, b, c;
        cin >> a >> b >> c;

        cout << solve(a,b,c) << "\n";
      
    }


    return 0;
}
