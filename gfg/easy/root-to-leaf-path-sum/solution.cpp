/* A binary tree node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/


class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        if(root == nullptr) {
            return false;
        }

        target -= root->data;

        if(root->left == nullptr && root->right == nullptr) {
            return target == 0;
        }

        return hasPathSum(root->left, target) ||
               hasPathSum(root->right, target);
    }
};
