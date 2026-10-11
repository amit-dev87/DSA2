# Koko Eating Bananas

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Koko loves to eat bananas. There are `n` piles of bananas, the `ith` pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.

Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return  *the minimum integer*  `k`  *such that she can eat all the bananas within*  `h`  *hours*.

 

 **Example 1:** 

```
Input: piles = [3,6,7,11], h = 8
Output: 4

```

 **Example 2:** 

```
Input: piles = [30,11,23,4,20], h = 5
Output: 30

```

 **Example 3:** 

```
Input: piles = [30,11,23,4,20], h = 6
Output: 23

```

 

 **Constraints:** 

- 1 <= piles.length <= 104
- piles.length <= h <= 109
- 1 <= piles[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 68.47%)  
**Memory:** 23.1 MB (beats 23.49%)  
**Submitted:** 2026-10-11T02:44:31.393Z  

```cpp
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = INT_MIN;
        for(int i : piles){
            if(i > max){
                max = i;
            }
        }
        int low = 1 ,  ans = 0;
        int high = max;
        while(low <= high ){
            int mid = low + (high - low) / 2 ; 
            long long  total = 0;
            for(int i : piles){
                total += ( i + mid - 1) / mid;
            }
            if(total <= h){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        } 
            
    return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/koko-eating-bananas/)