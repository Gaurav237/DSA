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

int digitSum(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    ll t;
    cin >> t;

    while(t-- > 0){
        ll n;
        cin >>  n;

        if(n % 2 == 0){
            cout << n/2 << " " << n/2 << endl;
            continue;
        }

        ll x = n, y = 0;
        while(x >= 0 && y <= n){
            ll xs = digitSum(x);
            ll ys = digitSum(y);

            if(abs(xs - ys) <= 1){
                cout << x << " " << y << endl;
                break;
            }

            x--;
            y++;
        }

    }


    return 0;
}
