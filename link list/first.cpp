#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void printlist(node *n)
{

    while (n != 0)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
node *insertion(node *adress)
{

    node *six = new node();
    six->data = 8;
    six->next = adress;
    adress = six;

    return (adress);
}

int main()
{

    struct node *head;

    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    head = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = fifth;

    fifth->data = 7;
    fifth->next = NULL;

    printlist(head);
     insertion(head);

    return 0;
}