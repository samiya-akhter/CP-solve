# 1084. Apartments

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1084 — Apartments](https://cses.fi/problemset/task/1084/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-09-26 09:53:34 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/18866353/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

There are $n$ applicants and $m$ free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.

Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.

## Input

The first input line has three integers $n$, $m$, and $k$: the number of applicants, the number of apartments, and the maximum allowed difference.

The next line contains $n$ integers $a_1, a_2, …, a_n$: the desired apartment size of each applicant. If the desired size of an applicant is $x$, they will accept any apartment whose size is between $x-k$ and $x+k$.

The last line contains $m$ integers $b_1, b_2, …, b_m$: the size of each apartment.

## Output

Print one integer: the number of applicants who will get an apartment.

## Constraints

- $1 ≤ n, m ≤ 2 · 10⁵$
- $0 ≤ k ≤ 10⁹$
- $1 ≤ a_i, b_i ≤ 10⁹$

## Examples

**Example:**

**Input:**
```
4 3 5
60 45 80 60
30 60 75
```

**Output:**
```
2
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1084/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
