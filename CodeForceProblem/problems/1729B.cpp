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

void solve(int n, string num){
    map<int, char> mp;
    for(int i = 1; i <= 26; i++){
        mp[i] = 96 + i;
    }

    string res = "";
    int x = n - 1;
    string st = "";
    while(x >= 0){
        if(num[x] == '0' && x >= 2){
            st = "";
            st += num[x-2];
            st += num[x-1];
            int a = stoi(st);
            res += mp[a];
            x = x - 3;
        }else{
            st = "";
            st += num[x];
            int a = stoi(st);
            res += mp[a];
            x = x - 1;
        }
        
    }
    reverse(res.begin(), res.end());

    cout << res << endl;
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
        int n = 4;
        cin >> n;
        string num = "2606";
        cin >> num;

        solve(n, num);
    }

    return 0;
}
