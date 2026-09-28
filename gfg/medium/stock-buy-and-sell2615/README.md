# Stock Buy and Sell – Multiple Transaction Allowed

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **prices[]**, where  **prices[i]**  is the price of a given stock on the ith day. Each day you may decide to either buy or sell the stock at  **price[i]**, you can even buy and sell the stock on the same day, return the  **maximum profit**  that you can get.

 **Note** : A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

 **Examples:** 

```
Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210. Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655. Maximum Profit = 210 + 655 = 865.

Input: prices[] = [4, 2, 2, 2, 4]
Output: 2
Explanation: Buy the stock on day 3 and sell it on day 4 => 4 – 2 = 2. Maximum Profit = 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T12:39:52.505Z  

```cpp
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }
        }

        return profit;
        
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1)