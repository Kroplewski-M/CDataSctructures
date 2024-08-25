#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct LLNode{
    int value;
    struct LLNode *next;
}LLNode;

void LLAddNodeEnd(LLNode **head, int value);
void LLPrintLinkedList(LLNode *head);
void LLAddNodeStart(LLNode **head, int value);
void LLClearLinkedList(LLNode **head);
void LLRemoveHead(LLNode **head);
void LLRemoveEnd(LLNode **head);
void LLRemoveByIndex(LLNode **head, int index);
int LLGetLength(LLNode *head);
#endif