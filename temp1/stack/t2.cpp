#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(string str) {
    // string res = "";
    stack<char> s;
    for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == s.top()){
            s.pop();
        }else{
            s.push(str[i]);
            // res += str[i];
        }
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    // return res;
}

int main() {
    string str = "aaabbaaccd";
    // string str = "aaaa";

    removeDuplicates(str);

    return 0;
}
