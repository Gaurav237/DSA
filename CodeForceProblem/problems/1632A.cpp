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

void solve(int n, string &st){

    int countOne = 0;
    int countZero = 0;

    for(int i = 0; i < n; i++){
        if(st[i] == '1'){
            countOne++;
        }else if(st[i] == '0'){
            countZero++;
        }
    }

    // cout << countZero << " " << countOne << '\n';

    int t = abs(countOne - countZero);

    cout << t << "\n";

    if(t > 1){
        cout << "NO" << "\n";
    }else{
        string curr1 = "";
        int c0 = countZero;
        int c1 = countOne;
        for(int i = 0;i < n && c1 >= 0 && c0 >= 0; i++){
            if(i%2 == 0){
                curr1 += '1';
                c1--;
            }else{
                curr1 += '0';
                c0--;
            }
        }

        string curr2 = "";
        for(int i = 0; i < n && countOne >= 0 && countZero >= 0; i++){
            if(i%2 != 0){
                curr2 += '1';
                countOne--;
            }else{
                curr2 += '0';
                countZero--;
            }
        }

        // cout << curr1 << "\n" << curr2 << endl;
        if(st == curr1 || st == curr2){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
        }
        
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

        int n;
        cin >> n;
        string st;
        cin >> st;

        solve(n, st);


    }
    


    return 0;
}
