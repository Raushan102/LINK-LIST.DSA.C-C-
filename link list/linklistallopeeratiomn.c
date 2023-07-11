#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertatfirst(struct node **head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (*head == NULL)
    {
        newnode->data = data;
        newnode->next = NULL;
        *head = newnode;
    }
    else
    {
        newnode->data = data;
        newnode->next = *head;
        *head = newnode;
    }
  
}
void insertatmiddel(struct node **head, int newdata, int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    if (*head == NULL)
    {
        newnode->next = NULL;
        *head = newnode;
        return;
    }
    struct node *temp = *head;

    while (temp->data != key)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newnode;
        newnode->next = NULL;
    }
    else
        newnode->next = temp->next;
    temp->next = newnode;
  
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d \t", head->data);
        head = head->next;
    }
}
void insertatlast(struct node **head, int newdata)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = NULL;

    if (*head == NULL)
    {

        *head = newnode;
        return;
    }
    struct node *ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
 
}
void deletenode(struct node *head, int newdata)
{
    if (head == NULL)
    {
        printf("deleteion not possible because element are not present in link list");
        return;
    }
    struct node *temp;
    struct node *ptr = head;
    while (ptr->data != newdata)
    {
        temp=ptr;
        ptr = ptr->next;
    }
    
   temp->next=ptr->next;


}
void deletebypos(struct node *head,int newdata){
    struct node *temp;
    for( int i=1;i!=newdata;i++)
    {
        temp=head;
        head=head->next;
    }
    temp->next=head->next;
}



int main()
{
    struct node *head = NULL;

    insertatfirst(&head, 45);
    insertatfirst(&head, 46);
    insertatfirst(&head, 47);
    insertatmiddel(&head, 100, 46);
    insertatmiddel(&head, 200, 100);
    insertatlast(&head, 300);
    insertatlast(&head, 500);
    insertatlast(&head, 900);
  deletenode(head,300);
  display(head);
  deletebypos(head,3);
    display(head);
    return 0;
}