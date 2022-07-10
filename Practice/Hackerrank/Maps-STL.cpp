#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;i++){
        int type;
        string x;
        int y;
        cin>>type>>x;
        if(type==1){
            cin>>y;
            m[x]+=y;
        }else if(type==2){
            m.erase(x);
        }else{
           cout<<m[x]<<"\n";
        }
    }
    return 0;
}
