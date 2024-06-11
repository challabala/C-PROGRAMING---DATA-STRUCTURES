#include <stdio.h>
#include <stdlib.h>
void insert();
void delete();
void search();
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
void main()
{
    printf(":::::: TREE IMPLEMENTATION ::::::\n");
    int choice;
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.search\n");
        printf("4.Exit\n");
        printf("Eneter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(0);
        }
    }
}
void insert()
{
    int value;
    printf("Enter the data:");
    scanf("%d", &value);

    struct node *temp = (struct nede *)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *current = root;
        struct node *parent;
        while (current != NULL)
        {
            parent = root;
            if (value < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
        if (value < parent->data)
        {
            parent->left = temp;
        }
        else
        {
            parent->right = temp;
        }
    }
}
void delete()
{
}
void search()
{
    int value;
    printf("Enter the data:");
    scanf("%d", &value);

    struct node *temp = root;
    while (temp != NULL)
    {
        if (value == temp->data)
        {
            printf("%d data found\n", value);
            break;
        }
        else if (value < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    printf("%d is not found.", value);
}