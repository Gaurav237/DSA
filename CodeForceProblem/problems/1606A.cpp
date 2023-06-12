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
    // string st = "aabbbabaa";
    string st = "abbaab";

    int ab = 0;
    vector<int> vab;
    int ba = 0;
    vector<int> vba;
    for(int i = 0; i < st.length() - 1; i++){
        string x = st.substr(i,2);
        if("ab" == x){
            ab++;
            vab.push_back(i);
        }
        if("ba" == x){
            ba++;
            vba.push_back(i);
        }
    }

    cout << ab << " , " << ba << "\n";
    for(int i = 0; i < vab.size(); i++){
        cout << vab[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i < vba.size(); i++){
        cout << vba[i] << " ";
    }

    while(ab != ba){
        


    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // int t;
    // cin >> t;

    // while(t-- > 0){
        solve();
    // }


    return 0;
}
