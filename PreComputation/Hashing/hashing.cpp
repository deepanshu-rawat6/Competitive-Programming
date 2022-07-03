#include <bits/stdc++.h>
using namespace std;
#define ll long long int
__attribute__((unused)) const long long int MOD = 1e9+7;
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
void solve(){

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    freopen("Error.txt","w",stderr);
#endif
//    int t;
//    cin>>t;
//    while(t--){
//        solve();
//    }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                c++;
            }
        }
        cout<<c<<"\n";
    }
    // O(N^2) solution
}
