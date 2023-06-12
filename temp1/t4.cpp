#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string st){
    string rev = st;
    reverse(rev.begin(), rev.end());
    return (rev == st);
}

int solve(string str){
    int count = 0;
    int len = str.length();

    for(int i = 0; i < len; i++){
        string s = "";
        for(int j = i; j < len; j++){
            s += str[j];
            if(isPallindrome(s)){
                count++;
            }
        }
    }
    
    return count + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st;
    cin >> st;
    cout << solve(st);

    return 0;
}

