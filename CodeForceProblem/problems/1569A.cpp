#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 

void solve(int n, string &st){

    for(int i = 0; i < n-1; i++){
        if(st[i] != st[i+1]){
            cout << i+1 << " " << i+2 << endl;
            return;
        }
    }
    
    cout << -1 << " " << -1 << endl;
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
        cin >> n >> st;

        solve(n, st);
    }
    


    return 0;
}
