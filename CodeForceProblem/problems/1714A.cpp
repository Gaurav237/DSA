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
    int n;
    int H, M;
    cin >> n >> H >> M;

    int sleep = H * 60 + M;

    set<int> mySet;
    int x, y;
    int time;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        time = x * 60 + y;
        if(time < sleep){
            time += 24 * 60;
        }
        mySet.insert(time);
    }

    auto it = mySet.begin();
    int duration = *it - sleep;
    cout << duration / 60 << " " << duration % 60 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        solve();
    }


    return 0;
}
