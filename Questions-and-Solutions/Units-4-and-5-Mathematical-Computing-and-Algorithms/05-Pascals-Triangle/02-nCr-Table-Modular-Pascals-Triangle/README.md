# nCr Table (Modular Pascal's Triangle)

## 1. Problem Title
- **Title:** nCr Table (Modular Pascal's Triangle)
- **Problem ID:** `U4-05-02`
- **Topic Section:** 05. Pascal's Triangle
- **Difficulty:** Easy
- **Language:** C++14
- **Status:** Pending

## 2. HackerRank Problem Link
- **HackerRank Link:** [nCr table](https://www.hackerrank.com/challenges/ncr-table/problem)

## 3. Problem Statement Summary
Given an integer `n` (`n < 1000`), print the `n`-th row of Pascal's Triangle (`nC0, nC1, ..., nCn`) modulo `10^9`.

## 4. Objective
Combine Pascal's Triangle dynamic programming with modular addition `(triangle[i - 1][j - 1] + triangle[i - 1][j]) % 10^9` when the modulus (`10^9`) is composite and Fermat's Little Theorem cannot be used.

## 5. Algorithm
1. Pre-compute Pascal's Triangle up to row `N = 1000` using `dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 1000000000`.
2. For each query `n`, output `dp[n][0..n]`.

## 6. Step-by-Step Procedure
1. **Step 1 (Why Pascal's DP is Required):** Because `10^9` is not prime, modular inverse factorials via Fermat's Little Theorem do not exist for factors of `2` and `5`. Additive DP modulo `10^9` works for any modulus.
2. **Step 2 (Row Output):** Print `dp[n][0]` through `dp[n][n]` separated by spaces.

## 7. C++ Source Code (`solution.cpp`)
```cpp
// ============================================================================
// Problem ID   : U4-05-02
// Title        : nCr table
// HackerRank   : https://www.hackerrank.com/challenges/ncr-table/problem
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
    // Implement and verify solution at: https://www.hackerrank.com/challenges/ncr-table/problem

    return 0;
}
```

## 8. Sample Input and Output

### Sample Input
```text
3
2
4
5
```

### Sample Output
```text
1 2 1
1 4 6 4 1
1 5 10 10 5 1
```

## 9. Time Complexity
- **Time Complexity:** `O(N^2) pre-computation, O(N) per query`

## 10. Auxiliary Space Complexity
- **Auxiliary Space Complexity:** `O(N^2)`

## 11. Explanation of the Program
Marked as **Pending** (not yet uploaded). Covers the **Modular arithmetic** subtopic in Units 4 & 5 Section 5 (Pascal's Triangle).
