# Summing the N Series (Telescoping Series & Modular Arithmetic)

## 1. Problem Title
- **Title:** Summing the N Series (Telescoping Series & Modular Arithmetic)
- **Problem ID:** `U4-03-02`
- **Topic Section:** 03. Modular Arithmetic
- **Difficulty:** Easy
- **Language:** C++14
- **Status:** Pending

## 2. HackerRank Problem Link
- **HackerRank Link:** [Summing the N series](https://www.hackerrank.com/challenges/summing-the-n-series/problem)

## 3. Problem Statement Summary
Given a sequence whose `n`-th term is `T_n = n^2 - (n - 1)^2`, evaluate the sum `S_n = T_1 + T_2 + ... + T_n` modulo `10^9 + 7` for `n` up to `10^16`.

## 4. Objective
Collapse a telescoping series `sum_{k=1}^n (k^2 - (k-1)^2) = n^2` and apply modular reduction before multiplication (`((n % MOD) * (n % MOD)) % MOD`).

## 5. Algorithm
1. Observe that `(1^2 - 0^2) + (2^2 - 1^2) + ... + (n^2 - (n-1)^2)` telescopes to `n^2`.
2. Since `n` can be `10^16`, reduce `n %= 1000000007` first so `n * n` fits in a 64-bit `long long`.
3. Return `(n * n) % 1000000007`.

## 6. Step-by-Step Procedure
1. **Step 1 (Telescoping Cancellation):** Cancel intermediate terms `+k^2` and `-k^2` so `S_n = n^2`.
2. **Step 2 (Pre-Multiplication Modulo):** Compute `long long rem = n % 1000000007LL` and print `(rem * rem) % 1000000007LL`.

## 7. C++ Source Code (`solution.cpp`)
```cpp
// ============================================================================
// Problem ID   : U4-03-02
// Title        : Summing the N series
// HackerRank   : https://www.hackerrank.com/challenges/summing-the-n-series/problem
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
    // Implement and verify solution at: https://www.hackerrank.com/challenges/summing-the-n-series/problem

    return 0;
}
```

## 8. Sample Input and Output

### Sample Input
```text
2
2
1
```

### Sample Output
```text
4
1
```

## 9. Time Complexity
- **Time Complexity:** `O(1) per test case`

## 10. Auxiliary Space Complexity
- **Auxiliary Space Complexity:** `O(1)`

## 11. Explanation of the Program
Marked as **Pending** (not yet uploaded). Covers the **Telescoping series** and **Modular operations** subtopics in Units 4 & 5 Section 3.
