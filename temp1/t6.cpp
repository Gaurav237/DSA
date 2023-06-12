#include <bits/stdc++.h>
using namespace std;

int main(){
   
    std::vector<int> vec { 10, 20, 30, 40 };

    vector<int>::iterator it;
    // while(it != vec.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    it = find(vec.begin(), vec.end(), 50);

    if(it != vec.end()){
        cout << "Found 30" << endl;
    }else{
        cout << "not found" << endl;
    }

    return 0;
}