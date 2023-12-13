#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        // Handle memory allocation failure
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int length(struct Node* head)
{
    int count = 0; // Initialize count
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int middle(struct Node* head)
{
    int n = length(head);
    int i = 0;
    while (i < n / 2)
    {
        head = head->next;
        i++;
    }
    return head->data;
}

int main()
{
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);
    struct Node* fourth = createNode(4);
    struct Node* fifth = createNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    int x = middle(head);
    printf("The middle element is %d", x);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);

    return 0;
}
