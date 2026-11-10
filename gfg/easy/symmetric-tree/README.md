# Symmetric Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given  a root of binary tree, check whether it is symmetric, i.e., whether the tree is a mirror image of itself.

 **Note:**  A binary tree is symmetric if the left subtree is a mirror reflection of the right subtree.

 **Examples:** 

```
Input: root = [10, 5, 5, 2, N, N, 2] 
   
Output: true
Explanation: As the left and right half of the above tree is mirror image, the tree is symmetric.

```

```
Input: root = [8, 4, 4, N, 6, N, 6]
   
Output: false
Explanation:  As the left and right half of the above tree is not the mirror image, the tree is not symmetric. 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T13:30:44.528Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/symmetric-tree/1)