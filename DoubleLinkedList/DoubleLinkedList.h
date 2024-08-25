#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct DLLNode {
    int value;
    struct DLLNode *next;
    struct DLLNode *prev;
}DLLNode;

void DLLPrint(DLLNode *head);
void DLLClear(DLLNode **head);
void DLLInsertStart(DLLNode **head, int value);
void DLLInsertEnd(DLLNode **head, int value);
void DLLRemoveIndex(DLLNode **head, int value);
void DLLRemoveHead(DLLNode **head);
void DLLRemoveEnd(DLLNode **head);
void DLLPrintLength(DLLNode *head);
#endif