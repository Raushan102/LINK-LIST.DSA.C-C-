#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void push(node **head, int newdata)
{
    node *newnode = new node(newdata);

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {

        newnode->next = *head;
        *head = newnode;
    }
}
void insert_at_middel(node **head, int newdata, int key)
{
    node *newnode = new node(newdata);

    if (head == NULL)
    {
        *head = newnode;
        return;
    }
    node *temp = *head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_at_last(node **head, int newdata)
{
    node *newnode = new node(newdata);
    if (*head == NULL)
    {
        *head = newnode;
    }
    node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void deletenode(node *head, int key)
{
    if (head == NULL)
    {
        cout << "no element in likist";
        return;
    }
    node *ptr = 0;
    node *temp = head;
    while (temp->data != key)
    {
        ptr = temp;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        ptr->next = NULL;
        return;
    }
    else
    {

        ptr->next = temp->next;
    }
    node *delete1 = temp;

    delete delete1;
}
void insertatposition(node *head, int key2)
{
    if (head == NULL)
    {
        cout << "empty is linklist ";
    }
    node *temp = head;
    node *ptr = 0;
    int i = 1;
    while (i != key2)
    {
        i++;
        ptr = temp;
        temp = temp->next;
    }
    node *delete2 = temp;
    if (temp->next = NULL)
    {
        ptr->next = NULL;
        return;
    }
    else
    {

        ptr->next = temp->next;
    }
    delete delete2;
}
void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 34);
    insert_at_middel(&head, 2653, 1);
    insert_at_last(&head, 2364);

    insertatposition(head, 4);
    display(head);

    deletenode(head, 3);

    return 0;
}