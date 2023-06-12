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

int solve(int arr[], int n){

    unordered_map<int, int> hm;
    for(int i = 0; i < n; i++){
        hm[abs(arr[i])]++;
    }

    // for(auto e : hm){
    //     cout << e.F << " : " << e.S << endl;
    // }

    // cout << endl;

    int count = 0;
    for(auto e : hm){
        if(e.F == 0 || e.S == 1){
            count++;
        }else if(e.S > 1){
            count += 2;
        }
    }

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


    int t;
    cin >> t;

    while(t-- > 0){

        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout << solve(arr, n) << "\n";

    }
    


    return 0;
}
