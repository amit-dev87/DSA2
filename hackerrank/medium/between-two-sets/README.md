# Number Line Jumps

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

There will be two arrays of integers.  Determine all integers that satisfy the following two conditions:  

1. The elements of the first array are all factors of the integer being considered
2. The integer being considered is a factor of all elements of the second array

These numbers are referred to as being *between* the two arrays.  Determine how many such numbers exist.

**Example**  
$a = [2, 6]$  
$b = [24, 36]$  

There are two numbers between the arrays: $6$ and $12$.  
$6\%2 = 0$, $6\%6 = 0$, $24\%6 = 0$ and $36\%6 = 0$ for the first value.   
$12\%2 = 0$, $12\%6 = 0$ and $24\%12 = 0$, $36\%12 = 0$ for the second value.
Return $2$.

**Function Description**  

Complete the *getTotalX* function in the editor below.  It should return the number of integers that are betwen the sets.  

getTotalX has the following parameter(s):  

- *int a[n]*: an array of integers  
- *int b[m]*: an array of integers  

**Returns**  

- *int:* the number of integers that are between the sets


**Input Format**

The first line contains two space-separated integers, $n$ and $m$, the number of elements in arrays $a$ and $b$. 		
The second line contains $n$ distinct space-separated integers $a[i]$ where $0 \le i \lt n$. 		
The third line contains $m$ distinct space-separated integers $b[j]$ where $0 \le j \lt m$.


**Constraints**

- $1 \le n, m \le 10$
- $1 \le a[i] \le 100$
- $1 \le b[j] \le 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T03:51:58.170Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    if( v1 > v2 && (x2 - x1) % (v1 - v2) == 0 ){
        return "YES";
    }else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int x1 = stoi(first_multiple_input[0]);

    int v1 = stoi(first_multiple_input[1]);

    int x2 = stoi(first_multiple_input[2]);

    int v2 = stoi(first_multiple_input[3]);

    string result = kangaroo(x1, v1, x2, v2);

    fout << result << "\n";

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

[View on HackerRank](https://www.hackerrank.com/challenges/between-two-sets/problem)