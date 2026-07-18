# A. Iskander and Drawings
 
| Field | Value |
|---|---|
| **Contest** | [2244](https://codeforces.com/contest/2244) |
| **Problem** | [2244A — Iskander and Drawings](https://codeforces.com/contest/2244/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | dp, games, greedy, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

During a geometry lesson, Iskander got very bored, so he decided to draw in Yura's notebook. To do this, he took a row and drew horizontal lines on it. Some lines are long, some are short, and some parts of the page remain empty.

The page is represented by a string `s`, where the character '*' denotes an empty part of the paper, and the character '#' denotes one centimeter of a drawn line. A continuous sequence of '#' characters forms a single line.

Yura decided to erase all the lines and made Iskander help him: they will erase one of the lines from both ends simultaneously.

 - Each second, Iskander erases `1` centimeter from the right end of the line, and Yura erases `1` centimeter from the left end.
- If the current length of the line is `1` or `2` centimeters, then in the next second it is erased completely, and the process ends.

Yura wants to choose a line so that, together with Iskander, they erase it for as long as possible. Help him determine this maximum time. If there are no lines on the page, the answer is `0` seconds.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 2500`) — the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 10`) — the length of the string `s`.

The second line of each test case contains a string `s` of length `n`, consisting of characters '#' and '*'.

## Output

For each test case, output a single integer — the maximum time required to erase a line.

## Examples

**Example:**

```
5
7
#*##*##
8
########
8
********
8
#*****##
6
*#####
```

**Output:**

```
1
4
0
1
3
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2244/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
