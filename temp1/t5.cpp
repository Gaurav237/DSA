#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll k){
   ll res = 1;
   for(ll i = 2; i <= k; i++){
    res *= i;
   }
   return res;
}

void check(ll arr[], ll n, ll d){
   ll sum = 0;
   ll c = fact(d);
  
   for(ll i=0; i< n; i++){
        sum += fact(arr[i]);
   }

   if(sum % c == 0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
 
int main(){
    ll n;
    ll x;
    ll arr[n];
    // cout<<"Enter the no. of elements(n): "<<endl;
    cin>>n;
    // cout<<"Enter the number(x): "<<endl;
    cin>>x;
    for(ll i=0; i<n; i++){
    // cout<<"Enter the elemnts: "<<endl;
        cin>>arr[i];
    }
    
    check(arr, x, n);
 
    return 0;
}