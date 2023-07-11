#include<iostream>
using namespace std;
struct node{
    int data;
    node *pev;
    node* next;

};

void push(node **head,int newdata){

    node *newnode=new node();
    newnode->data=newdata;
    newnode->next=*head;
    newnode->pev=NULL;

    if(*head!=NULL){
        (*head)->pev=newnode;
    }
    *head=newnode;

}
 void display(node *head){
    node *end;
    while(head!=NULL){
        cout<<head->data<<" ";
        end=head;
        head=head->next;
        
    }

    cout<<"move fackword";
    while(end!=NULL){
        cout<<end->data<<" ";
        end=end->pev;
    }
}

int main() {
  node *head=NULL;
  push(&head,89); 
  push(&head,90);
  push(&head,91);

  display(head);
    return 0;
}