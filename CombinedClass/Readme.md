# 🏫 Problem: Merge the Toppers

## 🧩 Problem Statement
You are given **two classrooms**, each represented as a **sorted linked list** of students based on their marks (in descending order).

Your task is to:
1. **Merge the two linked lists** into a single sorted linked list  
2. **Do not use any extra array or additional data structures**  
3. Print the **top `k` students** from the merged list  

---

## 📚 Linked List Overview

A **linked list** is a collection of nodes where each node contains:
- Student data (e.g., marks)  
- A pointer to the next node  


[Marks | Next] → [Marks | Next] → ... → NULL


---

## 📥 Input
- Integer `n` — number of students in first classroom  
- `n` marks (sorted in descending order)  
- Integer `m` — number of students in second classroom  
- `m` marks (sorted in descending order)  
- Integer `k` — number of top students to print  

---

## 📤 Output
- Print the marks of the **top `k` students** from the merged linked list  

---

## 🧪 Example

### Input:

n = 3
List1: 95 85 75

m = 3
List2: 90 80 70

k = 4


---

### Output:

95 90 85 80


---

## ⚙️ Constraints
- `1 ≤ n, m ≤ 10^5`  
- `1 ≤ k ≤ n + m`  
- Marks are integers  
- Both lists are already sorted in **descending order**

---

## 📌 Requirements
- Merge must be done using **linked list pointers only**  
- Do NOT use arrays or extra memory for merging  
- Maintain sorted order during merge  

---

## 🚀 Task
Implement the logic to:
- Merge two sorted linked lists  
- Traverse the merged list  
- Print the top `k` elements  