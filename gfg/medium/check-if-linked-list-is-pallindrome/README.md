# Palindrome Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the  **head**  of a singly linked list of positive integers. You have to check if the given linked list is  **palindrome** or not.

 **Examples:** 

```
Input:
   
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1, which is a palindrome.

```

```
Input:
   
Output: false
Explanation: The given linked list is 10 -> 20 -> 30 -> 40 -> 50, which is not a palindrome.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T03:39:51.086Z  

```cpp
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        Node* temp1 = head;
        Node* temp2 = head;
        while(temp2 -> next!= nullptr && temp2 -> next -> next != nullptr){
            temp1 = temp1 -> next;
            temp2 = temp2 -> next -> next;
        }
        Node* prev = nullptr;
        Node * curr = temp1 -> next;
        
        while(curr != nullptr){
            Node* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        Node* temp3 = head;
        Node* temp4 = prev;
        while(temp4 != nullptr){
            if(temp3 ->  data != temp4 -> data){
                return false;
            }
            temp3 = temp3 -> next;
            temp4 = temp4 -> next;
        }
      return true;  
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1)