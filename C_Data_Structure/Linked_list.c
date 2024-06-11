#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create();
void display();
void insertatbegining();
void addend();
void addrp();
void delreq();
struct node *nn, *st = NULL, *te, *cu, *p;
void main()
{
    int a, b;
    do
    {
        printf("\nChoose your option\n");
        printf("1. Create node\n");
        printf("2. Display list\n");
        printf("3.Add begin  \n");
        printf("4.Add end\n");
        printf("5.Add req position\n");
        printf("6.Del req.");
        printf("7.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            create();
            break;
        case 2:
            display();
        case 3:
            insertatbegining();
            break;
        case 4:
            addend();
            break;
        case 5:
            addrp();
            break;
        case 6:
            exit(0);
        }
        printf("\nDo u want continue '1'  not '0':");
        scanf("%d", &b);
    } while (b != 0);
}
void create()
{
    int x;
    do
    {
        nn = (struct node *)malloc(sizeof(struct node));
        printf("Enter data into node: ");
        scanf("%d", &nn->data);
        nn->next = NULL;
        if (st == NULL)
        {
            st = nn;
            cu = nn;
        }
        else
        {
            cu->next = nn;
            cu = nn;
        }
        printf("Proceed-1  0-stop : ");
        scanf("%d", &x);
    } while (x != 0);
}
void display()
{

    if (st == NULL)
    {
        printf("List is empty:");
    }
    else
    {
        te = st;
        printf("Elements of list: ");
        while (te != NULL)
        {
            printf("%d ", te->data);
            te = te->next;
        }
    }
}
void insertatbegining()
{
    nn = (struct node *)malloc(sizeof(struct node));
    printf("Enter data into node: ");
    scanf("%d", &nn->data);
    if (st == NULL)
    {
        st = nn;
        st->next = NULL;
    }
    else
    {
        nn->next = st;
        st = nn;
    }
    display();
}
void addend()
{
    nn = (struct node *)malloc(sizeof(struct node));
    printf("Enter data into node: ");
    scanf("%d", &nn->data);
    nn->next = NULL;
    if (st == NULL)
    {
        st = nn;
        st->next = NULL;
    }
    else
    {
        cu->next = nn;
        cu = nn;
        // cu->next=st;
    }
    display();
}
int count()
{
    int c = 1;
    te = st;
    while (te != NULL)
    {
        te = te->next;
        c++;
    }
    return c;
}
void addrp()
{
    int pos;
    nn = (struct node *)malloc(sizeof(struct node));
    printf("Enter data into node:");
    scanf("%d", &nn->data);
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    cu = st;
    if (pos > count() || pos <= 0)
    {
        printf("Invalid position ");
    }
    else if (pos == 1)
    {
        insertatbegining();
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            p = cu;
            cu = cu->next;
        }
        p->next = nn;
        nn->next = cu;
    }
    display();
}
void delreq(){
    
}