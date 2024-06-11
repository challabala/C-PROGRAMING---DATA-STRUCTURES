#include <stdio.h>
#include <stdlib.h>

// Define the structure for a queue node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes for queue operations
void enqueue();
void dequeue();
void peek();
void displayQueue();
void length();

// Global front and rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;
int main() {
    int choice;
    printf(":::::: QUEUE IMPLEMENTATION ::::::");
    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display Queue\n");
        printf("5. Length\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                displayQueue();
                break;
            case 5:
                length();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
/*Enqueue Operation
-Algorithm
1.Create a new node.
2.Assign the data to the new node.
3.Set the new node's next pointer to NULL.
4.If the queue is empty, set both front and rear to the new node.
5.Otherwise, set the current rear's next to the new node and update the rear to the new node.
*/
void enqueue() {
    int data;
    printf("Enter data to enqueue: ");
    scanf("%d", &data);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d enqueued to queue.\n", data);
}
/*Dequeue Operation
-Algorithm
1.Check if the queue is empty.
2.If not, save the front node's data.
3.Update the front to the next node.
4.Free the memory of the original front node.
5.If the front becomes NULL, set the rear to NULL as well.
6.Print the dequeued data.
*/
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    printf("%d dequeued from queue.\n", temp->data);
    free(temp);
}
/*Peek Operation
-Algorithm
1.Check if the queue is empty.
2.If not, print the data of the front node.
*/
void peek() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element is: %d\n", front->data);
}
/*Length Operation
-Algorithm
1.Initialize a counter to 0.
2.Traverse the queue from front to rear.
3.Increment the counter for each node.
4.Print the counter value.
*/
void length() {
    int count = 0;
    struct Node* temp = front;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Queue length: %d\n", count);
}
/*Display the Queue
-Algorithm
1.Traverse the queue from front to rear.
2.Print each node’s data.
*/
void displayQueue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
/*:::::: QUEUE IMPLEMENTATION ::::::
Menu:
1. Enqueue
2. Dequeue
3. Peek
4. Display Queue
5. Length
6. Exit
Enter your choice: 1
Enter data to enqueue: 10
10 enqueued to queue.

Enter your choice: 1
Enter data to enqueue: 20
20 enqueued to queue.

Enter your choice: 1
Enter data to enqueue: 30
30 enqueued to queue.

Enter your choice: 1
Enter data to enqueue: 40
40 enqueued to queue.

Enter your choice: 3
Front element is: 10

Enter your choice: 5
Queue length: 4

Enter your choice: 2
10 dequeued from queue.

Enter your choice: 4
20 -> 30 -> 40 -> NULL

Enter your choice: 6
Exit
*/