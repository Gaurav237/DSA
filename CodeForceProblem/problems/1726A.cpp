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

int solve(){
    // int n = 6;
    // int arr[n] = {1,3,9,11,5,7};
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_ = 0;
    for(int i = 1; i < n; i++){
        if(arr[min_] >= arr[i]){
            min_ = i;
        }
    }

    int max_ = 0;
    for(int i = 1; i < n; i++){
        if(arr[max_] < arr[i]){
            max_ = i;
        }
    }

    // cout << min << " " << max << "\n"; 

    if(0 == min_ || n-1 == max_ || min_ - max_ == 1){
        return arr[max_] - arr[min_];
    }else{
        return max(arr[max_] - arr[0], arr[n-1] - arr[max_]);
    }

    // return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        
        cout << solve() << "\n";

    }


    return 0;
}
