//
// Created by mateusz on 8/17/24.
//
#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void addNodeEnd(node **head,int value) {
    printf("\nAdding new node to the end with the value of: %d",value);
    if(*head == NULL) {
        *head = (node *)malloc(sizeof(node));
        (*head)->value = value;
        (*head)->next = NULL;
        return;
    }
    node *curr = *head;
    while(curr->next != NULL)
        curr = curr->next;
    node *newNode = malloc(sizeof(node));
    if(newNode == NULL) {
        printf("==========\nMemory allocation failed for new node!\n============");
        return;
    }
    newNode->value = value;
    newNode->next = NULL;
    curr->next = newNode;
}
void printLinkedList(node *head) {
    node *curr = head;
    printf("\nCurrent Linked List:");
    if(curr == NULL) {
        printf("\nEmpty");
        return;
    }
    while(curr != NULL) {
        printf(" %d ->",curr->value);
        curr = curr->next;
    }
}
void addNodeStart(node **head,int value) {
    printf("\nAdding new node to the start with the value of: %d",value);
    node *newHead = (node *) malloc(sizeof(node));
    if(newHead == NULL) {
        printf("==========\nMemory allocation failed for new node!\n============");
        return;
    }
    newHead->value = value;
    newHead->next = *head;
    *head = newHead;
}
void clearLinkedList(node **head) {
    printf("\nClearing linked list");
    node *curr = *head;
    node *next = NULL;
    if(curr == NULL) {
        printf("\nNothing to free!");
        return;
    }
    while(curr->next != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    *head = NULL;
}

void removeHead(node **head) {
    if(*head == NULL) {
        printf("\nList empty nothing to remove");
        return;
    }
    node *curr = *head;
    if(curr->next != NULL) {
        *head = curr->next;
        curr->next = NULL;
    }
    else {
        *head = NULL;
    }
    free(curr);
}

void removeEnd(node **head) {
    if(*head == NULL) {
        printf("\nList empty nothing to remove");
        return;
    }
    node *curr = *head;
    if(curr->next == NULL) {
        free(curr);
        *head = NULL;
        return;
    }
    node *prev = NULL;
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    if(prev != NULL) {
        prev->next = NULL;
    }
    free(curr);
}

void removeByIndex(node **head, int index) {
    if(*head == NULL) {
        printf("\nThe list is empty and cant retrieve a node");
        return;
    }
    if(index == 0) {
        removeHead(head);
        return;
    }
    int position = 0;
    node *curr = *head;
    node *prev = NULL;
    while(curr->next != NULL) {
        if(position == index) {
            //REMOVE HERE
            printf("\nRemoving node at %d",index);
            if(prev != NULL) {
                prev->next = curr->next;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
        position += 1;
    }
    printf("\nThe index does not exist in the list");
}

int getLength(node *head) {
    if(head == NULL) {
        printf("\nThe list is empty");
        return 0;
    }
    int length = 0;
    node *curr = head;
    while(curr != NULL) {
        length += 1;
        curr = curr->next;
    }
    return length;
}
