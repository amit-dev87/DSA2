# Sum of Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a binary tree, find the sum of values of all the nodes. 

 **Examples:** 

```
Input: root = [15, 10, 20, 8, 12, 16, 25]

Output: 106
Explanation: The sum of all the nodes is 15 + 10 + 20 + 8 + 12 + 16 + 25 = 106
.
```

```
Input: root = [1, 3, 2]

Output: 6
Explanation: The sum of all the nodes is 1 + 2 + 3 = 6.
```

```
Input: root = [1, 2, N, 4, N]

Output: 7
Explanation: The sum of all the nodes is 1 + 2 + 4 = 7.
```

 **Constraints:** 
1 ≤ number of nodes ≤ 104
-105 ≤ Node data ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T09:01:25.811Z  

```cpp
/* Tree Node Structure
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
    int sumBT(Node* root) {
        if(root == nullptr){
            return 0;
        }
        
        return root -> data + sumBT(root -> left) + sumBT(root -> right);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1)