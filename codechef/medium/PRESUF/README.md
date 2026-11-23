# PRESUF

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Prefix-Suffix Pairs

You are given an array $A$ of $N$ integers, indexed from $1$ to $N$.

For an index $i$, consider the prefix $A_1,A_2,\ldots,A_i$:

- let $P_i$ be the number of times $A_i$ appears in this prefix;
- let $D_i$ be the number of distinct values in this prefix.

Similarly, for an index $j$, consider the suffix $A_j,A_{j+1},\ldots,A_N$:

- let $S_j$ be the number of times $A_j$ appears in this suffix;
- let $E_j$ be the number of distinct values in this suffix.

A pair of indices $(i,j)$, where $1 \le i < j \le N$, is called  **valid**  if:

$P_i + S_j \le \left\lfloor \frac{D_i}{2} \right\rfloor + \left\lfloor \frac{E_j}{2} \right\rfloor$

Find the  **number of valid pairs**  in the array.

Since the answer can be large, print it modulo $10^9+7$.

### Input Format

The first line contains an integer $N$ — the size of the array.

The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$.

### Output Format

Print a single integer — the number of valid pairs modulo $10^9+7$

### Constraints
- $1 \le N \le 10^5$
- $1 \le A_i \le 10^9$
### Sample 1:
Input
Output

```
5
2 2 3 1 5
```

```
2
```

### Explanation:

The valid pairs are `(1, 2)` and `(3, 4)`.

Therefore, the number of valid pairs is `2`.

### Sample 2:
Input
Output

```
5
5 5 5 5 5
```

```
0
```

### Explanation:

No pair satisfies the required condition.

Therefore, the answer is `0`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-23T13:48:57.856Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PRESUF)