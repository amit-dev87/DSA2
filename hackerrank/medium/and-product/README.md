# Time Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Consider two non-negative long integers, $a$ and $b$, where $a \le b$. The [bitwise AND](https://en.wikipedia.org/wiki/Bitwise_operation#AND) of all long integers in the inclusive range between $a$ and $b$ can be expressed as $a \text{ & } (a + 1) \text{ & }  \ldots \text{ & } (b - 1) \text{ & } b$, where $\text{&}$ is the bitwise AND operator. 

Given $n$ pairs of long integers, $a[i]$ and $b[i]$, compute and print the bitwise AND of all natural numbers in the inclusive range between $a[i]$ and $b[i]$.

For example, if $a=10$ and $b=14$, the calculation is $10\ \&\ 11\ \&\ 12\ \&\ 13\ \&\ 14=8$.  

**Function Description**  

Complete the *andProduct* in the editor below.  It should return the computed value as an integer.  

andProduct has the following parameter(s):  

- *a*: an integer  
- *b*: an integer  

**Input Format**

The first line contains a single integer $n$, the number of intervals to test.   		
Each of the next $n$ lines contains two space-separated integers $a[i]$ and $b[i]$.

**Constraints**

- $1 \le n \le 200$  
- $0 \le a[i] \le b[i] \lt 2^{32}$

**Output Format**

For each pair of long integers, print the bitwise AND of all numbers in the inclusive range between $a[i]$ and $b[i]$ on a new line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T08:04:22.659Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string period = s.substr(8,2);
    int hour = stoi(s.substr(0 , 2));
    if(period == "AM"){
        if(hour == 12){
            s.replace (0, 2 , "00");
        }
    }else{
        if(hour != 12){
            hour += 12;
            s.replace(0 , 2 ,to_string(hour));
        }
    }
    return s.substr(0,8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/and-product/problem)