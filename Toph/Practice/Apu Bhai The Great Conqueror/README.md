# [Apu Bhai: The Great Conqueror](https://toph.co/p/apu-bhai-the-great-conqueror)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Apu Bhai: The Great Conqueror](https://toph.co/p/apu-bhai-the-great-conqueror) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2016604](https://toph.co/s/2016604) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement

Apu Bhai, a great conqueror, has conquered all the big armies of different regions. His disciple, Rafy, asks him about his strategy. Apu Bhai replies, "It was observation."

Now, Rafy is going to practice this observation. The observation is: “Always take more armies than the region you're going to attack have.”

You are given a list of army counts for all regions in order, from 1 to N. If Apu Bhai asks you to attack the regions in the range [L,R], you must determine the total army present in those regions.

## Input

The first line contains a single integer n (2<=n<=10⁵) — the number of total regions.

The second line contains n integers aᵢ (0<=aᵢ<=10⁹). aᵢ is the size of army of the i th region.

The third line contains a single integer q (1<=q<=10⁵) — the number of queries.

Each of the next q lines contains two integers L and R (1<=L<=R<=n) — the 1-based range boundaries.

## Output

For each query, output the total number of armies which are in regions L to R.

## Sample Tests

**Sample Input:**

```
5
3 2 1 6 8
5
1 5
2 4
2 2
3 3
4 5
```

**Sample Output:**

```
20
9
2
1
14
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
