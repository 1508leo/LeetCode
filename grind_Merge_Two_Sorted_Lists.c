#include <stdlib.h>

// the structure of node
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    // determine whether a list is null
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;
    
    struct ListNode *new;
    struct ListNode *cur;
    struct ListNode *result;
    
    // determine which should be the basic part of the new list
    if(list1 -> val <= list2 -> val){ // list1 be the basic 
        result = list1;
        new = result;
        cur = list2;
    }
    else{ // list 2 be the basic
        result = list2;
        new = result;
        cur = list1;
    }

    while(1){
        // find the place where the node of the list2 should insert  
        if(cur == NULL)
            break;       
        while(new -> next != NULL && new -> next -> val < cur -> val)
                new = new -> next;

        struct ListNode *add = malloc(sizeof(struct ListNode));
        add -> val = cur -> val;
        add -> next = new -> next;
        new -> next = add;
        
        cur = cur -> next;
    }

    return result;
}