# Sherlock and GCD (Subset Coprimality via Euclidean Algorithm)

## 1. Problem Title
- **Title:** Sherlock and GCD (Subset Coprimality via Euclidean Algorithm)
- **Problem ID:** `U4-01-02`
- **Topic Section:** 01. Greatest Common Divisor & Area Tiling
- **Difficulty:** Easy
- **Language:** C++14
- **Status:** Pending

## 2. HackerRank Problem Link
- **HackerRank Link:** [Sherlock and GCD](https://www.hackerrank.com/challenges/sherlock-and-gcd/problem)

## 3. Problem Statement Summary
Given an array `A` of `N` positive integers, determine if there exists any non-empty subset of `A` whose greatest common divisor is `1` (i.e., no integer `k > 1` divides every element of the subset).

## 4. Objective
Use the number-theoretic property that a subset with `GCD == 1` exists if and only if the `GCD` of the entire array equals `1`.

## 5. Algorithm
1. Read array `A` of size `N`.
2. Compute running `g = A[0]`, then `g = gcd(g, A[i])` for `i = 1..N-1`.
3. Print `YES` if `g == 1`, otherwise `NO`.

## 6. Step-by-Step Procedure
1. **Step 1 (Full-Array GCD):** Fold `gcd` across all elements of `A`.
2. **Step 2 (Check Coprimality):** Output `YES` if `g == 1`, else `NO`.

## 7. C++ Source Code (`solution.cpp`)
```cpp
// ============================================================================
// Problem ID   : U4-01-02
// Title        : Sherlock and GCD
// HackerRank   : https://www.hackerrank.com/challenges/sherlock-and-gcd/problem
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
    // Implement and verify solution at: https://www.hackerrank.com/challenges/sherlock-and-gcd/problem

    return 0;
}
```

## 8. Sample Input and Output

### Sample Input
```text
3
3
1 2 3
2
2 4
3
5 5 5
```

### Sample Output
```text
YES
NO
NO
```

## 9. Time Complexity
- **Time Complexity:** `O(N log(max(A)))`

## 10. Auxiliary Space Complexity
- **Auxiliary Space Complexity:** `O(1)`

## 11. Explanation of the Program
Marked as **Pending** (not yet uploaded). Reinforces the **Euclidean Algorithm** and **GCD** subtopics in Units 4 & 5 Section 1.
