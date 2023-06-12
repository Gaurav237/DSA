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

vector<vector<int>> solve(vector<int> v, int target){
    vector<vector<int>> res;

    if(v.empty()){
        return res;
    }
    
    int n  = v.size();

    // sort the array first
    sort(v.begin(), v.end());

    for(int i = 0; i < n-1; i++){

        for(int j = i + 1; j < n-1; j++){
            int sum = target - v[i] - v[j];
            
            int left = j + 1;
            int right = n - 1;

            while(left < right){
                int two_sum = v[left] + v[right];
                
                if(two_sum < sum){
                    left++;
                }else if(two_sum > sum){
                    right--;
                }else{
                    res.push_back({v[i], v[j], v[left], v[right]});

                    int num3 = v[left];
                    int num4 = v[right];

                    // Processing the duplicates of 3rd number
                    while(left < right && v[left] == num3){
                        left++;
                    }

                    // Processing the duplicates of 4th number
                    while(left < right && v[right] ==  num4){
                        right--;
                    }

                }
            }

            // Processing the 2nd number
            while(j < n-1 && v[j] == v[j+1]){
                j++;
            }
        }

        // Processing the 1st number
        while(i < n-1 && v[i] == v[i+1]){
            i++;
        }
    }

    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    vector<int> v = {4,3,3,4,4,2,1,2,1,1};
    int target = 9;

    solve(v, target);


    return 0;
}
