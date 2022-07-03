#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>
const long long int MOD = 1e5;
ll fact[MOD];
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
    cin.tie(NULL);
    ll i;
    fact[0]=fact[1]=1;
    for(i=2;i<MOD;i++){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        // solve();
        ll x;
        cin>>x;
        cout<<fact[x]<<"\n";
    }
    

    return 0;
}
