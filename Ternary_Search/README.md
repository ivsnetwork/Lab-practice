# 🔍 Problem: Ternary Search (3-Part Binary Search)

## 🧩 Problem Statement
Implement a version of binary search that divides the array into **three parts instead of two**.

Given a **sorted array** and a target value `x`, determine whether `x` exists in the array using a **ternary search approach**.

---

## 📥 Input
- An integer `n` — size of the array  
- A sorted array `arr` of `n` integers  
- An integer `x` — target value  

---

## 📤 Output
- Return the index of `x` if found  
- Otherwise, return `-1`

---

## 🧪 Examples

### Example 1

Input:
n = 7
arr = 1 3 5 7 9 11 13
x = 7

Output:
3


---

### Example 2

Input:
n = 5
arr = 2 4 6 8 10
x = 5

Output:
-1


---

## ⚙️ Constraints
- `1 ≤ n ≤ 10^5`
- Array is sorted in non-decreasing order  
- `-10^9 ≤ arr[i], x ≤ 10^9`

---

## 📌 Notes
- The array is divided into **three parts** using two mid indices  
- Search continues in the appropriate segment based on comparisons  

---

## 🚀 Task
Write a function that efficiently searches for `x` using this approach.