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