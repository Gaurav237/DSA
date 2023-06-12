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

ll solve(int n, string st){
    int r = n - 1;
    int l = n - 2;

    ll count = 0;
    int k;
    while(l >= -1){
        if(st[r] != '0'){
            char ch = st[r];
            k = (int)ch - 48;

            count += k;
            st[r] = '0';
        }else{
            if(st[l] != '0'){
                swap(st[l], st[r]);
                count++;
            }
            l--;
        }
    }

    return count;
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
        int n;
        string st;
        cin >> n >> st;

        cout << solve(n, st);

    }


    return 0;
}
