#include <bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c){
    if(n < 0){
        return -1;
    }
    if(n ==  0){
        return 0;
    }
    int res = max(max(maxPieces(n-a,a,b,c), maxPieces(n-b,a,b,c)), maxPieces(n-c,a,b,c));

    if(res == -1){
        return -1;
    }
    
    return res + 1;
}   


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n = 23,a = 11,b = 9,c = 12;
    cout << maxPieces(n,a,b,c);


    return 0;
}
