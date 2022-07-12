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
int up(int x){
    if(x==9){
        x=0;
    }else{
        x++;
    }
    return x;
}
int down(int x){
    if(x==0){
        x=9;
    }else{
        x--;
    }
    return x;
}
void solve(){
    int  n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.pb(x);
    }
    for(int i=0;i<n;i++){
        int a;
        string str;
        cin>>a>>str;
        for(auto j:str){
            if(j=='D'){
                ans[i]=up(ans[i]);
            }else{
                ans[i]=down(ans[i]);
            }
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";
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
