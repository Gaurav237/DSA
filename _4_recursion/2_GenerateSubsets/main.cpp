#include <bits/stdc++.h>
using namespace std;

// my attempt:
// void subsets(string curr, int index, string st){
//     if(index == st.length()){
//         return;
//     }

//     cout << curr << " ";
//     cout << curr + st[index + 1] << " ";
//     return subsets(curr += st[index], index  + 1, st);
// }

void subsets(string &st, string curr, int i){
    if(i == st.length()){
        cout << curr << " ";
        return;
    }

    subsets(st, curr, i + 1);
    subsets(st, curr + st[i], i + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st = "ABC";
    subsets(st,"",0);


    return 0;
}
