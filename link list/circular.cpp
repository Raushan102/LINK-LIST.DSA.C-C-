#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{

    int data;
    node *next;
};
void printlist(node *head)
{
    node *ptr = head;

    do
    {

        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}
node *insertatfirst(node *head, int data)
{

    node *ptr = (node *)malloc(sizeof(node *));
    ptr->data = data;
    node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return (head);
}
node *insertattail(node *head, int data)
{

    node *six = (node *)malloc(sizeof(node *));

    six->data = data;
    node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next=six;
    six->next=head;

    return (head);
}
node *insertatmiddel(node *third,int newdata){

    node* sev=(node *)malloc(sizeof(node *));
    sev->data=newdata;
    sev->next=third->next;
    third->next=sev;

return (third);

}

int main()
{

    node *first = (node *)malloc(sizeof(node *));
    node *second = (node *)malloc(sizeof(node *));
    node *third = (node *)malloc(sizeof(node *));
    node *fourth = (node *)malloc(sizeof(node *));
    node *head = first;

    first->data = 74;
    first->next = second;

    second->data = 76;
    second->next = third;

    third->data = 78;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = head;
    head = insertatfirst(head, 72);

    insertattail(head, 82);
   third= insertatmiddel(third, 100);

    printlist(head);

    return 0;
}