#include <iostream>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head, node val)
    {
        node *n=new node(val);
        if(head==NULL)
        {
            head=n;
            return;
        }
    
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    
node *reverse(node *&head){
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head=NULL;
    insertattail(head,1);
    insertattail(head,4);
    insertattail(head,3);
    insertattail(head,5);

    display(head);
    node *newhead=reverse(head);
    display(newhead);
    return 0;
    
}










