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


void solve(ll arr[], int n){
    vector<ll> vec;
    int i = 0;
    int j = n - 1;
    int x = 0;
    while(i <= j && x < n){
        vec.push_back(arr[i]);
        vec.push_back(arr[j]);
        i++;
        j--;
        x++;
    }

    if(n % 2 != 0){
        vec.pop_back();
    }

    for(auto e : vec){
        cout << e << " ";
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

        int n;
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        solve(arr, n);


    }
    


    return 0;
}
