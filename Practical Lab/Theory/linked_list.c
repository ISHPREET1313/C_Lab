#include<stdio.h>
#include<stdlib.h>

struct Node* createNode(int);
void traverse_list(struct Node*);
struct Node* add_front(struct Node*,int);
void add_to_back(struct Node *,struct Node*);
void del_at_back(struct Node*head);

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node *head=createNode(4);
    struct Node*newNode=add_front(head,5);
    head=newNode;
    struct Node *newNode1=createNode(3);
    add_to_back(head,newNode1);
    traverse_list(head);
    del_at_back(head);
    printf("\n");
    traverse_list(head);
    return 0;
}

struct Node* createNode(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

void traverse_list(struct Node*head){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}

struct Node* add_front(struct Node* head,int value){
    struct Node* newNode=createNode(value);
    newNode->next=head;
    return newNode;
}

void add_to_back(struct Node *head,struct Node* newNode){
    struct Node*temp=head;
    while(1){
        if(temp->next==NULL){
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
}

void del_at_back(struct Node*head){
    struct Node*temp=head;
    struct Node*prev;
    while (temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}