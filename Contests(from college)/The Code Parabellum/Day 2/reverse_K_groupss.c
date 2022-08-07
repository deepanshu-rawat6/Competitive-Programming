#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head = NULL;

void addNode(int n){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = n;
    newNode->next = NULL;
    if(head != NULL){
        struct Node *ptr  = head;
        while(ptr!=NULL && ptr->next!=NULL){
            ptr = ptr->next;    
        }
        ptr->next = newNode;
    }
    else{
        head = newNode;
    }
}

void display(){
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}    

struct Node* reverse (struct Node *ptr, int k){
    if (!ptr)
        return NULL;
    
    struct Node* current = ptr;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;
    
    
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
    ptr->next = reverse(next, k);

    return prev;
}

int main(){
    int n, k;
    scanf("%d", &n);
    int ar[n];
    for(int x=0; x<n; x++){
        scanf("%d", &ar[x]);
    }
    scanf("%d", &k);
    
    for(int x=0; x<n; x++){
        addNode(ar[x]);
    }
    head = reverse(head, k);
    display();

    return 0;
}