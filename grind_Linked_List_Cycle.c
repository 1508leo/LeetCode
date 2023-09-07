#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    int amount = 0; // Record the time that 0 occur

    struct ListNode *current = head;

    // Determine whether is NULL
    if(current == NULL)
        return false;
    else
        current -> val = 0;

    while(current -> next != NULL){
        current = current -> next;

        // Turn every none 0 val into 0
        if(current -> val == 0)
            amount++; // If 0 occur
        else
            current -> val = 0;

        if(amount > 1) // 0 occur more than once meens there is a cycle
            return true;
    }

    // Reach the end of linked list
    return false;
}