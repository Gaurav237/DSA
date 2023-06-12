#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll solve(ll arr[], ll n){

    ll max = arr[0];
    ll max_index = 0;
    for(ll i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
    }
    
    cout << max << endl;

    ll second_max = -1;
    for(ll i = 0; i < n; i++){
        if(max_index != i && arr[i] > second_max){
            second_max = arr[i];
        }
    }

    cout << second_max << endl;

    return max * second_max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    // int t;
    // cin >> t;

    // while(t-- > 0){




    // }
    ll n = 6;
    ll arr[] = {719313, 273225, 402638, 473783, 804745, 323328};

    cout << solve(arr, n) << endl;

    return 0;
}
