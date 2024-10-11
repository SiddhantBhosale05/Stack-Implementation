# Stack Implementation
Experiment 18

## Aim 
To implement stack.

## Theory
### Definition
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. Stacks are used in various applications, including function call management, expression evaluation, and backtracking algorithms.

**Key Characteristics of Stack**

- **LIFO Structure**: The most recently added element is the first to be removed.
  eg-
  
  ```cpp
  struct Stack {
    int arr[MAX]; // Array to hold stack elements
    int top;      // Index of the top element
  };
  


### Operations

- **Push**: Add an element to the top of the stack.
- **Pop**: Remove and return the top element of the stack.
- **Peek/Top**: Return the top element without removing it.
- **isEmpty**: Check if the stack is empty.
- **isFull**: Check if the stack is full (only applicable in fixed-size stacks).

### Implementation

Stacks can be implemented using two main methods: arrays and linked lists.

## Algorithms
