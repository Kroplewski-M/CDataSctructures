#include <stdio.h>
#include "LinkedList/LinkedList.h"

int main(void)
{
    node *head = NULL;

    addNodeEnd(&head,5);
    addNodeEnd(&head,53);
    addNodeStart(&head,1027);
    addNodeStart(&head,1017);
    addNodeStart(&head,1);

    printLinkedList(head);
    printf("\nsize of list: %d",getLength(head));
    removeByIndex(&head,1);
    printLinkedList(head);
    printf("\nsize of list: %d",getLength(head));
    removeByIndex(&head,6);
    return 0;
}
