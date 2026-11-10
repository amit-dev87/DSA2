/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool solve(Node * left , Node* right){
        if(left == nullptr && right == nullptr ){
            return true;
        }
        if(left == nullptr || right == nullptr ){
            return false;
        }
        if(left -> data != right -> data){
            return false;
        }
  
        return solve(left -> left , right -> right) &&  solve(left -> right , right -> left);
    }
    bool isSymmetric(Node* root) {
        if(root == nullptr){
            return true;
        }
        return solve(root -> left , root -> right);
        
    }
};