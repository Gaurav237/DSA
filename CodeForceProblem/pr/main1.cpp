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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vi a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int count = 0;
        int flag = false;
        for(int i = 0; i < n; i++){
            if(a[i] < 0) flag = true;
            if(flag == true && (a[i] > 0 || i == n-1)){
                count++;
                flag = false;
            }
        }

        cout << sum << " " << count << endl;
    }


    return 0;
}