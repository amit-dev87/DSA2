# WEEKEV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Weekend Events

Chef has received $N$ requests to organize events over a weekend of $48$ hours.

Event $i$ starts at hour $S_i$, ends at hour $E_i$, and offers a payment of $C_i$ rupees. Chef receives the payment only if he attends the entire event.

Chef can organize only one event at a time, so the events he chooses must not overlap. However, he can attend an event that starts exactly when another chosen event ends.

Find the maximum total payment Chef can earn by choosing which events to organize.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains an integer $N$, the number of events. Each of the next $N$ lines contains three space-separated integers $S_i$, $E_i$, and $C_i$ — the starting hour, ending hour, and payment for event $i$.
### Output Format

For each test case, print the maximum total payment Chef can earn on a separate line.

### Constraints
- $1 \le T \le 10$
- $1 \le N \le 2000$
- $0 \le S_i \lt E_i \le 48$
- $0 \le C_i \le 10^6$
- All starting and ending times are integers measured from the beginning of the weekend.
### Sample 1:
Input
Output

```
2
4
0 3 40
3 6 50
0 6 80
6 8 30
3
2 10 100
3 5 40
6 9 50
```

```
120
100
```

### Explanation:
- Test case 1: Chef can organize events $1$, $2$, and $4$, earning $40 + 50 + 30 = 120$ rupees. Each event starts exactly when the previous one ends, so they do not overlap.
- Test case 2: Organizing event $1$ alone earns $100$ rupees. It overlaps with both other events, so neither can be chosen with it. Organizing events $2$ and $3$ instead earns $40 + 50 = 90$ rupees. Therefore, the maximum payment is $100$ rupees.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T14:11:19.874Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/WEEKEV)