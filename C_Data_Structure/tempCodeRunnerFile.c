#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning();
void insertAtEnd();
void deleteNode();
void displayList();
void insertAfter();
void deleteList();
void searchNode();
void getLength();
void reverseList();
void isEmpty();

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After\n");
        printf("4. Delete Node\n");
        printf("5. Display List\n");
        printf("6. Delete Entire List\n");
        printf("7. Search Node\n");
        printf("8. Get Length of List\n");
        printf("9. Reverse List\n");
        printf("10. Check if List is Empty\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        