# Grading Students

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.  

In the diagram below: 

- The red region denotes the house, where $s$ is the start point, and $t$ is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right. 
- Assume the trees are located on a single point, where the apple tree is at point $a$, and the orange tree is at point $b$.
- When a fruit falls from its tree, it lands $d$ units of distance from its tree of origin along the $x$-axis. *A negative value of $d$ means the fruit fell $d$ units to the tree's left, and a positive value of $d$ means it falls $d$ units to the tree's right. *

![Apple and orange(2).png](https://s3.amazonaws.com/hr-challenge-images/25220/1474218925-f2a791d52c-Appleandorange2.png)

Given the value of $d$ for $m$ apples and $n$ oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range $[s, t]$)?

For example, Sam's house is between $s = 7$ and $t = 10$.  The apple tree is located at $a = 4$ and the orange at $b = 12$.  There are $m = 3$ apples and $n = 3$ oranges.  Apples are thrown $apples = [2, 3, -4]$ units distance from $a$, and $oranges = [3, -2, -4]$ units distance.  Adding each apple distance to the position of the tree, they land at $[4 + 2, 4 + 3, 4 + -4] = [6, 7, 0]$.  Oranges land at $[12 + 3, 12 + -2, 12 + -4] = [15, 10, 8]$.  One apple and two oranges land in the inclusive range $7-10$ so we print 

    1
    2

**Function Description**  

Complete the *countApplesAndOranges* function in the editor below.  It should print the number of apples and oranges that land on Sam's house, each on a separate line.  

countApplesAndOranges has the following parameter(s):  

- *s*: integer, starting point of Sam's house location.       
- *t*: integer, ending location of Sam's house location.     
- *a*: integer, location of the Apple tree.      
- *b*: integer, location of the Orange tree.         
- *apples*: integer array, distances at which each apple falls from the tree.      
- *oranges*: integer array, distances at which each orange falls from the tree.  

**Input Format**

The first line contains two space-separated integers denoting the respective values of $s$ and $t$.		
The second line contains two space-separated integers denoting the respective values of $a$ and $b$.		
The third line contains two space-separated integers denoting the respective values of $m$ and $n$.			
The fourth line contains $m$ space-separated integers denoting the respective distances that each apple falls from point $a$.		
The fifth line contains $n$ space-separated integers denoting the respective distances that each orange falls from point $b$.

**Constraints**

* $1 \le s, t, a, b, m, n \le 10^{5} $
* $-10^{5} \le d \le 10^{5} $
* $ a < s < t < b $

**Output Format**

Print two integers on two different lines:

1. The first integer:  the number of apples that fall on Sam's house.
2. The second integer:  the number of oranges that fall on Sam's house.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T16:26:43.042Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    vector<int>ans;
    for(int i : grades){
        if(i < 38){
            ans.push_back(i);
        }else{
            int n = round((i+4)/5)*5;
            if(n-i >= 3){
                ans.push_back(i);
            }else{
                ans.push_back(n);
            }
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/apple-and-orange/problem)