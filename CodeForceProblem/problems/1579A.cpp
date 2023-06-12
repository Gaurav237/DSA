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

void solve(string &st){
    int count_A = 0;
    int count_B = 0;
    int count_C = 0;
    for(int i = 0; i < st.length(); i++){
        if(st[i] == 'A'){
            count_A++;
        }else if(st[i] == 'B'){
            count_B++;
        }else if(st[i] == 'C'){
            count_C++;
        }
    }

    if(count_A + count_C == count_B){
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
        string st;
        cin >> st;
        solve(st);
    }

    return 0;
}
