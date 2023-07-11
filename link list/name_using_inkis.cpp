#include <iostream>
using namespace std;
struct node
{
    char data;
    struct node *next;
};
void insert_node_at_first(struct node **head, char data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;

    if (*head == NULL)
    {
        newnode->next = NULL;
        *head = newnode;
    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}
void display(struct node **head)
{
    if (*head == NULL)
    {
        cout << "insertion not possible";
    }
    else
    {
        struct node *temp = *head;

        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }
}
int main()
{
    struct node *head = NULL;
    char R, A, U, S, H, N;
    insert_node_at_first(&head, R);
    insert_node_at_first(&head, A);
    insert_node_at_first(&head, U);
    insert_node_at_first(&head, S);
    insert_node_at_first(&head, H);
    insert_node_at_first(&head, A);
    insert_node_at_first(&head, N);
    display(&head);

    return 0;
}