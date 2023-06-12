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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        string st;
        cin >> st;

        int res = 0;

        unordered_map<char, int> mpl;
        unordered_map<char, int> mpu;
        for(auto  e : st){
            if(islower(e)){
                mpl[e]++;
            }else{
                mpu[e]++;
            }
        }

        for(auto e : st){
            int x = min(mpl[e], mpu[e]);
            res += x;
            mpl[e] -= x;
            mpu[e] -= x;
        }

        // for(auto e : st){
        //     if(k > 0){
        //         int 
        //         res += ;
        //         k--;
        //     }
        // }

        cout << res << endl;

    }


    return 0;
}
