#include <bits/stdc++.h>
using namespace std;

float solve(int arr[], int n){

    sort(arr, arr + n);
    float a = 0;
    for(int i = 0; i < n - 1; i++){
        a += arr[i];
    }
    a = a / (n-1);

    return (float)(a + arr[n-1]);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(9);
    
    int t;
    cin >> t;

    while(t-- > 0){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << solve(arr, n) << "\n";
    }


    return 0;
}
