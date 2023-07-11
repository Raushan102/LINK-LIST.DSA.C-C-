#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void push(node **head, int newdata)
{

    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
}
void insertatmiddel(node *current, int newdata)
{

    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = current->next;
    current->next = newnode;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void insertatmidderl(node *nodesecond, int newdata)
{

    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = nodesecond->next;
    nodesecond->next = newnode;
}
node *insertattail(node *head, int newdata)
{
    node *p = head;
    node *newnode = new node();
    while (p->next != NULL)
    {

        p = p->next;
    }
    p->next = newnode;
    newnode->data = newdata;

    newnode->next = NULL;
}

void deletenode(node *head, int key)
{

    node *temp = head;
    while (temp->next->data != key)
    {

        temp = temp->next;
    }
    node *delete1 = temp->next;

    temp->next = temp->next->next;
    delete delete1;
}
    int main()

    {

        node *first = new node();
        node *second = new node();
        node *third = new node();
        node *fourth = new node();

        node *head = first;

        first->data = 1;
        first->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = fourth;

        fourth->data = 4;
        fourth->next = NULL;

        push(&head, 8);
        insertatmiddel(second, 100);

        insertattail(head, 2000);

        deletenode(head, 4);

        display(head);
        return 0;
    }