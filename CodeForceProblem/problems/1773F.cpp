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

    int t;
    cin >> t;

    while(t-- > 0){
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        int ct = 0;
        for(int i = 0; i < 4; i++){
            if(arr[i] == 1){
                ct++;
            }
        }

        int res;
        if(ct == 0){
            res = 0;
        }else if(ct == 4){
            res = 2;
        }else{
            res = 1;
        }

        cout << res << endl;
    }


    return 0;
}
