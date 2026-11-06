# Variable Sized Arrays (Jagged 2D Vectors)

## 1. Problem Title
- **Title:** Variable Sized Arrays (Jagged 2D Vectors)
- **Problem ID:** `U3-06-02`
- **Topic Section:** 06. Dynamic Arrays
- **Difficulty:** Easy
- **Language:** C++14
- **Status:** Pending

## 2. HackerRank Problem Link
- **HackerRank Link:** [Variable Sized Arrays](https://www.hackerrank.com/challenges/variable-sized-arrays/problem)

## 3. Problem Statement Summary
Given `n` variable-length integer arrays where the `i`-th array has length `k_i`, answer `q` point lookup queries `(i, j)` by printing the `j`-th element of the `i`-th array.

## 4. Objective
Construct jagged 2D arrays using `std::vector<std::vector<int>>` where each row is sized dynamically at runtime.

## 5. Algorithm
1. Read `n` and `q`.
2. Allocate `std::vector<std::vector<int>> a(n)`.
3. For each row `i` from `0` to `n - 1`, read `k`, resize `a[i].resize(k)`, and read `k` integers.
4. For each of the `q` queries, read `(i, j)` and print `a[i][j]`.

## 6. Step-by-Step Procedure
1. **Step 1 (Row Allocation):** Read `k` for each row and allocate exact capacity `a[i].resize(k)`.
2. **Step 2 (Populate Elements):** Read `k` space-separated integers into `a[i]`.
3. **Step 3 (Answer Queries):** Perform `O(1)` random access `a[i][j]` for each query.

## 7. C++ Source Code (`solution.cpp`)
```cpp
// ============================================================================
// Problem ID   : U3-06-02
// Title        : Variable Sized Arrays
// HackerRank   : https://www.hackerrank.com/challenges/variable-sized-arrays/problem
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
    // Implement and verify solution at: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

    return 0;
}
```

## 8. Sample Input and Output

### Sample Input
```text
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```

### Sample Output
```text
5
9
```

## 9. Time Complexity
- **Time Complexity:** `O(Sum(K_i) + Q)`

## 10. Auxiliary Space Complexity
- **Auxiliary Space Complexity:** `O(Sum(K_i))`

## 11. Explanation of the Program
Marked as **Pending** (not yet uploaded). Covers the **Variable-sized 2D vectors** subtopic in Unit 3 Section 6.
