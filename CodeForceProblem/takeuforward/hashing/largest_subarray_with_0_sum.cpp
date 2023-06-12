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

int maxLen(vector<int> &arr){
    int n = arr.size();

    unordered_map<int, int> hashmap;

    int max_len = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum == 0){
            max_len = i + 1;
        }else{

            // if the current sum is present in hashmap
            // then update the max_length
            if(hashmap.find(sum) != hashmap.end()){
                max_len = max(max_len, (i - hashmap[sum]));
            }else{
                // else insert this sum with index, in hash table
                hashmap.insert(sum, i);
            }
        }
    }

    return max_len;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    


    return 0;
}
