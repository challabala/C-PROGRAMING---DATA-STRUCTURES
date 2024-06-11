#include <stdio.h>
#include <stdlib.h>
#define size 10

void push();
void pop();
void peek();
void display();
int stack[size];
int top = -1;
void main()
{
    int stack[size];
    int top = -1;
    printf("###### Stack Implimentation #######\n");
    while (1)
    {
        int option;
        printf("1.Push...2.Pop...3.Peek...4.Display....5.Break...\n");
        printf("Enter your operation :");
        scanf("%d", &option);
        if (option == 1)
            push();
        else if (option == 2)
            pop();
        else if (option == 3)

            peek();
        else if (option == 4)
            display();
        else
            break;
    }
}
void push()
{
    if (top == size - 1)
    {
        printf("Stack is full!!!!\n");
    }
    else
    {
        int value;
        printf("Enter the value:");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Value pushed successfully...\n");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty....\n");
    }
    else
    {
        top--;
        printf("%d value poped successfully....\n", top);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty....\n");
    }
    else
    {
        printf("%d\n", stack[top]);
        printf("peek value printed successfully....\n");
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d \n", stack[i]);
    }
    printf("Displayed successfully...");
}
