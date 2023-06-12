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

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        string st;
        cin >> st;

        transform(st.begin(), st.end(), st.begin(), ::tolower);
        
        bool flag = true;
        for(int i = 0; i < n-1; i++){
            if(st[0] != 'm'){
                flag = false;
                break;
            }
            if(st[i] != 'm' || st[i] != 'e' || st[i] == 'o' || st[i] == 'w'){
                flag = false;
                break;
            }

            if(st[i] == 'm' && (st[i+1] != 'm' && st[i+1] != 'e'))
        }

    }


    return 0;
}
