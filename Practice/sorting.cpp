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
    

}
void merge_in_place(int arr[], int s, int m, int e){
        int mix[e-s];
        int i=s,j=m,k=0;
        while(i<m && j<e){
            if(arr[i]<arr[j]){
                mix[k]=arr[i];
                i++;
            }else{
                mix[k]=arr[j];
                j++;
            }
            k++;
        }
//        it may be possible that some elements of either arrays are left out, so we need to add then into the mix array
        while(i<m){
            mix[k]=arr[i];
            i++;
            k++;
        }
        while(j<e){
            mix[k]=arr[j];
            j++;
            k++;
        }

        for (int l=0;l<k;l++){
            arr[s+l]=mix[l];
        }
}
void sort_in_place(int arr[],int s,int e){
        if(e-s ==1){
            return;
        }
        int mid=s+(e-s)/2;
        sort_in_place(arr,0,mid);
        sort_in_place(arr,mid,e);
        merge_in_place(arr,s,mid,e);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    int arr[]={10,9,8,7,6,5};
    sort_in_place(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
