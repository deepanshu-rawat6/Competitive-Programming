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
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int>v1,v2;
    int x,val,c1=0,c2=0;
    for(int i=0;i<m+n;i++){
        cin>>x;
        if(i<m){
            val=a+x;
            if(val>=s && val<=t){
                c1++;
            }
        }else{
            val=b+x;
            if(val>=s && val<=t){
                c2++;
            }
        }
    }
    cout<<c1<<"\n"<<c2<<"\n";
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
