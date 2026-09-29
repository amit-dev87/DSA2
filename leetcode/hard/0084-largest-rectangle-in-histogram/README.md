# Largest Rectangle in Histogram

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array of integers `heights` representing the histogram's bar height where the width of each bar is `1`, return  *the area of the largest rectangle in the histogram*.

 

 **Example 1:** 

```
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.

```

 **Example 2:** 

```
Input: heights = [2,4]
Output: 4

```

 

 **Constraints:** 

- 1 <= heights.length <= 105
- 0 <= heights[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 23 ms (beats 53.95%)  
**Memory:** 85.7 MB (beats 42.04%)  
**Submitted:** 2026-09-29T05:40:15.606Z  

```cpp
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>right(n,0);
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i]=s.empty()?n:s.top();
            s.push(i);
        }
        vector<int>left(n,0);
        while(!s.empty()){
            s.pop();
        }
        for(int i=0;i<n;i++){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            left[i]=s.empty() ? -1 : s.top();
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int w=right[i]-left[i]-1;
            int currAns=heights[i]*w;
            ans=max(ans,currAns);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/largest-rectangle-in-histogram/)