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
long long int arr[65];
void solve(){
    ll c=0;
    ll n;
    cin>>n;
    while(n!=1){
        for(int i=0;i<65;i++){
            int temp=n-arr[i];
            if(temp<0){
                n=n-arr[i-1];
                break;
            }else if(temp==0){
                n=n/2;
                break;
            }
        }
        c++;
    }
    if(c%2==0) cout<<"Richard"<<"\n";
    else cout<<"Louise"<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    arr[0]=1;
    for(int i=1;i<65;i++){
        arr[i]=arr[i-1]*2;
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// Only 9/18 cases are running will think of an optimised solution
