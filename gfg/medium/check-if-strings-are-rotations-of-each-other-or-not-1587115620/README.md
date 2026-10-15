# String Rotation Check

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two strings  **s1** and  **s2**, of equal lengths. The task is to check if  **s2**  is a rotated version of the string  **s1**.

 **Note:**  A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

 **Examples :** 

```
Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.

```

```
Input: s1 = "aab", s2 = "aba"
Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.
```

```
Input: s1 = "abcd", s2 = "acbd"
Output: false
Explanation: Strings are not rotations of each other.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T14:05:33.618Z  

```cpp
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        int n = s1.size();
        if(s1.size() != s2.size()) return false;
        string temp = s1 + s1;
        return temp.find(s2) != string::npos;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1)