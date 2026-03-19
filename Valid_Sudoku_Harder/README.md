# 🧩 Problem: Valid Sudoku (with Empty Cells)

## 🧩 Problem Statement
Given a **9×9 Sudoku board**, determine if it is **valid**.

The board may contain **empty cells**, represented by `.`

A Sudoku board is valid if:

- Each **row** contains digits `1–9` without repetition  
- Each **column** contains digits `1–9` without repetition  
- Each of the **9 subgrids (3×3 boxes)** contains digits `1–9` without repetition  

Empty cells (`.`) can be ignored.

---

## 📥 Input
- A 9×9 grid `board`
- Each cell contains:
  - `'1'` to `'9'` OR
  - `'.'` (empty)

---

## 📤 Output
- `true` if the board is valid  
- `false` otherwise  

---

## 🧪 Example 1

### Input:

5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9


### Output:

true


---

## 🧪 Example 2

### Input:

8 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9


### Output:

false


---

## ⚙️ Constraints
- Board size is always **9 × 9**
- Only characters `'1'–'9'` and `'.'` appear

---

## 📌 Notes
- You only need to check if the current board is valid  
- You do NOT need to solve the Sudoku  