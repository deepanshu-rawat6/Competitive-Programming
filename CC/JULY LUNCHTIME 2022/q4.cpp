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
    int x;
    string st;
    int c=0;
    cin>>x>>st;
    if(x<4){
        cout<<"YES"<<"\n";
        return;
    }else{
        for(int i=0;i<x;i++){
            if(i+4<=x){
                break;
            }
            string str=st.substr(i,i+4);
            c=0;
            for(int j=0;j<4;j++){
                if(str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u'){
                    c++;
                }
                if(c>=4){
                    cout<<"NO"<<"\n";
                    return;
                }
            }
        }
    }
    cout<<"YES"<<"\n";
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

// WA on Test Case 3 and 4, will improve the solition
