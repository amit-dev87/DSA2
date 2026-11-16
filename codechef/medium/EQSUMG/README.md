# EQSUMG

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Equal Sum Groups

You are given $N$ items, where item $i$ has a non-negative value $A_i$, and $K$ people.

Determine whether all the items can be distributed among the $K$ people so that everyone receives the same total value.

Each item must be assigned to exactly one person and cannot be split.  **Every person must receive at least one item.** 

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains two space-separated integers $N$ and $K$. The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$, the values of the items.
### Output Format

For each test case, print `yes` if such a distribution is possible, or `no` otherwise, on a separate line.

### Constraints
- $1 \le T \le 10$
- $1 \le N \le 21$
- $1 \le K \le 8$
- $0 \le A_i \le 10^{10}$
### Sample 1:
Input
Output

```
2
6 3
2 3 4 5 6 7
5 3
2 2 2 3 3
```

```
yes
no
```

### Explanation:
- Test case 1: The items can be distributed as $\{2,7\}$, $\{3,6\}$, and $\{4,5\}$. Each person receives a total value of $9$.
- Test case 2: The total value is $12$, so each person must receive a total value of $4$. However, an item of value $3$ cannot be combined with any available items to reach $4$. Therefore, an equal distribution is impossible.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T14:14:26.875Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n , k;
	    cin>>n>>k;
	    int a[n];
	    for(int i = 0 ; i < n ; i++){
	        cin>>a[i];
	    }
	    
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/EQSUMG)