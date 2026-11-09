# LSMALL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Lexicographically Smallest Subsequence

You are given a string $S$ of lowercase English letters and an integer $K$.

Find the lexicographically smallest subsequence of $S$ containing exactly $K$ characters.

A  **subsequence**  is obtained by deleting zero or more characters from a string without changing the relative order of the remaining characters.

For two different strings of the same length, the  **lexicographically smaller**  string is the one with the alphabetically earlier character at the first position where they differ.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains the string $S$. The second line contains an integer $K$, the required subsequence length.
### Output Format

For each test case, print the lexicographically smallest subsequence of $S$ of length $K$ on a separate line.

### Constraints
- $1 \le T \le 5$
- $1 \le K \le |S| \le 10^5$
- $S$ contains only lowercase English letters.
### Sample 1:
Input
Output

```
2
cbacd
3
bbaba
3
```

```
acd
aba
```

### Explanation:
- Test case 1: Selecting the characters at positions $3$, $4$, and $5$ gives $\texttt{acd}$, the lexicographically smallest subsequence of length $3$.
- Test case 2: Selecting the characters at positions $3$, $4$, and $5$ gives $\texttt{aba}$. Although $\texttt{aab}$ is lexicographically smaller, it cannot be formed as a subsequence because no $\texttt{b}$ occurs after the second $\texttt{a}$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T14:27:15.839Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LSMALL)