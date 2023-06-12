#include <bits/stdc++.h>
using namespace std;

string removeCharacters(string S, char c) {
 
    S.erase(remove(
                S.begin(), S.end(), c),
            S.end());
 
    return S;
}

int alternate(string s) {

    bool flag = true;
    int i = 1000;
    
    while(flag){
        
        bool cflag = false;
        for(int i = 0 ; i < s.length() - 1; i++){
            if(s[i] == s[i+1]){
                s = removeCharacters(s, s[i]);
                // cout << s << endl;
                cflag = true;
                break;
            }
        }

        if(cflag){
            continue;
        }

        bool gflag = false;
        
        for(int i = 0 ; i < s.length() - 2; i++){
            if(s[i] != s[i+2] && s[i] != s[i+3]){
                s = removeCharacters(s, s[i]);
                // cout << i << endl;
                // cout << s << endl;
                gflag = true;
                break;
            }
        }

        if(gflag){
            continue;
        }
        
        
        flag = false;
        for(int i = 0; i < s.length() - 2; i++){
            if(s[i] != s[i+2]){
                flag = true;
                break;
            }
        }
        i--;
        if(i <= 0){
            return 0;
        }
    }

    cout << s << endl;
    return s.length();
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // alternate("beabeefeab");
    // alternate("abgaagcdbdhbdbd");

    unordered_map<int, char> mp;
    for(int i = 97; i <= 122; i++){
        mp[i-96] = i;
    }
    
    for(auto e : mp){
        cout << e.first << " " << e.second << endl;
    }


    return 0;
}
