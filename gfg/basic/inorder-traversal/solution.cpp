/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    void solve(Node* root , vector<int>&ans){
        if(root == nullptr){
            return;
        }
        solve(root -> left , ans);
        ans.push_back(root -> data);
        solve(root -> right , ans);
    }
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        solve(root , ans);
        return ans;
        
    }
};