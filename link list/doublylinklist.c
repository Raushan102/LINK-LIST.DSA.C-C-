#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pev;
};
void first(struct node **head, int newdata)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = NULL;
    newnode->pev = NULL;
    if (*head != NULL)
    {
        newnode->next = *head;
        (*head)->pev = newnode;
    }
    *head = newnode;
}
void insertatmiddel(struct node **head, int data, int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (*head == NULL)
    {
        printf("key not present in link list");
        return;
    }
    else
    {
        struct node *temp = *head;
        while (temp->data != key)
        {

            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            newnode->next = temp->next;
            temp->next = newnode;
            newnode->pev = temp;
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
            newnode->pev = temp;
            newnode->next->pev = newnode;
        }
    }
}

void last(struct node **head, int newdata)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    if (*head == NULL)
    {
       newnode->next=NULL;
       newnode->pev=NULL;
       *head=newnode;
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->next = NULL;
        temp->next = newnode;
        newnode->pev = temp;
    }
}
void display(struct node *head)
{
    struct node *temp;
    while (head != NULL)
    {
        printf("%d\t ", head->data);
        temp = head;
        head = head->next;
    }
}
int main()
{
    struct node *head = NULL;
   first(&head, 100);
    first(&head, 200);
     first(&head, 200);
    insertatmiddel(&head, 56, 100);
    last(&head, 1000);
    display(head);

    return 0;
}