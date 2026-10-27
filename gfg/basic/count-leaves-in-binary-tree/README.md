# Count Leaves in Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a Binary Tree, you need to count leaves in it. 

 **Examples:** 

```
Input: root[] = [4, 8, 10, 7, 5, 1, 3]

Output: 3
Explanation: Three leaves are 3, 5 and 1.

```

```
Input: root[] = [50, 30, 70, 20, 40, 60, 80, 65]

Output: 4
Explanation: Four leaves are 20, 40, 65 and 80.

```

```
Input: root[] = [30, 25, 35, 20, 28, 40, 27] 

Output: 3
Explanation: Three leaves are 20, 27 and 40.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T09:09:20.695Z  

```cpp
/* Binary Tree node Structure 
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
    int countLeaves(Node* root) {
        if(root == nullptr){
            return 0;
        }
 
        if(root -> left == nullptr && root -> right == nullptr){
            return 1;
        }
        
        return countLeaves(root -> left) + countLeaves(root -> right);;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1)