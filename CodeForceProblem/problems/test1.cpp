#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    // int t;
    // cin >> t;

    // while(t-- > 0){

        int arr[] = {1,3,2,5,1,1,2,3};
        int n = sizeof(arr)/sizeof(arr[0]);

        int i = 0;
        int j = i + 1;
        int sum = 8;
        int currSum = 0;
        for(int i = 0; i < n; i++){
            currSum += arr[i];

            if(currSum == sum){
                cout << "Sum found at index " << i << endl;
                return;
            }else{
                for(int j = i + 1; j < n; j++){
                    currSum += arr[j];

                    if(currSum == sum){
                        cout << i << " " << j << endl;
                        return;
                    }
                }
            }
        }


    // }
    


    return 0;
}
