#include <stdio.h>
#include "LinkedList/LinkedList.h"
#include "DoubleLinkedList/DoubleLinkedList.h"

int main(void)
{
    //LINKED LIST
    // LLNode *head = NULL;
    //
    // LLAddNodeEnd(&head,5);
    // LLAddNodeEnd(&head,53);
    // LLAddNodeStart(&head,1027);
    // LLAddNodeStart(&head,1017);
    // LLAddNodeStart(&head,1);
    //
    // LLPrintLinkedList(head);
    // printf("\nsize of list: %d",LLGetLength(head));
    // LLRemoveByIndex(&head,1);
    // LLPrintLinkedList(head);
    // printf("\nsize of list: %d",LLGetLength(head));
    // LLRemoveByIndex(&head,6);

    //DOUBLE LINKED LIST
    DLLNode *head = NULL;
    DLLPrint(head);
    DLLInsertEnd(&head, 5);
    DLLInsertEnd(&head, 10);
    DLLInsertEnd(&head, 20);
    DLLInsertEnd(&head, 30);
    DLLInsertEnd(&head, 50);
    DLLPrint(head);

    DLLClear(&head);
    DLLPrint(head);

    DLLInsertStart(&head, 10);
    DLLInsertStart(&head, 5);
    DLLInsertStart(&head, 12);
    DLLInsertStart(&head, 54);
    DLLInsertStart(&head, 89);
    DLLInsertStart(&head, 39);
    DLLInsertEnd(&head, 50);

    DLLPrint(head);
    DLLPrintLength(head);
    return 0;
}
