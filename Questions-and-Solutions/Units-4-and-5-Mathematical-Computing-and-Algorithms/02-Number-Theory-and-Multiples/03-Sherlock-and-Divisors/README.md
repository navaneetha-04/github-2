# Sherlock and Divisors (Even Divisor Enumeration)

## 1. Problem Title
- **Title:** Sherlock and Divisors (Even Divisor Enumeration)
- **Problem ID:** `U4-02-03`
- **Topic Section:** 02. Number Theory & Multiples
- **Difficulty:** Easy
- **Language:** C++14
- **Status:** Pending

## 2. HackerRank Problem Link
- **HackerRank Link:** [Sherlock and Divisors](https://www.hackerrank.com/challenges/sherlock-and-divisors/problem)

## 3. Problem Statement Summary
Given an integer `N`, find the number of divisors of `N` that are divisible by `2`.

## 4. Objective
Enumerate paired divisors `(d, N / d)` up to `sqrt(N)` in `O(sqrt(N))` time and filter for even divisors.

## 5. Algorithm
1. If `N % 2 != 0`, return `0` immediately (an odd number has no even divisors).
2. Iterate `d` from `1` up to `d * d <= N`: if `N % d == 0`, check whether `d % 2 == 0` and (if `d != N / d`) whether `(N / d) % 2 == 0`.

## 6. Step-by-Step Procedure
1. **Step 1 (Odd Quick-Exit):** Return `0` when `N` is odd.
2. **Step 2 (Square-Root Divisor Scan):** Check divisor pairs `(d, N / d)` up to `sqrt(N)`.

## 7. C++ Source Code (`solution.cpp`)
```cpp
// ============================================================================
// Problem ID   : U4-02-03
// Title        : Sherlock and Divisors
// HackerRank   : https://www.hackerrank.com/challenges/sherlock-and-divisors/problem
// Standard     : C++14
// Status       : Pending (Not yet uploaded / verified in user submissions)
// ============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    // Fast standard I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // TODO: Pending verified HackerRank C++14 submission.
    // Implement and verify solution at: https://www.hackerrank.com/challenges/sherlock-and-divisors/problem

    return 0;
}
```

## 8. Sample Input and Output

### Sample Input
```text
2
9
8
```

### Sample Output
```text
0
3
```

## 9. Time Complexity
- **Time Complexity:** `O(T * sqrt(N))`

## 10. Auxiliary Space Complexity
- **Auxiliary Space Complexity:** `O(1)`

## 11. Explanation of the Program
Marked as **Pending** (not yet uploaded). Covers the **Number theory problems** subtopic in Units 4 & 5 Section 2.
