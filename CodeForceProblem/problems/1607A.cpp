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

int solve(string &keyboard, string &word){

    unordered_map<char, int> hm;
    for(int i = 0; i < keyboard.length(); i++){
        hm.insert({keyboard[i], i+1});
        // hm.insert(make_pair(keyboard[i], i+1));
    }
    
    int res = 0;
    for(int i = 1; i < word.length(); i++){
        res += abs(hm[word[i]] - hm[word[i-1]]);
    }

    return res;
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
        string keyboard;
        string word;
        cin >> keyboard >> word;

        cout << solve(keyboard, word) << "\n";
    }

    return 0;
}
