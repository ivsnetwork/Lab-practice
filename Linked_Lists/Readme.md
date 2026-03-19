# 🔗 Problem: Fix the Linked List Code (Find Largest Element)

## 🧩 Problem Statement
You are given a **linked list implementation** that is intended to find the **largest element** in the list.

However, the code contains **logical and/or syntactical errors**.

Your task is to:
- **Identify the errors**
- **Fix the code**
- Ensure the program correctly returns the **maximum value in the linked list**

---

## 📚 Linked List Overview

A **linked list** is a linear data structure where elements (called **nodes**) are connected using pointers.

Each node contains:
- **Data** (value)
- **Pointer** to the next node

---

## 🔗 Structure Representation

[Data | Next] → [Data | Next] → [Data | Next] → NULL


---

## 🧠 Key Concepts

- The list starts at a pointer called **head**
- The last node points to `NULL`
- Traversal is done using a temporary pointer (e.g., `temp = head`)
- Move through the list using:

temp = temp->next


---

## 🎯 Objective
Fix the given program so that it:
- Traverses the linked list correctly  
- Compares elements properly  
- Returns the **largest value**

---

## 📥 Input
- Number of elements `n`  
- Elements inserted into the linked list  

---

## 📤 Output
- The **maximum element** in the linked list  

---

## 🧪 Example

### Input:

n = 5
List: 3 → 7 → 2 → 9 → 5


### Output:

9


---

## ⚙️ Constraints
- `1 ≤ n ≤ 10^5`
- Node values are integers  

---

## ⚠️ Notes
- The given code is **incorrect**
- Do NOT rewrite from scratch — fix the existing logic  
- Pay attention to:
  - Pointer traversal  
  - Initialization of variables  
  - Loop conditions  

---

## 🚀 Task
Debug and correct the program to successfully compute the **largest element in the linked list**.