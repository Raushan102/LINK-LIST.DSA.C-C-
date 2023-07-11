#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertatfirst(node **head, int val)
{
    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = val;

    if (head == NULL)
    {

        *head = newnode;
        newnode->next = *head;
    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}
void display(node *head)
{
    do
    {
        cout << head->data << '\t';
        head = head->next;

    } while (head->next != head);
}
void insertatlast(node **head, int data, int key)
{
    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = data;
    node *ptr = *head;

    while (ptr->data != key)
    {
        ptr = ptr->next;
    }

    newnode->next = ptr->next;
    ptr->next = newnode;
}
void insertatmiddel(node **head, int data)
{
    node *newnode = (node *)malloc(sizeof(node *));
    newnode->data = data;
    node *ptr = *head;
    while (ptr->next != *head)
    {
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}

int main()
{
    node *head = NULL;
    insertatfirst(&head, 12);
    insertatfirst(&head, 15);
    insertatfirst(&head, 17);
    insertatlast(&head, 23, 18);
    insertatmiddel(&head,78);
    display(head);

    return 0;
}