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
    int n;
    int k;
    string st;
    cin >> n >> k >> st;

    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[st[i]]++;
    }

    string res = "";

    for(int i = 1; i <= k; i++){

        int length = n / k;
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(length <= 0){
                res += ch;
                break;
            }
            
            if(mp[ch]){
                mp[ch]--;
            }else{
                res += ch;
                break;
            }

            length--;
        }

    }

    cout << res << "\n";
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
