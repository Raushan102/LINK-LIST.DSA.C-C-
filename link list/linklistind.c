#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};
void insert_at_first(struct node **head, int newdata)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (*head == NULL)
    {
        newnode->data = newdata;
        newnode->next = NULL;
        (*head) = newnode;
        return;
    }
    else
    {

        newnode->data = newdata;
        newnode->next = (*head);
        (*head) = newnode;
    }
}
void insert_at_middel(struct node **head, int newdata, int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;

    if (*head == NULL)
    {
        printf("insert not possible");
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
            temp->next = newnode;
            newnode->next = NULL;
        }
        else if (temp->next != NULL)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else
        {
            printf("element not in the list");
        }
    }
}
void insert_at_last(struct node **head, int newdata)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = NULL;
    if (*head == NULL)
    {

        *head = newnode;
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display(struct node *node)
{

    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
void delete_by_key(struct node *head, int key)
{
    if (head == NULL)
    {
        printf("delation not possible");
        return;
    }

    struct node *temp = NULL;
    struct node *ptr = head;
    while (ptr->data != key)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    printf("%d", temp->data);
}

int main()
{

    struct node *head = NULL;

    insert_at_first(&head, 10);
    insert_at_first(&head, 20);
    insert_at_first(&head, 30);
    insert_at_middel(&head, 50, 10);
    insert_at_last(&head, 25);
    delete_by_key(head, 30);

    display(head);
    return 0;
}