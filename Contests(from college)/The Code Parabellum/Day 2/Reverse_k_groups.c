#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int m=0;
    for(int i=0;i<n;i++){
        if((i!=0 && (i+1)%k==0)||((i+1)==n)){
            int x=i;
            while(x>=m){
                printf("%d\n",arr[x]);
                x--;
            }
            m=i+1;
        }
    }
    return 0;
}
