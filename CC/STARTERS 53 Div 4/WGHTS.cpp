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
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
void solve(){
    int w,x,y,z;
    cin>>w;
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int sum=arr[0]+arr[1]+arr[2];
    if(arr[0]==w||arr[1]==w||arr[2]==w){
        cout<<"YES"<<"\n";
    }
    else if(arr[0]+arr[1]==w||arr[0]+arr[2]==w||arr[1]+arr[2]==w){
        cout<<"YES"<<"\n";
    }else if(sum==w){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
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
