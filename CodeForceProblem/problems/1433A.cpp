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

int solve(int x){
    int count = 0;
    for(int i = 1; i <= 9; i++){
        count++;
        if(i == x){
            return count;
        }

        count += 2;
        if(i * 10 + i == x){
            return count;
        }

        count += 3;
        if(i * 100 + i * 10 + i == x){
            return count;
        }
        
        count += 4;
        if(i * 1000 + i * 100 + i * 10 + i == x){
            return count;
        }
    }
    return -1;
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
        int x;
        cin >> x;
        cout << solve(x) << "\n";
      
    }

    return 0;
}
