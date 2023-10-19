#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


// Using Recursive
struct TreeNode* invertTree(struct TreeNode* root){

    // Base case
    if(root == NULL)
        return NULL;
    
    // Store the next node
    struct TreeNode *temp_left = invertTree(root -> left);
    struct TreeNode *temp_right = invertTree(root -> right);

    // Invert
    root -> left = temp_right;
    root -> right = temp_left;

    return root;
}