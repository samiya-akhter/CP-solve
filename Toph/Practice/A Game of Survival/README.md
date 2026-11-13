# [A Game of Survival](https://toph.co/p/a-game-of-survival)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [A Game of Survival](https://toph.co/p/a-game-of-survival) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2015548](https://toph.co/s/2015548) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement

In a small village, a group of cats is on a mission to catch mice. However, catching mice is not as easy as it seems, as the cats have certain limitations on how far they can chase.

Each scenario consists of n positions arranged in a line, represented as an array. Each position contains either a cat or a mouse.

- 'M' represents a mouse.
- 'C' represents a cat.

The task is to determine the maximum number of mice that can be caught, following these conditions:

### *Rules of the Chase:*

1. Each cat can catch at most one mouse. A cat cannot chase multiple mice.
2. Each mouse can be caught by only one cat. If multiple cats can reach the same mouse, only one of them succeeds.
3. A cat can catch a mouse only if the distance between them is at most K. If the distance is greater than K, the mouse escapes.
4. Neither the cats nor the mice move from their initial positions.

## Input

The input contains multiple test cases.

- The first line contains an integer t (1 ≤ t ≤ 500), representing the number of test cases.

For each test case:

- The first line contains two integers n (1 ≤ n ≤ 100,000) and K (1 ≤ K≤ 1000), representing the number of positions and the maximum distance a cat can chase a mouse.
- The second line contains of n characters, where each character is either `'C'` (representing a cat) or `'M'` (representing a mouse).

It is guaranteed that the sum of n over all test cases does not exceed 10⁷.

## Output

For each test case, output a single integer — the maximum number of mice that can be caught for that test case.

## Sample Tests

**Sample Input:**

```
2
5 2
C M C M C
6 1
M M C C M M
```

**Sample Output:**

```
2  
2
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
