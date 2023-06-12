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

void solve(string st){
    int i = -1;
    int j = -1;
    for(int x = 0; x < st.length(); x++){
        if(st[x] == 'a'){
            i = j = x;
            break;
        }
    }

    if(i == -1){
        cout << "NO" << "\n";
        return;    
    }

    int count = st.length();
    int ch = 98;
    while(count > 1){
        char c = (char)ch;
        if(st[i-1] == ch && i > 0){
            i--;
        }else if(st[j+1] == ch && j < st.length() - 1){
            j++;
        }else{
            cout << "NO" << "\n";
            return;
        }
        ch++;
        count--;
    }

    cout << "YES" << "\n";
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
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
