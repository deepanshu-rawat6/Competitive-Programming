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
    struct Node* temp=head;
    if(head==NULL){
        return;
    }else{
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("\n");
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