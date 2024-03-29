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
int GCD(int a,int b){
    if(a==0) return b;
    return GCD(b%a,a);
}
int LCM(int a,int b){
    return a*b/GCD(a,b);
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v2(m);
    int temp=1;
    int c=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp=LCM(temp,x);
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    while(temp<=v2[0]){
        bool val=true;
        for(int i:v2){
            if(i%temp==0){
                val=false;
                break;
            }
        }
        if(val) c++;
        temp+=temp;
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
