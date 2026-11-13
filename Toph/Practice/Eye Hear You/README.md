# [Eye Hear You](https://toph.co/p/eye-hear-you)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Eye Hear You](https://toph.co/p/eye-hear-you) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2016222](https://toph.co/s/2016222) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 256 MB |

---

## Problem Statement

The AUST CSE CARNIVAL 6.0 is in full swing, and the air is buzzing with excitement. But behind the scenes, a challenge emerges: how to keep sensitive information safe from prying eyes? Mushfiq and Zahinul, responsible for passing secret messages between organizers, are stumped. Their attempts at secrecy are foiled by nosy onlookers and clever guessers.

To solve this, they consult Rakib, the go-to person for tricky problems. After a quick brainstorming session (and a cup of extra-strong coffee), Rakib proposes an **encryption method**:

- Rotate each **English alphabet** in the message by a key which is the sender's batch number.
- If the key is positive, rotate **forward** in the alphabet; if negative, rotate **backward**. *(N:B: Here rotating means if it reaches:* ’z’ *it will start from* ’a’ *again in case of forward)*
- Rotate capital and small letter alphabet separately
- Non-alphabetic characters remain unchanged.
- If the key is 0, the message stays the same.

![image](https://uploads.toph.co/rJbYzKNO51P-6QF2Kdruu-zBRbmFxF-eyWVhbEN1u8k/resize:fit:468::0/dpr:1/czM6Ly90b3BoLXBsYXRmb3JtLXVwbG9hZHMvaW1hZ2VzLzE3NTU4NzAwODY0MTU4OTMyOTQtMzg0MDA0MzQ0ODg0NDkxMDczOC00ZjEyZTM5Y2EwMjQyNjA0N2YyODU1NzgxNGQwYjc1NS5wbmc)

Each test case will specify the batch name, the key and the message. Your job is to **decrypt** the message using the given key, ensuring only the intended batch can read it. Use this system to help Mushfiq and Zahinul keep the carnival's secrets safe from curious eyes.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) - the number of test cases.

Each of the next t lines contains a message in the following format:

**BatchName Key: Encrypted_Message**

where:

- BatchName is a string of up to 10 alphanumeric characters (letters and digits, no spaces).
- Key is an integer (−20000 ≤ Key ≤ 20000).
- Message is a string of length up to 10⁴, containing English letters, digits, spaces, and other special characters.

## Output

For each test case, print a single line in the same format as the input:

**BatchName Key: Decrypted_Message**

where Decrypted_Message is the result after **applying the decryption rules.**

## Sample Tests

**Sample Input:**

```
2
Operand 48: Dweh WQOP YOA!
Perceptron 53: Xfmdpnf up BVTU DTF DBSOJWBM 6.0
```

**Sample Output:**

```
Operand 48: Hail AUST CSE!
Perceptron 53: Welcome to AUST CSE CARNIVAL 6.0
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
