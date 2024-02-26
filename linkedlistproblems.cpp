#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int data;
    struct node* next;
};

void insertAtTail(struct node* &head,struct node* &tail,int d){
    struct node* temp=new node;
    temp->data=d;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
        tail->next=head;
        return;
    }
    tail->next=temp;
    tail=temp;
    tail->next=head;
}

void print(struct node*&head){
    struct node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    struct node* head=NULL;
    struct node* tail=NULL;
    insertAtTail(head,tail,10);
    print(head);
    insertAtTail(head,tail,20);
    print(head);
    insertAtTail(head,tail,30);
    print(head);
    insertAtTail(head,tail,40);
    print(head);
    insertAtTail(head,tail,50);
    print(head);
    insertAtTail(head,tail,60);
    print(head);
    return 0;
}