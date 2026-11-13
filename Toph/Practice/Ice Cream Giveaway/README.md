# [Ice Cream Giveaway](https://toph.co/p/ice-cream-giveaway)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Ice Cream Giveaway](https://toph.co/p/ice-cream-giveaway) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2016535](https://toph.co/s/2016535) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement

Parvez loves ice creams, but is also very health-conscious since his belly is getting bigger. Every week, he sets a calorie limit x and decides to stop eating ice cream for the rest of the week once he reaches or exceeds this limit. However, his cravings override his rules, allowing him to eat until the day’s end before the week-long restraint begins.

He eats different flavors of ice creams, each with a certain number of calories per serving. The available flavors and their calorie values are provided as input.

On each weekday, Parvez eats a fixed sequence of servings of ice cream flavors:

- Day 1 (Monday): Different servings of each flavor.
- Day 2 (Tuesday): Different servings of each flavor.
- ...
- Day 5 (Friday): Different servings of each flavor.

Your task is to determine:

1. **The weekday** on which Parvez will say, *"Ar khabona {flavorName}"* if he reaches or exceeds his calorie limit. If he doesn’t reach his calorie limit by the end of the week, output **"*Diet control na korleo cholbe.***".
2. The **exact calorie count** Parvez consumed on the last day he ate ice cream.

## Input

An integer x (1 ≤ x ≤ 10⁶)— the calorie limit for the week.

An integer n (1≤ n ≤ 10) — the number of ice cream flavors available.

n lines, each containing:

- A string name (the name of the ice cream flavor, with no spaces).
- An integer c (1 ≤ c ≤ 1000) — the calorie value per serving.

Each containing n integers (s₁, s₂, ..., sₙ), representing the number of servings of each flavor eaten on that day (Monday to Friday).

​For each i from 1 to n the value of sᵢ will be within(0≤sᵢ≤1000)

---

## Output

If Parvez reaches or exceeds the calorie limit during the week, output:

> Day
>
> Total Calories Consumed
>
> Ar khabona {flavorName}

I Parvez does not reach the calorie limit by the end of the week, output:

> Diet control na korleo cholbe
>
> Total Calories Consumed

## Sample Tests

**Sample Input 1:**

```
1000
3
BlueberryYogurt 100
Butterscotch 200
Chocolate 300
0 0 1
0 0 1
0 0 1
0 0 1
0 0 1
```

**Sample Output 1:**

```
Thursday
1200
Ar khabo na Chocolate
```

**Sample Input 2:**

```
1000
3
BlueberryYogurt 100
Butterscotch 200
Vanila 300
1 0 0
0 4 0
0 0 0
0 0 0
0 0 0
```

**Sample Output 2:**

```
Diet control na korleo cholbe.
900
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
