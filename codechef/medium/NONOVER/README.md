# NONOVER

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Non-Overlapping Prefix-Suffix

You are given a string $S$.

Find the length of the longest prefix of $S$ that is also a suffix of $S$, such that the two occurrences do not overlap. In other words, no position in the string may belong to both occurrences.

For example, in $S = \texttt{ababa}$, the prefix and suffix $\texttt{aba}$ overlap at the middle character, so they are not valid. The longest valid matching prefix and suffix are $\texttt{a}$, with length $1$.

If no non-empty prefix satisfies these conditions, print $0$.

### Input Format

A single line contains the string $S$.

### Output Format

Print a single integer: the length of the longest matching prefix and suffix that do not overlap.

### Constraints
- $1 \le |S| \le 10^5$
- $S$ contains only lowercase English letters.
### Sample 1:
Input
Output

```
abcdabc
```

```
3
```

### Explanation:

The prefix $\texttt{abc}$ occupies positions $1$ through $3$, and the suffix $\texttt{abc}$ occupies positions $5$ through $7$. They are equal and do not overlap, so the answer is $3$.

### Sample 2:
Input
Output

```
aaaaa
```

```
2
```

### Explanation:

The prefix $\texttt{aa}$ occupies positions $1$ and $2$, and the suffix $\texttt{aa}$ occupies positions $4$ and $5$. They do not overlap.

Any matching prefix and suffix of length $3$ or more would overlap, so the answer is $2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T14:24:04.618Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n = s.size() , ans = 0;
	for(int len = 0 ; len < n/2 ; len++){
	    if(s.substr(0 , len) == s.substr(n - len , len)){
	        ans = len;
	    }
	}
	cout<<ans<<endl;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/NONOVER)