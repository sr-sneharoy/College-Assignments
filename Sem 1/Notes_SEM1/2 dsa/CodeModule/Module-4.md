# Stack and Expressions: Detailed Q&A  

---

### **1. What do you understand by stack overflow and underflow?**

#### **Answer**:
- **Stack Overflow**:  
  Occurs when we try to add an element to a stack that is already full. For example, in a fixed-size stack implemented using an array, if the `top` pointer exceeds the maximum array size, it causes an overflow condition.

- **Stack Underflow**:  
  Happens when we try to remove an element from an empty stack. Since there are no elements to pop, the operation fails, resulting in an underflow condition.

---

### **2. Differentiate between an array and a stack.**

#### **Answer**:
| Feature        | Array                             | Stack                          |
|----------------|-----------------------------------|---------------------------------|
| **Type**       | Linear data structure            | Abstract data type             |
| **Access**     | Random access, any element can be accessed directly via its index. | Sequential access, only the topmost element is accessible. |
| **Operations** | Insertion/deletion can occur anywhere. | Follows LIFO (Last In, First Out). |
| **Size**       | Fixed size unless dynamically allocated. | Can be dynamic or fixed.       |
| **Use Cases**  | Storing multiple elements, e.g., arrays of numbers or strings. | Used in recursion, undo mechanisms, and expression evaluation. |

---

### **3. How does a stack implemented using a linked list differ from a stack implemented using an array?**

#### **Answer**:
| Feature                 | Stack Using Array                | Stack Using Linked List        |
|-------------------------|-----------------------------------|---------------------------------|
| **Memory Usage**        | Fixed size, predefined at compile time. | Dynamic, memory allocated as needed. |
| **Overflow Condition**  | Can occur if the array is full.  | No overflow (limited by system memory). |
| **Underflow Condition** | Happens if the stack is empty.   | Happens if the linked list is empty. |
| **Implementation**      | Uses a continuous block of memory. | Uses nodes with pointers, consuming more memory. |
| **Performance**         | Faster as memory is contiguous.  | Slightly slower due to pointer overhead. |
| **Flexibility**         | Limited by predefined size.      | Fully dynamic, grows and shrinks as needed. |

---

### **4. Differentiate between `peek()` and `pop()` functions.**

#### **Answer**:
- **`peek()`**:  
  Returns the top element of the stack without removing it. This is used to view the top element.

- **`pop()`**:  
  Removes and returns the top element of the stack. This modifies the stack by reducing its size by one.

---

### **5. Why are parentheses not required in postfix/prefix expressions?**

#### **Answer**:  
In **postfix** and **prefix** expressions, the order of operations is inherently determined by the position of the operator relative to the operands.  
- In **postfix**, the operator follows its operands.  
- In **prefix**, the operator precedes its operands.  

This eliminates ambiguity, making parentheses unnecessary.

Example:  
- **Infix**: `A + B * C`  
- **Postfix**: `A B C * +`  
- **Prefix**: `+ A * B C`

---

### **6. Explain how stacks are used in a non-recursive program.**

#### **Answer**:  
Stacks are often used to replace recursion in programs, especially for problems like tree traversal, graph traversal, or evaluating expressions. Instead of relying on the program's call stack, a developer can use a manual stack to simulate the recursion.  

Example: Non-recursive implementation of DFS (Depth-First Search) in a graph:
```c
void DFS(int start, int nodes, int graph[nodes][nodes]) {
    int stack[nodes], top = -1, visited[nodes] = {0};
    stack[++top] = start;

    while (top != -1) {
        int current = stack[top--];
        if (!visited[current]) {
            printf("%d ", current);
            visited[current] = 1;

            for (int i = nodes - 1; i >= 0; i--) {
                if (graph[current][i] && !visited[i]) {
                    stack[++top] = i;
                }
            }
        }
    }
}
```

---

### **7. What do you understand by a multiple stack? How is it useful?**

#### **Answer**:  
- **Multiple Stack**:  
  It refers to the implementation of more than one stack within a single array. This is useful for managing separate stacks without needing multiple arrays.

- **Uses**:  
  - Managing multiple independent stack-based processes.
  - Optimizing memory usage when stack sizes vary dynamically.

---

### **8. Explain the terms infix expression, prefix expression, and postfix expression.**

#### **Answer**:
- **Infix**: Operators are between operands (e.g., `A + B`).  
- **Prefix**: Operators precede operands (e.g., `+ A B`).  
- **Postfix**: Operators follow operands (e.g., `A B +`).  

#### **Conversion Examples**:  
1. **A – B + C**  
   - Postfix: `A B – C +`  

2. **(A * B) + (C / D) – (D + E)**  
   - Postfix: `A B * C D / + D E + –`

---

### **9. Convert infix expressions to postfix equivalents.**

#### **Answer**:
- **A – B + C**: `A B – C +`
- **A * B + C / D**: `A B * C D / +`

---

### **10. Find the infix equivalents of the following postfix equivalents.**

#### **Answer**:
- **Postfix**: `A B + C * D –`  
  **Infix**: `(A + B) * C – D`

---

### **11. Give the infix expression of the following prefix expressions.**

#### **Answer**:
- **Prefix**: `* – + A B C D`  
  **Infix**: `((A + B) – C) * D`

---

### **12. Convert and evaluate the following expression.**

#### **Expression**: `10 + ((7 – 5) + 10)/2`  
- **Postfix**: `10 7 5 – 10 + 2 / +`

**Evaluation**:
Step-by-step evaluation using a stack gives: `20`.

---

### **13. Write a function to copy contents of one stack to another using a temporary stack.**

```c
void copyStack(Stack *source, Stack *destination) {
    Stack temp;
    initializeStack(&temp);

    while (!isEmpty(source)) {
        push(&temp, pop(source));
    }

    while (!isEmpty(&temp)) {
        int val = pop(&temp);
        push(destination, val);
        push(source, val);  // Restore original stack
    }
}
```

---

### **14. Draw the stack structure in each case.**

#### **Operations**:
(a) Add A, B, C, D, E, F: `[A, B, C, D, E, F]`  
(b) Delete two: `[A, B, C, D]`  
(c) Add G: `[A, B, C, D, G]`  
(d) Add H: `[A, B, C, D, G, H]`  
(e) Delete four: `[A, B]`  
(f) Add I: `[A, B, I]`

---

### **15. Differentiate between an iterative function and a recursive function.**

#### **Answer**:
| Feature             | Iterative Function           | Recursive Function             |
|---------------------|------------------------------|---------------------------------|
| **Definition**      | Uses loops for repetition.  | Calls itself for repetition.   |
| **Performance**     | Faster, less memory overhead. | Slower, more memory overhead.  |
| **Use Cases**       | Simple tasks, e.g., searching. | Complex problems, e.g., Tower of Hanoi. |
| **Termination**     | Based on loop condition.     | Based on base case condition.  |

---

### **16. Explain the Tower of Hanoi problem.**

#### **Answer**:  
Tower of Hanoi is a puzzle where the goal is to move `n` disks from a source rod to a destination rod, using an auxiliary rod, following these rules:  
1. Only one disk can be moved at a time.  
2. Larger disks cannot be placed on smaller disks.  

**Recursive Solution**:  
```c
void TowerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    TowerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    TowerOfHanoi(n - 1, auxiliary, destination, source);
}
```

### **6. Explain how stacks are used in a non-recursive program.**

#### **Detailed Explanation**:

In programming, recursion relies on the system’s call stack to store function calls and their associated data. However, recursion can sometimes lead to stack overflow, inefficiencies, or lack of control over memory. To avoid these issues, **non-recursive programs** often use a stack data structure to simulate the behavior of recursion manually.

Here are some common use cases and how stacks replace recursion:

---

#### **1. Tree Traversal**:  
##### **Example**: Depth-First Search (DFS)  
DFS involves exploring a path to its deepest level before backtracking. In a recursive DFS, the system stack keeps track of visited nodes. In a non-recursive DFS, a manual stack is used to achieve the same.

- **Steps**:
  1. Push the starting node onto the stack.
  2. While the stack is not empty:
     - Pop the top node.
     - Process the node (e.g., print it).
     - Push its adjacent or child nodes onto the stack.
  3. Repeat until all nodes are visited.

- **Why Use a Stack?**  
  The stack ensures that the last node visited is the first to be processed, following the LIFO principle. This is similar to how recursion "remembers" which node to return to after finishing a deeper call.

---

#### **2. Evaluating Expressions**:
Stacks are crucial in evaluating **postfix** (or **prefix**) expressions. 

##### **Steps**:
1. Scan the expression from left to right:
   - If it’s an operand, push it onto the stack.
   - If it’s an operator, pop the required number of operands from the stack, perform the operation, and push the result back onto the stack.
2. The final result is the only value left in the stack.

**Example**:
Expression: `3 4 + 5 *`  
- Push `3`, push `4`.  
- Encounter `+`: Pop `3` and `4`, compute `3 + 4 = 7`, push `7`.  
- Push `5`.  
- Encounter `*`: Pop `7` and `5`, compute `7 * 5 = 35`.  

Result: `35`

---

#### **3. Backtracking Problems**:
##### **Example**: Solving Mazes or Generating Permutations  
- **Backtracking** involves exploring one possibility at a time and reverting to the previous state if the current path fails.  
- A stack keeps track of decisions and states, so the program can "go back" to try another option.

**Maze Example**:
1. Push the starting position onto the stack.
2. Move to the next position:
   - If it’s valid, push it onto the stack.
   - If it’s a dead-end, pop the stack to backtrack.
3. Repeat until the destination is reached.

---

#### **4. Simulating Function Calls**:
In some problems, recursive calls can be converted into iterative solutions using a stack to store parameters and return addresses.

**Example**:
Factorial Calculation:  
Instead of calling `factorial(n-1)` recursively, push each intermediate value onto a stack and compute iteratively.

---

#### **Why Stacks Are Effective in Non-Recursive Programs?**:
1. **Mimic Recursive Behavior**: By storing "state" and "return points," stacks can emulate recursive depth without relying on the system call stack.
2. **Memory Control**: Gives the programmer more control over memory usage and stack size, avoiding issues like stack overflow.
3. **Efficiency**: Reduces function call overhead, making non-recursive implementations faster in some cases.

---

### **Applications of Non-Recursive Stack-Based Programs**:
1. Expression evaluation (postfix/prefix).
2. Traversing or searching graphs and trees (DFS, in-order traversal).
3. Backtracking algorithms like Sudoku solvers or maze navigation.
4. Iterative solutions for mathematical problems (e.g., Fibonacci, Tower of Hanoi).

---


### **7. What do you understand by a multiple stack? How is it useful?**

#### **Detailed Explanation**:

A **multiple stack** is a data structure where multiple stacks are implemented using a single array. This approach is particularly useful when you need to manage several stacks efficiently while optimizing memory usage. Instead of allocating separate arrays for each stack, a single array is partitioned dynamically or statically to hold multiple stacks.

---

### **How Multiple Stacks Work**:
1. **Static Division**:
   - The array is divided into fixed sections, each representing a separate stack.
   - Each stack has its own boundary within the array.
   - For example, if an array of size 15 is divided into 3 stacks, each stack gets 5 slots.
   - The limitation here is that one stack may overflow while others remain underutilized.

2. **Dynamic Division**:
   - The array adjusts dynamically to allocate more space to stacks that need it, while efficiently utilizing the free space.
   - Requires additional logic to manage boundaries between stacks.
   - This approach is more flexible but slightly more complex to implement.

---

### **Advantages of Multiple Stacks**:
1. **Efficient Memory Usage**:
   - Instead of creating separate arrays for each stack, all stacks share the same memory, reducing overall space requirements.
2. **Reduced Overhead**:
   - Avoids allocating and deallocating memory repeatedly for different stacks.
3. **Centralized Management**:
   - Simplifies stack operations when managing multiple stacks in a unified manner.

---

### **Implementation of Multiple Stacks**:

#### **1. Static Implementation (Fixed Division)**:
In this approach, the array is divided into fixed sections, and each stack operates within its section.

```c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15  // Total size of array
#define STACKS 3 // Number of stacks

int arr[SIZE];
int top[STACKS] = {-1, SIZE / STACKS - 1, 2 * SIZE / STACKS - 1}; // Initial tops
int limits[STACKS] = {SIZE / STACKS - 1, 2 * SIZE / STACKS - 1, SIZE - 1}; // Limits for stacks

void push(int stackNum, int value) {
    if (top[stackNum] == limits[stackNum]) {
        printf("Stack %d Overflow\n", stackNum + 1);
        return;
    }
    arr[++top[stackNum]] = value;
}

int pop(int stackNum) {
    if (top[stackNum] < (stackNum * SIZE / STACKS)) {
        printf("Stack %d Underflow\n", stackNum + 1);
        return -1;
    }
    return arr[top[stackNum]--];
}

void display(int stackNum) {
    printf("Stack %d: ", stackNum + 1);
    for (int i = (stackNum * SIZE / STACKS); i <= top[stackNum]; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    push(0, 10);
    push(0, 20);
    push(1, 30);
    push(2, 40);
    display(0); // Output: Stack 1: 10 20
    display(1); // Output: Stack 2: 30
    display(2); // Output: Stack 3: 40
    pop(0);
    display(0); // Output: Stack 1: 10
    return 0;
}
```

---

#### **2. Dynamic Implementation (Flexible Division)**:
In this approach, stack boundaries can shift dynamically as stacks grow or shrink. This prevents unused space in one stack from being wasted when other stacks require more space.

- **How it works**:
  - Instead of fixed boundaries, a single array is treated as an open pool of memory.
  - Each stack maintains its own `top` pointer and grows toward the next stack’s `top`.
  - If two stacks collide (i.e., their `top` pointers overlap), the array is resized, or one stack is relocated.

---

### **Applications of Multiple Stacks**:
1. **Simultaneous Stack Operations**:  
   Useful when multiple processes or tasks require independent stacks, e.g., in operating systems where each thread or process has its own call stack.
   
2. **Memory-Constrained Environments**:  
   When memory is limited, sharing a single array across multiple stacks can be more efficient than allocating separate arrays.

3. **Data Partitioning**:  
   In scenarios where data needs to be partitioned logically into separate sections with stack-like behavior.

4. **Compiler Design**:  
   Multiple stacks can be used to manage different types of data, such as operand stacks, function call stacks, and symbol tables.

---

### **Limitations of Multiple Stacks**:
1. **Complexity**:  
   Managing multiple stacks dynamically can be more complex compared to individual stacks.
2. **Overflow Management**:  
   Handling dynamic resizing or reallocating stack boundaries can introduce performance overhead.

By understanding and implementing multiple stacks, programmers can handle tasks requiring multiple independent stack behaviors efficiently while optimizing memory usage.