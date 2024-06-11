#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function prototypes
void insertAtBeginning();
void insertAtEnd();
void insertAfterNode();
void deleteFromBeginning();
void deleteFromEnd();
void deleteSpecificNode();
void searchNode();
void getListLength();
void reverseList();
void printList();

// Global head pointer
struct Node *head = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After Node\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete Specific Node\n");
        printf("7. Search Node\n");
        printf("8. Get List Length\n");
        printf("9. Reverse List\n");
        printf("10. Print List\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertAtBeginning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAfterNode();
            break;
        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            deleteSpecificNode();
            break;
        case 7:
            searchNode();
            break;
        case 8:
            getListLength();
            break;
        case 9:
            reverseList();
            break;
        case 10:
            printList();
            break;
        case 11:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
/*
1.Insert at the Beginning

-Create a new node.
-Point the new node's next to the current head.
-Update the head to point to the new node.
*/

void insertAtBeginning()
{
    int data;
    printf("Enter data to insert: ");
    scanf("%d", &data);

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;

    printf("Node inserted at the beginning.\n");
}
/*
2.Insert at the End

-Create a new node.
-Traverse to the end of the list.
-Point the last node's next to the new node.
*/
void insertAtEnd()
{
    int data;
    printf("Enter data to insert: ");
    scanf("%d", &data);

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    printf("Node inserted at the end.\n");
}
/*
3.Insert After a Specific Node

-Create a new node.
-Find the specific node.
-Point the new node's next to the specific node's next.
-Update the specific node's next to point to the new node.
*/
void insertAfterNode()
{
    int data, key;
    printf("Enter data to insert: ");
    scanf("%d", &data);
    printf("Enter the node data after which to insert: ");
    scanf("%d", &key);

    struct Node *temp = head;
    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node with data %d not found.\n", key);
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;

    printf("Node inserted after node with data %d.\n", key);
}
/*
4.Delete from the Beginning

-Check if the list is empty.
-If not, point the head to the next node of the current head.
-Free the memory of the old head.
*/
void deleteFromBeginning()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);

    printf("Node deleted from the beginning.\n");
}
/*
5.Delete from the End

-Check if the list is empty.
-Traverse to the second last node.
-Free the memory of the last node.
-Update the second last node's next to NULL.
*/
void deleteFromEnd()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

    printf("Node deleted from the end.\n");
}
/*
6.Delete a Specific Node

-Find the node to be deleted.
-Point the previous node's next to the node to be deleted's next.
-Free the memory of the node to be deleted.
*/
void deleteSpecificNode()
{
    int key;
    printf("Enter the node data to delete: ");
    scanf("%d", &key);

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->data == key)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Node with data %d deleted.\n", key);
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL && temp->next->data != key)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        printf("Node with data %d not found.\n", key);
        return;
    }

    struct Node *del_node = temp->next;
    temp->next = temp->next->next;
    free(del_node);

    printf("Node with data %d deleted.\n", key);
}
/*
7.Search for a Node

-Traverse the list.
-Check if any node's data matches the key.
*/
void searchNode()
{
    int key;
    printf("Enter the node data to search: ");
    scanf("%d", &key);

    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("Node with data %d found.\n", key);
            return;
        }
        temp = temp->next;
    }

    printf("Node with data %d not found.\n", key);
}
/*
8.Get the Length of the List

-Initialize a counter.
-Traverse the list and increment the counter for each node.
*/
void getListLength()
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Length of the list: %d\n", count);
}
/*
9.Reverse the List

-Initialize three pointers: previous, current, and next.
-Traverse the list and reverse the links.
*/
void reverseList()
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
    printf("List reversed.\n");
}
/*
10.Print the List

-Traverse the list.
-Print each node's data.
*/
void printList()
{
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
