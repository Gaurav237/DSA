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

void solve(int s){
    int i = 9;
    vector<int> v;
    while(s != 0 && i > 0){
        if(s - i >= 0){
            s = s - i;
            v.push_back(i);
        }
        i--;
    }

    while(!v.empty()){
        cout << v.back();
        v.pop_back();
    }
    cout << "\n";
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

        int s;
        cin >> s;
        solve(s);

    }
    


    return 0;
}
