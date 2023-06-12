#include <bits/stdc++.h>
using namespace std;

int solve(int k){
    int i = 1;
    while(true){
        if(i % 3 != 0 && i % 10 != 3){
            k--;
            if(k < 1){
                return i;
            }
        }
        i++;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t > 0){
        int k;
        cin >> k;

        cout << solve(k) << "\n";
        
        t--;
    }

    return 0;
}
