# 1091. Concert Tickets

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1091 — Concert Tickets](https://cses.fi/problemset/task/1091/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-09 11:48:52 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19017675/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

There are $n$ concert tickets available, each with a certain price. Then, $m$ customers arrive, one after another.

Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

## Input

The first input line contains integers $n$ and $m$: the number of tickets and the number of customers.

The next line contains $n$ integers $h_1,h_2,…,h_n$: the price of each ticket.

The last line contains $m$ integers $t_1,t_2,…,t_m$: the maximum price for each customer in the order they arrive.

## Output

Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.

If a customer cannot get any ticket, print $-1$.

## Constraints

- $1 ≤ n, m ≤ 2 · 10⁵$
- $1 ≤ h_i, t_i ≤ 10⁹$

## Examples

**Example:**

**Input:**
```
5 3
5 3 7 8 5
4 8 3
```

**Output:**
```
3
8
-1
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1091/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
