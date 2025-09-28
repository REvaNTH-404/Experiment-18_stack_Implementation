# 📚 Array-Based Stack Implementation in C++

This repository contains a C++ implementation of a fixed-size **Stack** data structure using an array. It demonstrates the core **LIFO (Last-In, First-Out)** principle with methods for insertion, deletion, and inspection.

***

## 🏷️ Title of the Experiment
Implementation of an Array-Based Stack Data Structure in C++

***

## 🛠️ Tools Used
* **C++ Compiler:** Any C++ compiler (e.g., GCC/G++).
* **IDE/Editor:** VS Code (Visual Studio Code), or a simple text editor.
* **Online Platforms:** OnlineGDB, Replit, or similar online C++ environments.

***

## 💡 Theory

### Topic Overview: Stack Data Structure
A **Stack** is a linear data structure that follows the **LIFO (Last-In, First-Out)** principle. This means the last element added to the stack is the first one to be removed. It operates with a single designated end called the **Top**. An array is used to store the elements, and an integer variable (`top`) tracks the index of the last inserted element.

| Operation | Description | Condition |
| :--- | :--- | :--- |
| **Push** | Adds an element to the top of the stack. | **Stack Overflow** if the stack is full. |
| **Pop** | Removes and returns the element from the top of the stack. | **Stack Underflow** if the stack is empty. |
| **Peak (or Peek)** | Returns the element at the top without removing it. | **Stack Underflow** if the stack is empty. |

### Algorithms

#### Push Operation
1.  Check if `top` equals `size - 1` (the last valid index). If true, display "STACK OVERFLOW" and return.
2.  If false, increment the `top` index (`++top`).
3.  Store the new element at `ar[top]`.

#### Pop Operation
1.  Check if `top` equals `-1`. If true, display "STACK UNDERFLOW" and return a predefined `ERROR` value.
2.  If false, retrieve the element at `ar[top]`.
3.  Decrement the `top` index (`top--`).
4.  Return the retrieved element.

#### Peak (Peek) Operation
1.  Check if `top` equals `-1`. If true, display "STACK UNDERFLOW" and return a predefined `ERROR` value.
2.  If false, return the element at `ar[top]`. **(The `top` index remains unchanged.)**

#### Display Operation
1.  Check if `top` equals `-1`. If true, display "STACK UNDERFLOW" and return.
2.  If false, iterate through the array indices from $i=0$ up to $i=top$.
3.  Print the value at each index `ar[i]`.

***

## 🎯 Conclusion

This implementation successfully demonstrates the functionality of an array-based stack in C++. The use of an array provides a fixed-size structure where the `top` index pointer efficiently manages insertion (**push**) and deletion (**pop**) operations. Error handling for **Overflow** (stack full) and **Underflow** (stack empty) is implemented, ensuring the program's robustness. This approach serves as a fundamental example of how linear data structures are managed using simple array mechanics and the LIFO principle.
