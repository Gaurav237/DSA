#include <bits/stdc++.h>
#define ll long long
using namespace std;

void permute(string s, int left, int right){
    // left index acts as current index
    if(left == right){
        cout << s << endl;
        return;
    }else{
        for(int i = left; i <= right; i++){
            // to swap the string
            swap(s[left], s[i]);
            
            permute(s, left+1, right);
            
            // to regain the original string, for next permutation
            swap(s[left], s[i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "ABC";
    int n = s.length();

    permute(s,0,n-1);

    return 0;
}
