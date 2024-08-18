#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node{
    int value;
    struct node *next;
}node;

void addNodeEnd(node **head, int value);
void printLinkedList(node *head);
void addNodeStart(node **head, int value);
void clearLinkedList(node **head);
void removeHead(node **head);
void removeEnd(node **head);
void removeByIndex(node **head, int index);
int getLength(node *head);
#endif