# Count Internal Nodes in Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a root of a Binary Tree. Count all the non-leaf nodes present in the given binary tree and return it.

 **Examples:** 

```
Input: root[] = [1, 2, 3, 4, 5]

Output: 2
Explanation: Nodes 1 and 2 are the only non leaf nodes.
```

```
Input: root[] = [10, 5, 20, 3, 7, 15, 25]

Output: 3
Explanation: Nodes 10, 5 and 20 are the only non leaf nodes.
```

```
Input: root[] = [8, 3, 9, 1, 6, 4, 7]

Output: 3
Explanation: Nodes 8, 3 and 6 are the only non leaf nodes.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T09:15:31.743Z  

```cpp
/* Binary Tree Node Structure
class Node {
    public:
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
    int countNonLeafNodes(Node* root) {
        if(root == nullptr){
            return 0;
        }
        if(root -> left == nullptr && root -> right == nullptr){
            return 0;
        }
       return  1 + countNonLeafNodes(root -> left) + countNonLeafNodes(root -> right);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1)