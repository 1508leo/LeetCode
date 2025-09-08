#include <stdlib.h>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // This is Binary Search Tree
        if((p -> val < root -> val && root -> val < q -> val) || (q -> val < root -> val && root -> val < p -> val) || 
            p -> val == root -> val || q -> val == root -> val){
                return root;
            }

        int s, l;

        if(p -> val < q -> val){
            s = p -> val;
            l = q -> val;
        }
        else{
            l = p -> val;
            s = q -> val;
        }

        TreeNode* result;

        if(p -> val < root -> val){
            result = Search(root -> left, s, l);
        }
        else{
            result = Search(root -> right, s, l);
        }

        return result;
    }

    TreeNode* Search(TreeNode* current, int p, int q){
        // p < q
        if(p <= current -> val && current -> val <= q){
            return current;
        }
        else if(q < current -> val){
            return Search(current -> left, p, q);
        }
        else{
            return Search(current -> right, p, q);
        }
    }
};