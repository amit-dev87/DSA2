# Add Number Linked Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the head of two singly linked lists  **head1**  and  **head2**  representing two non-negative integers. You need to return the  **head**  of the linked list representing the  **sum**  of these two numbers.

 **Note:** There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

 **Examples:** 

```
Input: 
    
Output:  1 -> 1 -> 2 -> 2
Explanation: Given numbers are 123 and 999. There sum is 1122.
    

```

```
Input: 
    
Output: 7 -> 0 
Explanation: Given numbers are 63 and 7. There sum is 70.
    
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T11:04:52.467Z  

```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
        Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while(curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        if(head1 == nullptr && head2 ==nullptr){
            
            return nullptr;
        } 
        
        Node* temp1 = head1 ;
        
        Node* temp2 = head2;
        
        int carry = 0;
        
        while(temp1 != nullptr || temp2 != nullptr || carry){
            int sum = carry;
            
            if(temp1 != nullptr){
                
                sum += temp1 -> data;
                
                temp1 = temp1 -> next;
            }
            if(temp2 != nullptr){
                
                sum += temp2 -> data;
                
                temp2 = temp2 -> next;
            }
            
            temp -> next = new Node(sum%10);
            
            carry = sum/10;
            
            temp = temp -> next;
        }
        Node * result = reverse(ans -> next);
        
        while(result != nullptr && result->data == 0 && result->next != nullptr) {
            
            Node* del = result;
            
            result = result->next;
            
            delete del;
        }
        
        return result;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1)