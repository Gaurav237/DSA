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

void solve(vector<ll> &num){
    vector<ll> res(3);

    if(num[0] == num[1] && num[1] == num[2] && num[2] == num[0]){
        res[0] = res[1] = res[2] = num[0] + 1;
    }else{
        // find max number
        ll maxVotes = max(num[0], max(num[1], num[2]));
        // cout << maxVotes << endl;

        for(int i = 0; i < 3; i++){
            if(num[i] == maxVotes){
                res[i] = 0;
            }else{
                res[i] = maxVotes - num[i] + 1;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){
        vector<ll> num(3);
        for(ll i = 0; i < 3; i++){
            cin >> num[i];
        }
        
        // cout << num[0] << " " << num[1] << " " << num[2] << endl;
        solve(num);
    }
    


    return 0;
}
