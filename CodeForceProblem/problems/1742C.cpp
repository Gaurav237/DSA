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
    char arr[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
        }
    }

    // for(int i = 0; i < 8; i++){
    //     for(int j = 0; j < 8; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int b;
    // for(int i = 0; i < 8; i++){
    //     if(A[0][i] == 'B'){
    //         b = i;
    //         break;
    //     }
    // }

    // int r;
    // for(int i = 0; i < 8; i++){
    //     if(A[i][0] == 'R'){
    //         r = i;
    //         break;
    //     }
    // }

    // cout << A[r][b] << "\n";

    int count;
    for(int i = 0; i < 8; i++){
        count = 0;
        for(int j = 0; j < 8; j++){
            if(arr[i][j] == 'R'){
                count++;
            }
        }
        if(count == 8){
            cout << "R" << "\n";
            return;
        }
    }

    for(int j = 0; j < 8; j++){
        count = 0;
        for(int i = 0; i < 8; i++){
            if(arr[i][j] == 'B'){
                count++;
            }
        }
        if(count == 8){
            cout << "B" << "\n";
            return;
        }
    }
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
