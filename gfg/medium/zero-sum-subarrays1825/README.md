# Zero Sum Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array  **arr[]**  of integers. Find the total count of subarrays with their sum equal to 0.

 **Examples:** 

```
Input: arr[] = [0, 0, 5, 5, 0, 0]
Output: 6
Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].
```

```
Input: arr[] = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
Output: 4
Explanation: The 4 subarrays are [-1, -3, 4], [-2, 2], [2, 4, 6, -12], 
and [-1, -3, 4, -2, 2]

```

```
Input: arr[] = [0]
Output: 1
Explanation: The only subarray is [0].
```

 **Constraints:** 
1 <= n <= 106
-109 <= arr[ i ] <= 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T16:35:07.278Z  

```cpp
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int count = 0 , sum = 0;
        
        map<int , int>st;
        st[0] = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            if(st.find(sum) != st.end()){
                count += st[sum];
            }
            
            st[sum]++;
        }
        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1)