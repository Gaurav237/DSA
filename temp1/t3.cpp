#include <bits/stdc++.h>
using namespace std;
// logic : (1^2^3^4^5^6^7^8^..^(n+1) ^ (arr[0]^arr[1]^arr[2]^...^arr[n-1]))
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int arr[] = {1,4,3};
    // int n = 4;

    int arr[] = {1,5,3,2};
    // int n = 5;

    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int n = arr_size + 1;

    int res = 0;
    for(int i = 0; i < arr_size; i++){
        res = res ^ arr[i];
    }

    for(int i = 1; i <= n; i++){
        res = res ^ i;
    }

    cout << res << endl;

    return 0;
}
