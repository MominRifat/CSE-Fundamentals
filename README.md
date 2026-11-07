<div align="center">

# 📚 CSE Fundamentals — Algorithms & Data Structures

[![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![DSA](https://img.shields.io/badge/Course-Data_Structures_%26_Algorithms-orange?style=for-the-badge)](#)
[![University](https://img.shields.io/badge/Institution-UAP_CSE-004085?style=for-the-badge)](#)

<p align="center">
  <b>Core Computer Science and Engineering implementations covering classical Data Structures and Algorithms in C and C++.</b>
</p>

---

</div>

## 📌 Topics & Implementations

### 1. Infix to Postfix Conversion & Expression Evaluation
- Uses the **Shunting Yard Algorithm** with an internal `Stack` structure.
- Operator precedence and associativity handling for `+`, `-`, `*`, `/`, `^`, and parentheses.

```mermaid
flowchart LR
    A["Infix Expression<br/>A + B * (C - D)"] --> B["Stack-based Shunting Yard Algorithm"]
    B --> C["Postfix (RPN)<br/>A B C D - * +"]
    C --> D["Expression Evaluator Engine"]
```

---

## 👨‍💻 Author

**Momin Rifat**  
GitHub: [@MominRifat](https://github.com/MominRifat)
