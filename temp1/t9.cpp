#include <bits/stdc++.h>
using namespace std;

void solve(){
    unordered_map<char, int> mp;
    for(int i = 97; i <= 122; i++){
        mp[i] = i - 96;
    }
    
    for(auto e : mp){
        cout << e.first << " : " << e.second << endl;
    }


}


vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string> res;
    
    unordered_map<char, int> mp;
    for(int i = 97; i <= 122; i++){
        mp[i] = i - 96;
    }
    
    // for(auto e : mp){
    //     cout << e.first << " : " << e.second << endl;
    // }

    for(int i = 0; i < queries.size(); i++){
        int total = queries[i];
        int sum = 0;
        bool flag = false;
        for(int i = 0; i < s.length() - 1; i++){
            sum = mp[s[i]];
            bool flag = true;
            for(int j = i + 1; j < s.length(); j++){
                if(sum == total){
                    res.push_back("YES");
                    break;
                }else if(sum > total){
                    break;
                }else{
                    sum += mp[s[j]];    
                }
            }
            if(sum == total){
                break;
            }
        }
    }
    
    return res;
}

int main() {
    cout << abs(-1);

    return 0;
}
