# [Hasinar Shornomudra](https://toph.co/p/hasinar-shornomudra)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Hasinar Shornomudra](https://toph.co/p/hasinar-shornomudra) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [1927561](https://toph.co/s/1927561) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement

After the dramatic fall of the fascist regime and the fleeing of Sheikh Hasina on August 5th, the Gonobhaban was filled with joy. Even though Hasina escaped with most of the country’s wealth, she couldn’t fit all the gold bars into her two suitcases. Some bars were left behind in the Gonobhaban.

Mumin Farhana, a gold bar activist, decided that the N gold bars should be shared among the loyal defenders of the revolution. She will divide the gold bars into piles for her loyal defenders. She proposed the following rules to her friend Afroza Shaone to divide the gold bars:

- The gold bars must be divided into at least two piles.
- The total number of gold bars in all piles must be exactly N.
- The sizes of the piles must be such that, **the smallest number** that is a **multiple** of all pile sizes is exactly N.

Hasmat, a true admirer of Mumin, argued that this is not always possible. To resolve the dispute, you must determine whether such a division is possible for a given N.

## Input

The first line contains a single integer T - the number of test cases.

Each of the next T lines contains one integer N - the number of gold bars left in Gonobhaban.

- 1 ≤ T ≤ 1000
- 2 ≤ N ≤ 10⁹

## Output

For each test case, print:

- **YES** if the bars can be divided following the rules.
- **!YES** if otherwise. (To keep both the girls happy) :3

## Sample Tests

**Sample Input:**

```
5
50
2
34
100000006
223423489
```

**Sample Output:**

```
YES
!YES
YES
YES
YES
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
