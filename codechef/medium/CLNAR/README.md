# CLNAR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Signal Propagation

There are $N$ stations arranged in a line. Station $i$ initially has a signal strength of $A_i$.

Every second, stations $1$ through $N-1$ are processed  **in increasing order**. For each station $i$, if $A_i < A_{i+1}$, set $A_i = A_{i+1}$. Otherwise, leave $A_i$ unchanged. Station $N$ never changes.

The network is  **stable**  if no signal strength changes when this process is performed.

Find the minimum number of seconds required for the network to become stable. If it is already stable, print $0$.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains an integer $N$, the number of stations. The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$, the initial signal strengths.
### Output Format

For each test case, print the minimum number of seconds required for the network to become stable on a separate line.

### Constraints
- $1 \le T \le 10^5$
- $1 \le N \le 3 \cdot 10^5$
- $1 \le A_i \le N$
- The sum of $N$ over all test cases does not exceed $3 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
4
4 3 2 1
5
1 2 5 3 2
6
2 1 3 1 2 6
```

```
0
2
5
```

### Explanation:
- Test case 1: No signal strength changes when the process is performed. The network is already stable.
- Test case 2: The signal strengths change as follows: After $1$ second: $[2,5,5,3,2]$ After $2$ seconds: $[5,5,5,3,2]$ No further changes occur, so the answer is $2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T14:44:41.617Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++){
	        cin>>arr[i];
	    }
	    int ans = 0;
	    int m = arr[n-1] , p = n-1;
	    for(int i = n-2 ; i >= 0  ; i--){
	        if(arr[i] < m){
	            ans = max(ans , p - i);
	        }else{
	            m = arr[i];
	            p=i;
	        }
	    }
	    cout<<ans<<endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLNAR)