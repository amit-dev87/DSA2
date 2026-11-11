# Multiply Two Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two numbers as strings  **s1**  and  **s2**. Calculate their  **Product**.
 **Note:**  The numbers can be  **negative**  and You are not allowed to use any built-in function or convert the strings to integers. There can be zeros in the begining of the numbers. You don't need to specify '+' sign in the begining of positive numbers.

 **Examples:** 

```
Input: s1 = "0033", s2 = "2"
Output: "66"
Explanation: 33 * 2 = 66
```

```
Input: s1 = "11", s2 = "23"
Output: "253"
Explanation: 11 * 23  = 253
```

```
Input: s1 = "123", s2 = "0"
Output: "0"
Explanation: Anything multiplied by 0 is equal to 0.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T01:57:05.750Z  

```cpp
class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        bool neg = false;

        if(s1[0] == '-') {
            neg = !neg;
            s1 = s1.substr(1);
        }

        if(s2[0] == '-') {
            neg = !neg;
            s2 = s2.substr(1);
        }

        int p = s1.find_first_not_of('0');
        s1 = (p == string::npos) ? "0" : s1.substr(p);

        p = s2.find_first_not_of('0');
        s2 = (p == string::npos) ? "0" : s2.substr(p);
        
        if(s1 == "0" || s2 == "0"){
            return "0";
        }
        
        int n = s1.size();
        int m = s2.size();
        
        vector<int>ans(n+m,0);
        
        for(int i = n-1; i >= 0 ; i--){
            for(int j = m - 1; j >=0 ; j--){
                int mul = (s1[i] - '0')*(s2[j] - '0');
                
                int sum = mul + ans[i+j+1];
                
                ans[i+j+1] = sum%10;
                
                ans[i+j] += sum/10;
            }
        }
        string result = "";
        for(auto x : ans){
            if(!(result.empty() && x == 0)){
                result += to_string(x);
            }
        }
        if(neg) result = "-" + result;
       return result; 
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/multiply-two-strings/1)