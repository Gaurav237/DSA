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
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        int mat[2][2] = {{arr[0], arr[1]},
                {arr[2], arr[3]}};

    //     for(int i = 0; i < 4; i++){
    //         cout << arr[i] << " ";
    //     }
    // cout << endl;        
        int _min = arr[0];
        int _max = arr[0];
        for(int i = 1; i < 4; i++){
            if(_min > arr[i]){
                _min = arr[i];
            }
            if(_max < arr[i]){
                _max = arr[i];
            }
        }
        // cout << _min << endl;
        // cout << _max << endl;

        if((mat[0][0] == _max || mat[1][1] == _max) && (mat[0][0] == _min || mat[1][1] == _min)){
            cout << "YES" << endl;
        }else if((mat[0][1] == _max || mat[1][0] == _max) && (mat[0][1] == _min || mat[1][0] == _min)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    
    }


    return 0;
}
