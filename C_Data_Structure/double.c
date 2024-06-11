#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node *Nodeptr;
Nodeptr head=NULL;
Nodeptr tail=NULL;
int is_empty()
{
    return head==NULL;
    return tail==NULL;
}
void insert_at_back(int value)
{
    Nodeptr newnode=malloc(sizeof(Nodeptr));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(is_empty())
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void delete_at_specific(int key)
{
    if(is_empty())
    {
        printf("list is empty");
    }
    else
    {
        Nodeptr curr=head;
        while(curr!=NULL && curr->data!=key)
        {
            curr=curr->next;
        }
        if(curr==NULL)
        {
            printf("key is not found");
        }
        else if(curr->next==NULL)
        {
            free(curr);
        }
        else
        {
            Nodeptr temp1=curr->next;
            Nodeptr temp=curr->prev;
            curr->next=NULL;
            curr->prev=NULL;
            free(curr);
            temp->next=temp1;
            temp1->prev=temp;
            
        }
    }
}
void display()
{
    Nodeptr curr=head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}
int main()
{
    insert_at_back(10);
    insert_at_back(20);
    insert_at_back(30);

    delete_at_specific(20);
    display();
}
/* ***** OUTPUT ******
 10 30
*/