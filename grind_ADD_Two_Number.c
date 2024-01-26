#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int val, carry = 0, v1, v2;
    struct ListNode *head = malloc(sizeof(struct ListNode)); // Head node point to the first node
    struct ListNode *current = head;

    while(l1 != NULL || l2 != NULL){
        v1 = (l1 != NULL) ? (l1 -> val) : 0;    // if l1 is not NULL, v1 = l1 -> val, else = 0
        v2 = (l2 != NULL) ? (l2 -> val) : 0;    // if l2 is not NULL, v2 = l2 -> val, else = 0
        val = v1 + v2 + carry;                  // val = total value
        
        carry = val >= 10 ?  1 : 0;             // if val >= 10, carry = 1

        // Create a new node
        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode -> val = val % 10;
        newnode -> next = NULL;

        // Add the new node into list
        current -> next = newnode;
        current = current -> next;

        // To next node
        if(l1 != NULL)
            l1 = l1 -> next;
        
        if(l2 != NULL)
            l2 = l2 -> next;
    }

    // If carry is 1
    if(carry == 1){ // add new node
        struct ListNode *newnode = malloc(sizeof(struct ListNode));

        newnode -> val = 1;
        newnode -> next = NULL;
        current -> next = newnode;
    }

    return head -> next;
}