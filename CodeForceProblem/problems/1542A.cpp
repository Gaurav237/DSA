#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c, int d){
    
    if(max(a,b) > min(c,d) && max(c,d) > min(a,b)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t > 0){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        solve(a,b,c,d);
        t--;
    }

    return 0;
}
