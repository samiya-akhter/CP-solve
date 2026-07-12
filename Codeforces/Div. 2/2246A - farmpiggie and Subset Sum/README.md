# A. farmpiggie and Subset Sum
 
| Field | Value |
|---|---|
| **Contest** | [2246](https://codeforces.com/contest/2246) |
| **Problem** | [2246A — farmpiggie and Subset Sum](https://codeforces.com/contest/2246/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

For a permutation`^∗` `p` of even length, you can do the following process:

 - Initialize a counter `c = 0.`
- For each `i` from `1` to `n,` either add `i · p_i` to `c`, subtract `i · p_i` from `c`, or do nothing.

 Let the final value of the counter be `c_final.`Formally, for each `i ∈ {1,…,n},` consider the set `S_i = {-i · p_i, 0, i · p_i}` and choose some `x_i ∈ S_i.` Set `c_final = Σ_i = 1^nx_i.`

You are given a single **even** integer `n`. Find any permutation of length `n` so that regardless of the operations chosen, the final value `c_final` will not be `1.`

`^∗`A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 25`). The description of the test cases follows.

The first and only line of each test case contains a single **even** integer `n (2 ≤ n ≤ 50)` — the length of the desired permutation.

## Output

For each test case, output `n` integers `p_1, …, p_n (1 ≤ p_i ≤ n)` — a permutation satisfying the conditions.

If there are multiple solutions, print any of them.

## Examples

**Example:**

```
3
2
4
6
```

**Output:**

```
2 1
2 3 4 1
5 4 6 2 1 3 

```

## Note

In the first test case, the permutation given in the output is `[2,1].` The counter may be incremented in the following `9` ways: 

 - `0 xrightarrow+2 · 1 2 xrightarrow+0 2`
- `0 xrightarrow+0 2 xrightarrow+1 · 2 2`
- `0 xrightarrow-2 · 1 -2 xrightarrow+0 -2`
- `0 xrightarrow+0 2 xrightarrow-1 · 2 -2`
- `0 xrightarrow-2 · 1 -2 xrightarrow+1 · 2 0`
- `0 xrightarrow+2 · 1 2 xrightarrow-1 · 2 0`
- `0 xrightarrow-2 · 1 -2 xrightarrow-1 · 2 -4`
- `0 xrightarrow+2 · 1 2 xrightarrow+1 · 2 4.`
- `0 xrightarrow+0 0 xrightarrow+0 0.`

 None of these are `1,` so the permutation satisfies the given condition.We can show that the permutation given in the second test case satisfies the condition. However, the permutation `[1,2,3,4]` would not satisfy the condition, since the sequence `0 xrightarrow+1 · 1 1 xrightarrow+0 1 xrightarrow+0 1 xrightarrow+0 1` results in `c = 1` at the end.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2246/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
