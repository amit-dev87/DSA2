# Root to Leaf Path Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given   root   of a binary tree and an integer   target , return   true   if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. Return   false   if no such path can be found. 

 **Examples :** 

```
Input: root = [1, 2, 3], target = 4

Output: true
Explanation: The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -> 3), the answer is true.
```

```
Input: root = [1, 2, 3], target = 2

Output: false
Explanation: The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, there is no path with sum 2, the answer is false.
```

```
Input: root = [1, 2, 3, 4, 1], target = 4

Output: true
Explanation: The root to leaf path sums are 1 + 2 + 4 = 7, 1 + 2 + 1 = 4 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -> 3 and 1 -> 2 -> 1), the answer is true.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T10:43:38.868Z  

```cpp
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

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)