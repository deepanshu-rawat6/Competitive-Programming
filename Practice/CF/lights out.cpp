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
    int i11,i12,i13,i21,i22,i23,i31,i32,i33;
    cin>>i11>>i12>>i13>>i21>>i22>>i23>>i31>>i32>>i33;
    cout<<((i11+i12+i21)%2==0?"1":"0")<<((i11+i12+i13+i22)%2==0?"1":"0")<<((i13+i12+i23)%2==0?"1":"0")<<"\n";
    cout<<((i11+i31+i21+i22)%2==0?"1":"0")<<((i21+i12+i22+i23+i32)%2==0?"1":"0")<<((i13+i23+i22+i33)%2==0?"1":"0")<<"\n";
    cout<<((i31+i21+i32)%2==0?"1":"0")<<((i31+i32+i33+i22)%2==0?"1":"0")<<((i33+i32+i23)%2==0?"1":"0")<<"\n";
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
