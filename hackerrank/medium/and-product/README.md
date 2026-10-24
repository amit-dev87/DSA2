# AND Product

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
**Submitted:** 2026-10-24T08:13:12.446Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'andProduct' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER a
 *  2. LONG_INTEGER b
 */

long andProduct(long a, long b) {
    int ans = 0;
    while(b>a){
        b = b&(b-1);
    }
    return b;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    for (int n_itr = 0; n_itr < n; n_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        long a = stol(first_multiple_input[0]);

        long b = stol(first_multiple_input[1]);

        long result = andProduct(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/and-product/problem)