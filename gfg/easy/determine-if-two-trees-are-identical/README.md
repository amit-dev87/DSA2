# Identical Trees

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two binary trees with their root nodes  **r1**  and  **r2**, return true if both of them are  **identical**, otherwise return false.
 **Note:** Two trees are identical when they have the same data and the arrangement of the data is also same.

 **Examples:** 

```
Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, 4]

Output: true
Explanation: Trees are identical.
```

```
Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, N, N, 4]
 
Output: false
Explanation: Trees are not identical.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T13:09:03.392Z  

```cpp
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        if(r1 == nullptr && r2 == nullptr){
            return true;
        }
        if(r1 == nullptr || r2 == nullptr){
            return false;
        }
        if(r1 -> data != r2 -> data){
            return false;
        }
        bool left = isIdentical(r1 -> left, r2 -> left);
        bool right = isIdentical(r1 -> right, r2 -> right);
        return left && right;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1)