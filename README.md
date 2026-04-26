# 📘 Numerical Methods in C++

## 📌 Overview

This project contains implementations of important **Numerical Methods algorithms** using C++. These methods are widely used to solve mathematical problems such as finding roots of equations, solving systems of linear equations, and performing interpolation.

All programs are written in a simple and structured format using standard C++ libraries and follow a consistent coding style.

---

## 📂 Contents

The project includes the following algorithms:

1. **Bisection Method**

   * Finds roots of a function using interval halving
   * Requires the function to change sign in the interval

2. **Regula Falsi (False Position Method)**

   * Improved root-finding technique using linear interpolation

3. **Newton-Raphson Method**

   * Fast root-finding method using derivatives

4. **Gauss Elimination Method**

   * Solves a system of linear equations using matrix reduction

5. **Jacobi Method**

   * Iterative method for solving linear systems
   * Uses previous iteration values

6. **Gauss-Seidel Method**

   * Faster iterative method using updated values immediately

7. **Newton Forward Interpolation**

   * Used to estimate values near the beginning of the data set
   * Uses forward difference table

8. **Newton Backward Interpolation**

   * Used to estimate values near the end of the data set
   * Uses backward difference table

---

## ⚙️ Requirements

* C++ Compiler (e.g., **g++**)
* Basic understanding of numerical methods

---

## ▶️ How to Run

1. Compile the code:

```bash
g++ filename.cpp -o output
```

2. Run the program:

```bash
./output
```

3. Follow on-screen input instructions.

---

## 🧠 Key Features

* Simple and readable code structure
* Function-based implementation
* Uses `printf` and `scanf` for input/output
* Suitable for academic learning and practical exams

---

## 📊 Applications

* Engineering calculations
* Scientific computing
* Data analysis
* Solving algebraic and differential equations

---

## ⚠️ Notes

* Iterative methods like Jacobi and Gauss-Seidel require **diagonally dominant matrices** for better convergence.
* Interpolation methods assume **equally spaced data points**.
* Accuracy depends on tolerance and iteration limits.

---

## 👨‍💻 Author

**Adiba Ansari**

---




