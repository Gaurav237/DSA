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

ll otherBaseToDecimalBase(string n, int k)
{
    ll num = stoi(n);
    ll decimalValue = 0;
 
    ll base = 1;
 
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
 
        decimalValue += last_digit * base;
 
        base = base * k;
    }
 
    return decimalValue;
}


ll solve(){
    ll k;
    string A;
    string B;
    cin >> k >> A >> B;

    if(k == 10){
        return stoi(A) * stoi(B);
    }
    
    ll a = otherBaseToDecimalBase(A, k);
    ll b = otherBaseToDecimalBase(B, k);

    return a*b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    cout << solve() << "\n";    


    return 0;
}
