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
    unordered_map<char, int> hm;
    for(auto e : st){
        hm[e]++;
    }

    int same = 0;
    int diff = 0;
    for(auto e : hm){
        if(e.second == 3){
            cout << 1 << "\n";
            return;
        }

        if(e.second == 1){
            diff += 1;
        }else if(e.second == 2){
            same += 1;
        }else if(e.second == 4){
            same += 1;
        }
    } 
    
    if(same == 2 && diff == 0){
        cout << 1 << "\n";
    }else if(same  == 1 && diff == 2){
        cout << 2 << "\n";
    }else if(same == 1 && diff == 0){
        cout << 0 << "\n";
    }else if(same == 0 && diff == 4){
        cout << 3 << "\n";
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

        string st1;
        string st2;
        cin >> st1 >> st2;
        string st3 = st1 + st2;
        solve(st3);
    }

    return 0;
}
