#include <stdio.h>
#include <stdlib.h>

void append();
void printList();
void bubbleSort();

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

    bubbleSort();

    printf("Sorted list: ");
    printList();

    return 0;
}

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

void bubbleSort()
{
    if (head == NULL)
    {
        return;
    }

    struct Node *current;
    struct Node *last = NULL;
    int swapped;

    do
    {
        swapped = 0;
        current = head;

        while (current->next != last)
        {
            if (current->data > current->next->data)
            {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}
