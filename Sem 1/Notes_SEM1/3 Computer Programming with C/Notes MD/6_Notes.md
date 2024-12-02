Here is a detailed Markdown explanation of Chapter 6: **Decision Making and Looping** from *Programming in ANSI C* by E. Balagurusamy.

---

# **Chapter 6: Decision Making and Looping**

## **6.1 Introduction**
- **Decision-making** structures guide the program's execution based on conditions.
- **Loops** allow repetitive execution of a block of code until a specific condition is met.
- C provides three main looping structures:  
  - **`for` loop**
  - **`while` loop**
  - **`do-while` loop**
- Loops reduce redundancy and make programs efficient.

---

## **6.2 Looping in C**

### **6.2.1 Why Loops?**
- Used to perform repetitive tasks without writing duplicate code.
- Examples:
  - Printing numbers from 1 to 100.
  - Calculating the sum of the first `n` natural numbers.

### **6.2.2 Types of Loops in C**
1. **Entry-controlled loops**: Condition is evaluated before entering the loop.
   - **`for` loop**
   - **`while` loop**
2. **Exit-controlled loop**: Condition is evaluated after executing the loop body at least once.
   - **`do-while` loop**

---

## **6.3 The `while` Loop**
- Executes a block of code as long as the condition is `true`.

### **Syntax**:
```c
while (condition) {
    // Statements to execute while the condition is true
}
```

### **Example**:
```c
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```

**Key Points**:
- The condition is checked before executing the loop body.
- If the condition is `false`, the loop will not execute at all.

---

## **6.4 The `for` Loop**
- Best suited for counter-controlled iteration.

### **Syntax**:
```c
for (initialization; condition; increment/decrement) {
    // Statements to execute
}
```

### **Example**:
```c
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

### **Working of the `for` Loop**:
1. **Initialization**: Executes once at the beginning of the loop.
2. **Condition**: Evaluated before each iteration. If `false`, the loop exits.
3. **Increment/Decrement**: Executes after each iteration of the loop body.

**Key Points**:
- Multiple expressions can be used in initialization and increment sections:
  ```c
  for (int i = 1, j = 5; i <= j; i++, j--) {
      printf("%d %d\n", i, j);
  }
  ```

---

## **6.5 The `do-while` Loop**
- Executes the loop body at least once, as the condition is checked after execution.

### **Syntax**:
```c
do {
    // Statements to execute
} while (condition);
```

### **Example**:
```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

**Key Points**:
- Ideal when the loop must execute at least once regardless of the condition.

---

## **6.6 Nested Loops**
- A loop inside another loop.

### **Syntax**:
```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        // Inner loop body
    }
}
```

### **Example**:
```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("i=%d, j=%d\n", i, j);
    }
}
```

---

## **6.7 The `break` Statement**
- Used to exit a loop prematurely.

### **Syntax**:
```c
break;
```

### **Example**:
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;
    }
    printf("%d\n", i);  // Output: 1, 2
}
```

**Key Points**:
- `break` immediately terminates the nearest enclosing loop or `switch` statement.

---

## **6.8 The `continue` Statement**
- Skips the current iteration and moves to the next.

### **Syntax**:
```c
continue;
```

### **Example**:
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }
    printf("%d\n", i);  // Output: 1, 2, 4, 5
}
```

**Key Points**:
- Does not terminate the loop; only skips the remaining statements in the current iteration.

---

## **6.9 The `goto` Statement**
- Transfers control to a labeled statement.

### **Syntax**:
```c
goto label;
// Other statements
label:
    // Target statements
```

### **Example**:
```c
int i = 1;
start:
printf("%d\n", i);
i++;
if (i <= 5) {
    goto start;
}
```

**Key Points**:
- Use of `goto` is discouraged in structured programming.

---

## **6.10 Infinite Loops**
- Occurs when the loop condition is always `true`.

### **Example**:
```c
while (1) {
    printf("Infinite Loop\n");
}
```

**Key Points**:
- Use `break` to exit an infinite loop when necessary.

---

## **6.11 Summary**
- C provides `while`, `for`, and `do-while` loops for repeated execution of code.
- **`while` loop**: Condition is checked before execution.  
- **`for` loop**: Suitable for counter-controlled loops.  
- **`do-while` loop**: Executes at least once.
- Use **`break`** to exit loops and **`continue`** to skip iterations.
- Avoid **`goto`** for better readability and maintainability.

---
In C programming, **for**, **while**, and **do-while** loops are all used for repetitive tasks, but they have differences in syntax, execution, and use cases.

### 1. **`for` Loop**
- **Purpose**: Used when the number of iterations is known beforehand.
- **Syntax**:
  ```c
  for (initialization; condition; increment/decrement) {
      // code block
  }
  ```
- **Execution**:
  1. Initialization: Executes once before the loop starts.
  2. Condition: Checked before every iteration.
  3. Increment/Decrement: Executes after each iteration.
- **Behavior**:
  - If the condition is false at the start, the loop doesn't execute.
  - Compact structure integrates initialization, condition, and iteration steps.

- **Example**:
  ```c
  for (int i = 0; i < 5; i++) {
      printf("%d ", i);
  }
  ```

---

### 2. **`while` Loop**
- **Purpose**: Used when the condition must be checked before executing the loop body.
- **Syntax**:
  ```c
  while (condition) {
      // code block
  }
  ```
- **Execution**:
  1. Checks the condition before every iteration.
  2. Executes the body only if the condition is true.
- **Behavior**:
  - If the condition is false initially, the loop body does not execute at all.
  - Suited for loops where the number of iterations depends on dynamic conditions.

- **Example**:
  ```c
  int i = 0;
  while (i < 5) {
      printf("%d ", i);
      i++;
  }
  ```

---

### 3. **`do-while` Loop**
- **Purpose**: Guarantees at least one execution of the loop body, even if the condition is false initially.
- **Syntax**:
  ```c
  do {
      // code block
  } while (condition);
  ```
- **Execution**:
  1. Executes the body first.
  2. Checks the condition after executing the body.
- **Behavior**:
  - Always executes the loop body once, regardless of the condition's truth value.
  - Useful for menus or scenarios where the loop should run at least once.

- **Example**:
  ```c
  int i = 0;
  do {
      printf("%d ", i);
      i++;
  } while (i < 5);
  ```

---

### Comparison Table

| Feature                | `for` Loop                          | `while` Loop                     | `do-while` Loop                  |
|------------------------|--------------------------------------|-----------------------------------|-----------------------------------|
| **Condition Checking** | Before each iteration               | Before each iteration            | After each iteration             |
| **Execution Guarantee**| Executes only if condition is true  | Executes only if condition is true| Executes at least once           |
| **Syntax**             | Compact (init, condition, step in one)| Split across initialization & loop| Initialization outside the loop  |
| **Use Case**           | When the number of iterations is known| When condition dynamically controls| When loop must execute at least once|

---

### Summary
- Use **`for`** for known iteration counts.
- Use **`while`** for dynamic conditions where the loop may or may not execute.
- Use **`do-while`** when at least one execution is required.