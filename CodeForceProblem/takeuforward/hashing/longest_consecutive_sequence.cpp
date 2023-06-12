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

int longestConsecutive(vector<int> &nums){

    unordered_set<int> hashset;
    int n = nums.size();

    // pushing elements in hash-set
    for(int i = 0; i < n; i++){
        hashset.insert(nums[i]);
    }

    // traversing over each array element
    int longestStreak = 0;
    for(int i = 0; i < n; i++){
        int x = nums[i];

        // if ( nums[i] - 1 ) is not present in array, 
        // then this current element is starting element of consecutive elements
        if(hashset.find(x - 1) == hashset.end()){

            int currentStreak = 0;
            
            while(hashset.find(x) != hashset.end()){
                x++;
                currentStreak++;
            }

            // update optimal length if this current length is more
            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    vector<int> nums = {100,4,200,1,3,2};
    

    return 0;
}
