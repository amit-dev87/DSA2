# Make Array Beautiful

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of negative and non-negative integers. You need to make the array beautiful.

- An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or positive. You can do the following operation any number of times until the array becomes beautiful.
- If two adjacent are different i.e. one of them is negative and other is positive, remove them. 
- Return the beautiful array after performing the above operation.
- An empty array is also a beautiful array.
- There can be multiple beautiful output arrays. For consistencty with the test cases, scan the array from left to right for removing two adjacent.

 **Note:** 0 is considered a positive number in this context.

 **Examples:** 

```
Input: arr[] = [4, 2,-2, 1] 
Output: [4, 1]
Explanation: As at indices 1 and 2, 2 and -2 have different sign, they are removed. And the the final array is: [4, 1].

```

```
Input: arr[] = [2,-2, -1, 1]
Output: []
Explanation: As at indices 0 and 1, 2 and -2 have different sign, so they are removed. Now the array is 1 -1.Now 1 and -1 are also removed as they have different sign. So the final array is empty. 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T04:48:23.946Z  

```cpp
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> a;

        for(int i = 0; i < arr.size(); i++) {
            if(!a.empty() && 
               ((a.top() < 0 && arr[i] >= 0) || 
                (a.top() >= 0 && arr[i] < 0))) {
                a.pop();
            } else {
                a.push(arr[i]);
            }
        }

        vector<int> ans;

        while(!a.empty()) {
            ans.push_back(a.top());
            a.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1)