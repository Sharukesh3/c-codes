#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        // Handle memory allocation failure
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2); // Storing the reference to the second node

    // Remember to free the allocated memory when done using the linked list
    free(head->next);
    free(head);

    return 0;
}
