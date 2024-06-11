#include <stdio.h>
#include <stdlib.h>

void addbegin();
void addend();

struct node
{
    int data;
    struct node *prev, *next;
};
struct node *head=NULL;
struct node *tail=NULL;

void main()
{
    int a;
    printf("Double Lnked list implementaions.");
    do
    {
        while (1)
        {
            printf("1.addbegin.\n");
            printf("2.addend.\n");
            int operation;
            printf("Enter your operation.\n");
            scanf("%d", &operation);
            switch (operation)
            {
            case 1:
                addbegin();
                break;
            case 2:
                addend();
                break;
            case 3:
                display();
                break;

                default:
                break;
            }
            printf("Do you repeat 1 or 0:");
            scanf("%d", &a);
        }
        printf("Do you continue 0 or 1:");
        scanf("%d", &a);
    } while (a != 6);
}
void addbegin()
{
    int data;
    printf("Enter the new data add to be begin :");
    scanf("%d",&data);
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    newnode->prev=NULL;
    if(head!=NULL){
        head->prev=newnode;
    } 
    else{
        
    }
}