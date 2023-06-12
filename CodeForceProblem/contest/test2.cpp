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

void solve(int n){
    if(n == 1 || n == 3){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    if(n % 2 == 0){
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                cout << -1 << " ";
            }else{
                cout << 1 << " ";
            }
        }    
    }else{
        int k = (n-1)/2;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                cout << k-1 << " ";
                // cout << 1-k << " ";
            }else{
                cout << -k << " ";
                // cout << k << " ";
            }
        }
    }
    
    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-- > 0){
      int n;
      cin >> n;

      solve(n);
    }


    return 0;
}
