# 🔄 Problem: Rotate a 1D Array Around Index i

## 🧩 Problem Statement
You are given a 1D array `arr` of size `n` and an index `i` (0-based).

Rearrange the elements of the array to form a new array based on the position `i`.

---

## 📥 Input
- An integer `n` — size of the array  
- An array `arr` of `n` integers  
- An integer `i` (0-based index)

---

## 📤 Output
- A new array after performing the required transformation

---

## 🧪 Example 1

### Input:
[1, 2, 3, 4]
i = 2


### Output:
[4, 3, 2, 1]


---

## 🧪 Example 2

### Input:
[10, 20, 30, 40, 50]
i = 1

### Output:

[50, 40, 30, 20, 10]


---

## ⚙️ Constraints
- `1 ≤ n ≤ 10^5`
- `0 ≤ i < n`