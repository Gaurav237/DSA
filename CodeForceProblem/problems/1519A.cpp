#include <bits/stdc++.h>
using namespace std;
#define ll long long

// lengthy solution
// void solve(ll r, ll b, ll d){
    
//     if(r == b){
//         cout << "YES" << "\n";
//         return;
//     }else if(r > b){
//         for(int i = 0; i < b; i++){
//             r = r - d - 1;
//         }

//         if(r <= 0){
//             cout << "YES" << "\n";
//             return;
//         }

//     }else if(b > r){
//         for(int i = 0; i < r; i++){
//             b = b - d - 1;
//         }

//         if(b <= 0){
//             cout << "YES" << "\n";
//             return;
//         }

//     }else{
//         cout << "NO" << "\n";
//     }


// }

void solve(ll r, ll b, ll d){
    if(r > b){
        swap(r,b);
    }

    if(b <= r * (d + 1)){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }


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
    
    ll r,b,d;
    cin >> r >> b >> d;

    solve(r,b,d);

    }
    


    return 0;
}
