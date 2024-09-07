//
// Created by mateusz on 8/24/24.
//

#include "DoubleLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void DLLPrint(DLLNode *head) {
    printf("\nPrinting double linked list\n");
    if(head == NULL) {
        printf("\nThe list is empty");
        return;
    }
    const DLLNode *current = head;
    while(current != NULL) {
        if(current == head) {
            printf("%d", current->value);
        }
        else {
            printf("<-%d->",current->value);
        }
        current = current-> next;
    }

}
void DLLClear(DLLNode **head) {
    printf("\nClearing double linked list\n");
    if(*head == NULL) {
        printf("\nThe list is empty");
        return;
    }
    DLLNode *current = *head;
    DLLNode *next = *head;
    while(next != NULL) {
        current = next;
        next = next->next;
        free(current);
    }
    *head = NULL;
    printf("\nCleared double linked list successfully\n");
}
void DLLInsertStart(DLLNode **head, int value) {
    printf("\nAdding new node to the start with the value of: %d",value);
    if(*head == NULL) {
        *head = (DLLNode *)malloc(sizeof(DLLNode));
        (*head)->value = value;
        (*head)->next = NULL;
        (*head)->prev = NULL;
        printf("\nAdded node to head successfully");
        return;
    }
    DLLNode *newNode = (DLLNode *)malloc(sizeof(DLLNode));
    newNode->value = (*head)->value;
    newNode->next = (*head)->next;

    (*head)->value = value;
    (*head)->next = newNode;
}
void DLLInsertEnd(DLLNode **head, int value) {
    printf("\nAdding new node to the end with the value of: %d",value);
    if(*head == NULL) {
        *head = (DLLNode *)malloc(sizeof(DLLNode));
        (*head)->value = value;
        (*head)->next = NULL;
        (*head)->prev = NULL;
        printf("\nAdded node to head successfully");
        return;
    }
    DLLNode *curr = *head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    DLLNode *newNode = (DLLNode *)malloc(sizeof(DLLNode));
    if(newNode == NULL) {
        printf("\nMemory allocation error");
        return;
    }
    newNode->value = value;
    newNode->next = NULL;
    newNode->prev = curr;
    curr->next = newNode;
    printf("\nAdded node to end successfully");
}
void DLLPrintLength(DLLNode *head) {
    if(head == NULL) {
        printf("\nThe list is empty");
        return;
    }
    const DLLNode *current = head;
    int length = 0;
    while(current != NULL) {
        length++;
        current = current-> next;
    }
    printf("\nThe length of the list is: %d",length);
}