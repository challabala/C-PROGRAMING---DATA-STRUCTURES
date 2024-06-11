#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push();
void pop();
void display();
void peek();
struct node *top = NULL;
void main()
{
    printf(":::: Stack implementation using linked list ::::");
    int choice;
    while (1)
    {
        printf("\nChoose your option\n");
        printf("1.Push()\n");
        printf("2.Pop()\n");
        printf("3.Display()\n");
        printf("4.Peek()\n");
        printf("5.Exit()\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        }
    }
}

/*Push Operation
-Algorithm
1.Create a new node.
2.Assign the data to the new node.
3.Point the new node’s next to the current top.
4.Update the top to point to the new node.*/

void push()
{
    int value;
    printf("Enter the value:");
    scanf("%d", &value);

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = top;
    top = temp;
    printf("%d pushed successfully...", value);
}

/*Pop Operation
-Algorithm
1.Check if the stack is empty.
2.If not, update the top to the next node.
3.Free the memory of the original top node*/

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty...\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        int t = top->data;
        temp = top;
        top = top->next;
        free(temp);
        printf("%d  is Poped successfully...", t);
    }
}

/*Display the Stack
-Algorithm
1.Check if the stack is empty.
2.If not,Traverse the stack from top to bottom.
3.Print each node’s data.
*/

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty...\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp = top;
        printf("Stack elements :\n");
        while (top != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

/*Peek Operation
-Algorithm
1.Check if the stack is empty.
2.If not, print the data of the top node.*/

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty...");
    }
    else
    {
        printf("Peek element is : %d ", top->data);
    }
}
/*:::: Stack implementation using linked list ::::
Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 1
Enter the value:10
10 pushed successfully...

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 1
Enter the value:20
20 pushed successfully...

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 1 
Enter the value:30
30 pushed successfully...

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 1
Enter the value:40
40 pushed successfully...

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 4
Peek element is : 40

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 2
40  is Poped successfully...

Choose your option
1.Push()
2.Pop()
3.Display()
4.Peek()
5.Exit()
Enter your choice : 3
Stack elements :
30
20
10
*/
