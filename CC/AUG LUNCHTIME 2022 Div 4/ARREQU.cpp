#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>
const long long int MOD = 1e9+7;
// Prime function with O(N^(1/2)) approach
bool prime(int n){
    int i=2;
    if(n<2){
        return false;
    }
    while(i*i<=n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
// This function calculates the divisors by O(N^(1/2)) approach and also maintains the ascending order
vector<ll> printDivisors(ll n)
{
    vector<ll>v;
    ll i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            v.push_back(i);
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            v.push_back(n/i);
    }
    return v; // returns the second largest element in the vector
}
void sorting(map<ll,ll>& m)
   {

    // Declare a multimap
      multimap<ll,ll> MM;

     // Insert every (key-value) pairs from
     // map M to multimap MM as (value-key)
     // pairs
      for (auto& it : m) {
      MM.insert({it.second,it.first});
      }
}
void solve(){
    // int n;
    // cin>>n;
    // vector<ll>v(n);
    // map<ll,ll>m;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // // sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     m[v[i]]++;
    // }
    // // sorting(m);
    // if(m.size()==1){
    //     cout<<"No"<<"\n";
    //     return;
    // }
    // ll def=m[v[0]];
    // for(auto i=m.begin();i!=m.end();i++){
    //     if(i==m.begin()){
    //         continue;
    //     }else{
    //         def=abs(def-(i->second));
    //         if(def>=2 && m.size()==2){
    //             cout<<"No"<<"\n";
    //             return;
    //         }
    //     }
    // }
    // cout<<"Yes"<<"\n";


    int n;
    cin>>n;
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    ll maxi=INT64_MIN;
    for(auto i:m){
        maxi=max(maxi,i.second);
    }
    if(maxi>(n+1)/2){
        cout<<"No"<<"\n";
    }else{
        cout<<"Yes"<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// This code commented out in the function: void solve() is my approach
// But the other one is taken from another participant for learning purposes