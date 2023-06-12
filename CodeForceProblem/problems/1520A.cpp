#include <bits/stdc++.h>
using namespace std;

void solve(string st, int n){

    // this new string has, no consecutive occurance of same characters
    string newString = "";
    newString += st[0];
    for(int i = 1; i < n; i++){
        if(st[i] != st[i-1]){
            newString += st[i];
        }
    }   

    // cout << new_st << "\n";

    unordered_map<char, int> hm;
    for(int i = 0; i < newString.length(); i++){
        hm[newString[i]]++;
    }

    for(auto e : hm){
        if(e.second > 1){
            cout << "NO" << "\n";
            return;
        }
        // cout << e.first << " : " << e.second << "\n";
    }

    cout << "YES" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-- > 0){

        int n = 3;
        cin >> n;
        string st;
        cin >> st;

        solve(st,n);   
    }

    return 0;
}
