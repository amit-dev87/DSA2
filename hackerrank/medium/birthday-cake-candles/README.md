# Mini-Max Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are in charge of the cake for a child's birthday. It will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Your task is to count how many candles are the tallest.

**Example**  

$candles = [4, 4, 1, 3]$

The tallest candles are `4` units high. There are `2` candles with this height, so the function should return `2`.

**Function Description**

Complete the function $birthdayCakeCandles$ with the following parameter(s):

- $int\ candles[n]$: the candle heights     

**Returns**  

- $int$: the number of candles that are tallest


**Input Format**

The first line contains a single integer, $n$, the size of $candles[]$.  	
The second line contains $n$ space-separated integers, where each integer $i$ describes the height of $candles[i]$.

**Constraints**

- $1 \le n \le 10^{5}$  
- $1 \le candles[i] \le 10^{7}$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-23T08:31:46.677Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    int mn = arr[0] ,mx = arr[0] ;
    long long total = 0;
  for(int i = 0 ; i < arr.size() ; i++){
    total += arr[i];
    mn = min(mn , arr[i]);
    mx = max(mx , arr[i]);
  } 
  cout<<total  - mx<<" "<<total - mn<<endl;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

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

[View on HackerRank](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)