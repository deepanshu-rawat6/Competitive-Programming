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
    vector<int> v1,v2;
    int x,ans=0;
    while(cin>>x){
        if(x==0) break;
        v1.pb(x);
    }
    while(cin>>x){
        if(x==0) break;
        v2.pb(x);
    }
    for(int i=0;i<v1.size();i++){
        int temp=100000,temp_index=0;
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                v1.erase(v1.begin()+i);
                v2.erase(v2.begin()+j);
            }
        }
        v2.erase(v2.begin()+temp_index);
        ans+=temp;
    }
    cout<<ans<<"\n";
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
