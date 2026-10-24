# Inorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a  **root** of a Binary Tree, your task is to return its Inorder Traversal.

 **Note:** An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree).

 **Examples:** 

```
Input: root = [1, 2, 3, 4, 5]
            
Output: [4, 2, 5, 1, 3]
Explanation: The inorder traversal of the given binary tree is [4, 2, 5, 1, 3].
```

```
Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]
              
Output: [1, 7, 10, 8, 6, 10, 5, 6]
Explanation: The inorder traversal of the given binary tree is [1, 7, 10, 8, 6, 10, 5, 6].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T07:41:25.985Z  

```cpp
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
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        if(root == nullptr){
            return ans;
        }
        vector<int>left = inOrder(root -> left);
        
        ans.insert(ans.end(),left.begin(),left.end());
        
        ans.push_back(root -> data);
        
        vector<int>right = inOrder(root -> right);
        
        ans.insert(ans.end(),right.begin(),right.end());
        
        return ans;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inorder-traversal/1)