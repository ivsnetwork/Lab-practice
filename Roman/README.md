# 🏛️ Problem: Roman Numeral Conversion

## 🧩 Problem Statement
Write two functions:

1. Convert an integer to a Roman numeral  
2. Convert a Roman numeral to an integer  

---

## 🔢 Roman Numeral Rules
Modern Roman numerals are written by expressing each digit separately starting from the leftmost digit and skipping any digit with value zero.

- Use **subtractive notation** where required:
  - 4 → IV (NOT IIII)
  - 9 → IX
  - 40 → XL
  - 90 → XC
  - 400 → CD
  - 900 → CM

---

## 📥 Input
- Integer `n` such that:  1 <= n <= 4000
- OR a valid Roman numeral string

---

## 📤 Output
- Roman numeral string (for integer input)  
- Integer value (for Roman numeral input)

---

## 🧪 Examples

### To Roman
2000 → MM
1666 → MDCLXVI
86 → LXXXVI
1 → I

---

### From Roman
MM → 2000
MDCLXVI → 1666
LXXXVI → 86
I → 1

---

## 📊 Symbol Table
Symbol Value
M 1000
CM 900
D 500
CD 400
C 100
XC 90
L 50
XL 40
X 10
IX 9
V 5
IV 4
I 1

---

## ⚙️ Constraints
- 1 ≤ n < 4000  
- Input Roman numerals are valid and follow standard rules