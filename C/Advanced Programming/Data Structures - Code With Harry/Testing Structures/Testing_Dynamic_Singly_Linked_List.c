#include <stdio.h>
#include <stdlib.h>
#include "E:\Programming files\Code\C\Custom Includable Header Files\Custom_Headers.c"
#include Integer_Singly_Linked_List

int main()
{
    int_S_L_List a;
    int_S_L_List_init(&a);
    a.repr(&a);
    a.append(&a, 1);
    a.append(&a, 2);
    a.append(&a, 3);
    a.append(&a, 4);
    a.append(&a, 5);
    a.repr(&a);
    // a.insert(&a, 12, 3);
    // a.repr(&a);
    a.remove(&a, 3);
    a.repr(&a);
    // printf("\nSize: %d", sizeof(a));
    // a.delete(&a);
    // a.repr(&a);
    // a.append(&a, 3);
    // a.insert(&a, 1, 1);
    // a.remove(&a, 1);
    // a.delete(&a);
    // printf("\nSize: %d", sizeof(int));
    // printf("\nSize: %d", sizeof(int *));
    // printf("\nSize: %d", sizeof(int_S_L_L_Node *));
    // printf("\nSize: %d", sizeof(int));
    return 0;
}