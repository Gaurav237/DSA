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

        vi a;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        int _min = 0;
        int _max = 0;
        for(int i = 0; i < n; i++){
            if(a[i] < a[_min]){
                _min = i;
            }
            if(a[i] > a[_max]){
                _max = i;
            }
        }

        cout << _min << " " << _max << endl;

        int l = 0;
        int r = n - 1;

        int count = 0;
        bool flag_min = false;
        bool flag_max = false;

        while(l < r && (!flag_min || !flag_max)){

            if(l == _min || r == _min){
                flag_min = true;
            }
            if(l == _max || r == _max){
                flag_max = true;
            }

            if(!flag_min && (abs(_min - l) < abs(_min - r))){
                l++;
                cout << "cond 1" << endl;
            }else if(!flag_max && (abs(_max - l) < abs(_max - r))){
                l++;
                cout << "cond 2" << endl;
            }else if(!flag_min && (abs(_min - l) >= abs(_min - r))){
                r--;
                cout << "cond 3" << endl;
            }else if(!flag_max && (abs(_max - l) >= abs(_max - r))){
                r--;
                cout << "cond 4" << endl;
            }else{
                l++;
            }

            count++;
        }

        cout << count << endl;
    }


    return 0;
}