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
void solve(){
    ll n,max,maxi=0,min,mini=0,c=0;
    cin>>n;
    ll arr[n];
    min=MOD;
    max=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=min){
            min=arr[i];
            mini=i;
        }
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1<<"\n";
    }else{
        cout<<(maxi-1)+(n-mini)<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
