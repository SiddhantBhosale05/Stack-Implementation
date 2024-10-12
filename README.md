# Stack Implementation
Experiment 18

## Aim 
To implement stack.

## Theory
### Definition
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. Stacks are used in various applications, including function call management, expression evaluation, and backtracking algorithms.

**Key Characteristics of Stack**

- **LIFO Structure**: The most recently added element is the first to be removed.
  Example
  
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
### Stack using STL(Standard Template Library)
1. **Initialization:**
2. **Include Necessary Libraries:**
   - **Include the `<iostream>` header for input and output operations.**
   - **Include the `<stack>` header to use the stack data structure.**
3. **Main Function:**
   - **Start the `main()` function.**
4. **Create a Stack:**
   - **Declare a stack of integers named `st`.**
5. **Push Elements onto the Stack:**
   - **Use the `push()` method to add three integers (30, 20, and 10) to the stack.**
6. **Access the Top Element:**
   - **Use the `top()` method to get the value of the top element of the stack.**
   - **Output the top element to the console with a message.**
7. **End**

### Stack Implementation in Array
1. **Initialization:**
   - **Define a class `Stack`.**
   - **Declare member variables: `capacity`, `top`, and a pointer `arr` to hold stack elements.**
   - **In the constructor, initialize `capacity`, allocate memory for `arr`, and set `top` to -1 
    (indicating an empty stack).**
2. **Destructor:**
   - **In the destructor, free the allocated memory for `arr` to avoid memory leaks.**
3. **Push Operation:**
   - **Define a method `push(int element)`:**
     - **Check if the stack is full (`top < capacity - 1`).**
     - **If not full, increment `top` and add `element` to `arr[top]`.**
     - **If full, output "Stack Overflow".**
4. **Pop Operation:**
   - **Define a method `pop()`:**
     - **Check if the stack is empty (`top >= 0`).**
     - **If not empty, decrement `top` to remove the top element.**
     - **If empty, output "Stack Underflow".**
5. **Peek Operation:**
   - **Define a method `peek()`:**
     - **Check if the stack is empty (`top >= 0`).**
     - **If not empty, return the element at `arr[top]`.**
     - **If empty, return -1.**
6. **Main Function**
   - **Create a Stack Instance:**
     - **Instantiate a `Stack` object with a capacity of 5.**
   - **Push Elements:**
     - **Push three integers (23, 24, and 25) onto the stack.**
   - **Peek:**
     - **Call `peek()` and output the top element of the stack.**
   - **Pop:**
     - **Call `pop()` to remove the top element.**
   - **Peek Again:**
     - **Call `peek()` again and output the new top element after the pop operation.**
7. **End**
