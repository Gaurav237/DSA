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

bool solve(int n, const string &st){
    int count = 1;
    int i = 0;
    while(i < n){
        if(count % 2 == 0){
            if(st[i] != st[i+1]){
                return false;
            }
            i += 2;
        }else{
            i++;
        }
        count++;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        string st;
        
        cin >> n;
        cin >> st;

        if(solve(n, st)){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    
    }


    return 0;
}
