# Count Set Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n**. Return the  **count** of set bits in its binary equivalent.

 **Examples:** 

```
Input: n = 6
Output: 2
Explanation: 

Binary representation is '110', so the count of the set bit is 2.
```

```
Input: n = 8
Output: 1
Explanation: 

Binary representation is '1000', so the count of the set bit is 1.

```

```
Input: n = 3
Output: 2
Explanation:

Binary representation is '11', so the count of the set bit is 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T02:45:05.925Z  

```cpp
class Solution {
  public:
    int setBits(int n) {
        vector<int>ans;
        while(n > 0){
            ans.push_back(n % 2);
            n /= 2;
        }
        int count = 0;
        for(int i : ans){
            if(i == 1){
                count++;
            }
        }
        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/set-bits0143/1)