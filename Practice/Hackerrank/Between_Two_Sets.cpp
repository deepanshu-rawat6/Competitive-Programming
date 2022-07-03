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
int cal_lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
int seq_gcd(int a[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(i==0){
            ans.pb(a[i]);
        }
        int x=gcd(a[i-1],a[i]);
        ans.pb(x);
    }
    return ans[ans.size()-1];
}
int seq_lcm(int b[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(i==0){
            ans.pb(b[i]);
        }
        int x=(b[i-1]*b[i])/gcd(b[i-1],b[i]);
        ans.pb(x);
    }
    return ans[ans.size()-1];
}
void solve(){
    int n,m,c=0;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n+m;i++){
        if(i<n){
            cin>>a[i];
        }else{
            cin>>b[i];
        }
    }
    int lcm=seq_lcm(b,m);
    int gcd=seq_gcd(a,n);
    for(int i=lcm;i<=gcd;i++){
        if(gcd%i==0){
            c++;
        }
    }
    cout<<c<<"\n";
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
