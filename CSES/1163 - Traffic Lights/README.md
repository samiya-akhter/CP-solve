# 1163. Traffic Lights

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1163 — Traffic Lights](https://cses.fi/problemset/task/1163/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-09 21:28:08 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19023531/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

There is a street of length $x$ whose positions are numbered $0,1,…,x$. Initially there are no traffic lights, but $n$ sets of traffic lights are added to the street one after another.

Your task is to calculate the length of the longest passage without traffic lights after each addition.

## Input

The first input line contains two integers $x$ and $n$: the length of the street and the number of sets of traffic lights.

Then, the next line contains $n$ integers $p_1,p_2,…,p_n$: the position of each set of traffic lights. Each position is distinct.

## Output

Print the length of the longest passage without traffic lights after each addition.

## Constraints

- $1 ≤ x ≤ 10⁹$
- $1 ≤ n ≤ 2 · 10⁵$
- $0 < p_i < x$

## Examples

**Example:**

**Input:**
```
8 3
3 6 2
```

**Output:**
```
5 3 3
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1163/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
