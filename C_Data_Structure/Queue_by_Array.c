#include <stdio.h>
#include <stdlib.h>
#define size 10

void enqueue();
void dequeqe();
void peek();
void display();
int queue[size];
int rear = -1;
int front = -1;
void main()
{
    int queue[size];
    int top = -1;
    printf("###### Queue Implimentation #######\n");
    while (1)
    {
        int option;
        printf("1.Enqueue...2.Dequeue....3.Peek...4.Display....5.Break....\n");
        printf("Enter your operation :");
        scanf("%d", &option);
        if (option == 1)
            enqueue();
        else if (option == 2)
            dequeqe();
        else if (option == 3)

            peek();
        else if (option == 4)
            display();
        else
            break;
    }
}
void enqueue()
{
    if (front == size - 1)
    {
        printf("Queue is full..\n");
    }
    else
    {
        int data;
        printf("Enter the data:");
        scanf("%d",&data);
        if(front ==-1)
        front =0;
        rear++;
        queue[rear]=data;
        printf("data enqued successfully...\n");
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("Queue is empty...\n");
    }
    else{
        front++;
        printf("data dequed successfully...\n");
    }
}
void peek(){
    if(front==-1||front>rear){
        printf("Queue is empty...\n");
    }
    else{
        printf("peek data is : %d",queue[front]);
    }
}
void display(){
    printf("queue elements:");
    for(int i=front;i<=rear;i++){
        printf("%d\n:",queue[i]);
    }
}