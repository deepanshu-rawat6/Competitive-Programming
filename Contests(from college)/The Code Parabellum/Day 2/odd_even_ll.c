#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void push(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void display(){
    int i=0,k=0,m=0;
    int odd[10];
    int even[10];
    struct Node* temp=head;
    if(head==NULL){
        return;
    }else{
        while(temp!=NULL){
            if((i&1)==0){
                odd[k]=temp->data;
                k++;
            }else{
                even[m]=temp->data;
                m++;
            }
            temp=temp->next;
            i++;
        }
    }
    for(int i=k-1;i>=0;i--){
        printf("%d\n",odd[i]);
    }
    for(int i=m-1;i>=0;i--){
        printf("%d\n",even[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        push(x);
    }
    display();
    return 0;
}