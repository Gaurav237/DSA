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

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    vector<vector<int>> edges = {{1,2},{1,0},{0,2}};

    sort(edges.begin(), edges.end());
    
    for(int i = 0; i < 3; i++){
        cout << edges[i][0] << " " << edges[i][1] << endl;
    }

    return 0;
}
