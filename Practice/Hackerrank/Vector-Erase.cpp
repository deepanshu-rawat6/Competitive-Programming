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
    int er;
    int er1,er2;
    cin>>er>>er1>>er2;
    v.erase(v.begin()+er-1); 
    v.erase(v.begin()+er1-1,v.begin()+er2-1);
    cout<<v.size()<<"\n";
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
