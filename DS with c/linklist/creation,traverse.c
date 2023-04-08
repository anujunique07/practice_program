#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
} node;

node *start, *temp, *current;
void create();
void traverse();
int main()
{
    int ch;
    start = NULL;
    while (1)
    {
        printf("1.creation\n");
        printf("2.traverse\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            exit(0);
            break;
        default:
            exit(0);
        }
    }
}
void create()
{
    temp = (node *)malloc(sizeof(node));
    if (start == NULL)
    {
        start = temp;
        current = temp;
    }
    else
    {
        current->next = temp;
        current = temp;
    }
    printf("enter any data:");
    scanf("%d", &current->data);
    current->next = NULL;
}

void traverse()
{
    if (start == NULL)
    {
        printf("No data to display.\n");
        return;
    }
    printf("Displaying the data:\n");
    for (temp = start; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->data);
    }
    printf("\n");
}