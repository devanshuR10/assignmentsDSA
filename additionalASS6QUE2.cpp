#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} NODE;

int parityCount(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

NODE* removeEvenParityCSLL(NODE* head) {
    if (head == NULL) return NULL;

    NODE *curr = head, *prev = NULL;

    // Remove even parity nodes at the start if necessary
    while (parityCount(head->data) % 2 == 0) {
        NODE* temp = head;
        if (head->next == head) {
            free(head);
            return NULL;
        }
        NODE* last = head;
        while (last->next != head)
            last = last->next;
        head = head->next;
        last->next = head;
        free(temp);
        if (head == NULL)
            return NULL;
    }

    prev = head;
    curr = head->next;
    while (curr != head) {
        if (parityCount(curr->data) % 2 == 0) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

void printCSLL(NODE* head) {
    if (head == NULL) return;
    NODE* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
