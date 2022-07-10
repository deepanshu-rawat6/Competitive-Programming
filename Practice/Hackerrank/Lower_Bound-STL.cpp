#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    } 
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int q1;
        cin>>q1;
        vector<int>::iterator lower;
        lower=lower_bound(v.begin(),v.end(),q1);
        if(v[lower-v.begin()]==q1){
            cout<<"Yes "<<(lower-v.begin()+1)<<"\n";
        }else{
            cout<<"No "<<(lower-v.begin()+1)<<"\n";
        }
    }
    return 0;
}
