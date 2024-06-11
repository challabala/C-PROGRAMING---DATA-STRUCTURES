#include <stdio.h>
#include <stdlib.h>

void append();
void printList();
void selectionSort();

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        append();
    }

    printf("Unsorted list: ");
    printList();

    selectionSort();

    printf("Sorted list: ");
    printList();

    return 0;
}
// Function to insert a node at the end of the linked list
void append()
{
    int new_data;
    scanf("%d", &new_data);

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = head;

    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
}

// Function to print the linked list
void printList()
{
    struct Node *node = head;
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to perform selection sort on the linked list
void selectionSort()
{
    if (head == NULL)
    {
        return;
    }

    struct Node *start = head;

    while (start != NULL)
    {
        struct Node *min = start;
        struct Node *current = start->next;

        while (current != NULL)
        {
            if (current->data < min->data)
            {
                min = current;
            }
            current = current->next;
        }

        if (min != start)
        {
            int temp = start->data;
            start->data = min->data;
            min->data = temp;
        }

        start = start->next;
    }
}