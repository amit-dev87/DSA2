# SANAGRA

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sentence Anagrams

You are developing a feature for a plagiarism detection tool. A simple check determines whether two sentences contain the same words arranged in a different order.

Given two sentences, determine whether they are  **sentence anagrams**. Two sentences are sentence anagrams if they contain exactly the same words with the same frequencies, regardless of letter case or word order.

A  **word**  is a sequence of consecutive English letters (`A`–`Z` or `a`–`z`). All non-letter characters, including spaces, punctuation, and digits, act as separators. For example, `hello-world` contains two words: `hello` and `world`.

If neither sentence contains any words, they are considered anagrams.

### Input Format

The input consists of two lines.

- The first line contains the first sentence.
- The second line contains the second sentence.
### Output Format
- Print "The sentences are anagrams." if the two sentences are anagrams.
- Otherwise, print "The sentences are not anagrams.".
### Constraints
- The length of each sentence is between $1$ and $10^5$ characters, inclusive.
- Each character is a printable ASCII character with a value between $32$ and $126$, inclusive.
- All non-letter characters, including digits, act as word separators.
### Sample 1:
Input
Output

```
The quick brown fox
Brown fox the quick
```

```
The sentences are anagrams.
```

### Explanation:

Both sentences contain the words `the`, `quick`, `brown`, and `fox` exactly once, ignoring case.

### Sample 2:
Input
Output

```
Hello, world! Hello.
WORLD-hello hello
```

```
The sentences are anagrams.
```

### Explanation:

Both sentences contain `hello` twice and `world` once. Punctuation separates the words, and case does not affect the comparison.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-16T14:02:55.063Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s , string t){
    int freq[256] = {0};
    for(char c : s){
        if(c != ' '){
            freq[tolower(c)]++;
        }
    }
    for(char c : t){
        if(c != ' '){
            freq[tolower(c)]--;
        }
    }
    for(int i = 0 ; i < 256 ; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main() {
	string a;
	getline(cin , a);
	string b;
	getline(cin , b);
	if(isAnagram(a,b)){
	    cout<< "The sentences are anagrams.";
	}else{
	    cout<< "The sentences are not anagrams.";
	}
	

}


```

---

[View on CodeChef](https://www.codechef.com/problems/SANAGRA)