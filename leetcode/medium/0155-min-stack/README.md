# Min Stack

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:

- MinStack() initializes the stack object.
- void push(int value) pushes the element value onto the stack.
- void pop() removes the element on the top of the stack.
- int top() gets the top element of the stack.
- int getMin() retrieves the minimum element in the stack.

You must implement a solution with `O(1)` time complexity for each function.

 

 **Example 1:** 

```
Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2

```

 

 **Constraints:** 

- -231 <= val <= 231 - 1
- Methods pop, top and getMin operations will always be called on non-empty stacks.
- At most 3 * 104 calls will be made to push, pop, top, and getMin.

## Solution

**Language:** C++  
**Runtime:** 209 ms (beats 27.87%)  
**Memory:** 157.9 MB (beats 5.29%)  
**Submitted:** 2026-11-20T08:44:37.119Z  

```cpp
class Node{
public:
    int val;
    Node* next;
    int minimum;
    Node(int x , int mini){
        val = x;
        next = nullptr;
        minimum = mini;
    }
};
class MinStack {
private:
    int size;
    Node* head;
    int minimum;
public:
    MinStack() {
        head = nullptr;
    }
    void push(int value) {
        int mini = value;
        if (head != nullptr) {
            mini = min(head->minimum, value);
        }
        Node * newNode = new Node(value , mini);
        newNode -> next = head;
        head = newNode;
       // mini = min(mini , value);
    }
    
    void pop() {
        if (head == nullptr) return;
        Node * temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
        //mini = INT_MAX;
        // Node * temp1 = head;
        // while(temp1  != nullptr){
        //     mini = min(mini , temp1 -> val);
        //     temp1 = temp1 -> next;
        // }
    }
    
    int top() {
        if(head == nullptr) return -1;
        return head -> val;
    }    
    int getMin() {
        if(head == nullptr) return -1;
        return head -> minimum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
```

---

[View on LeetCode](https://leetcode.com/problems/min-stack/)