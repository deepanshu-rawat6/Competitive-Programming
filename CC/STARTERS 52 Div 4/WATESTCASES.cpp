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
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // string s;
    // cin>>s;
    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    //     if(s[i]=='1'){
    //         v.erase(v.begin()+(i-1));
    //     }
    // }
    // sort(v.begin(),v.end());
    // cout<<v[0]<<"\n";
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s.at(i)=='1'){
            v[i]=0;
        }
    }
    sort(v.begin(),v.end());
    int j;
    for(j=0;j<n;j++){
        if(v[j]!=0){
            break;
        }
    }
    cout<<v[j]<<"\n";
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
