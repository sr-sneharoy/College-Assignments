Here is a detailed explanation of Chapter 9: **User Defined Functions** from *Programming in ANSI C* by E. Balagurusamy in Markdown format.

---

# **Chapter 9: User Defined Functions**

## **9.1 Introduction**
- **Functions** in C are blocks of code that perform a specific task and can be invoked (called) whenever needed.
- Functions allow us to break down a complex program into smaller, manageable blocks, promoting modularity and reusability.
- **User-defined functions** are functions that are defined by the programmer, unlike built-in functions provided by the C Standard Library.

---

## **9.2 What is a Function?**
A **function** is a set of statements that perform a task. It has:
1. **A name**: Identifies the function.
2. **Parameters (Optional)**: Values passed into the function.
3. **Return Type**: The type of data the function returns.
4. **Function Body**: The block of code that defines what the function does.

### **Syntax**:
```c
return_type function_name(parameter_list) {
    // Body of the function
}
```

### **Example**:
```c
int add(int a, int b) {
    return a + b;
}
```

---

## **9.3 Function Declaration (Prototype)**

Before calling a function, it is good practice to declare it. This is called a **function prototype**.

### **Syntax**:
```c
return_type function_name(parameter_list);
```

### **Example**:
```c
int add(int, int);  // Function declaration (prototype)
```

- **Declaration** tells the compiler about the return type and the types of arguments, but it does not include the function body.
- It is typically placed before the `main()` function or in a header file.

---

## **9.4 Function Definition**
- **Function definition** is the actual implementation of the function. It consists of the function’s name, return type, parameters, and the block of code that executes when the function is called.

### **Syntax**:
```c
return_type function_name(parameter_list) {
    // Function body
    // Perform specific task and optionally return a value
}
```

### **Example**:
```c
int add(int a, int b) {
    return a + b;  // Return sum of a and b
}
```

- **Parameters**: `a` and `b` are input arguments passed to the function.
- **Return**: The sum of `a` and `b` is returned.

---

## **9.5 Function Call**
Once a function is defined, you can **call** it to execute its code.

### **Syntax**:
```c
function_name(argument_list);
```

### **Example**:
```c
int result = add(5, 10);  // Function call
printf("The sum is: %d", result);  // Output: The sum is: 15
```

- The **arguments** passed in the function call (`5` and `10`) correspond to the parameters defined in the function.

---

## **9.6 Types of Functions**
1. **Functions with No Arguments and No Return Value**  
   - These functions neither take any arguments nor return any value.
   
   ### **Example**:
   ```c
   void greet() {
       printf("Hello, World!\n");
   }
   ```

2. **Functions with Arguments but No Return Value**  
   - These functions take arguments but don’t return any value. The return type is `void`.
   
   ### **Example**:
   ```c
   void print_square(int n) {
       printf("Square of %d is %d\n", n, n * n);
   }
   ```

3. **Functions with Arguments and Return Value**  
   - These functions take arguments and return a value.

   ### **Example**:
   ```c
   int add(int a, int b) {
       return a + b;
   }
   ```

4. **Functions with No Arguments but with a Return Value**  
   - These functions don’t take any arguments but return a value.

   ### **Example**:
   ```c
   int get_random_number() {
       return 42;  // Return a constant value
   }
   ```

---

## **9.7 Function Arguments**
- Functions can accept **parameters** or **arguments**, which are values passed to the function when it is called.
  
### **Types of Arguments**:
1. **Actual Arguments (Parameters)**: These are the values or variables passed to the function during the function call.
   - Example: `add(5, 10);`
  
2. **Formal Arguments**: These are the variables defined in the function definition to accept values.
   - Example: In `int add(int a, int b)`, `a` and `b` are the formal arguments.

### **Pass-by-Value**:
- **Pass-by-value** means that the actual argument is copied into the formal parameter. Changes to the formal parameter do not affect the actual argument.
- Example:
  ```c
  void changeValue(int x) {
      x = 10;  // Only changes the local copy of x
  }
  ```

### **Pass-by-Reference**:
- C does not support **pass-by-reference** directly, but it can be achieved using **pointers**.
- Modifying the value of the actual argument requires passing the address of the variable (pointer).
  
**Example** (Pass-by-Reference using pointers):
```c
void changeValue(int *x) {
    *x = 10;  // Changes the value of the actual argument
}
```

---

## **9.8 Recursion**
- **Recursion** is the process in which a function calls itself.
- Recursive functions are useful for solving problems that can be broken down into smaller sub-problems.

### **Base Case**:
- A recursive function must have a **base case** that terminates the recursive calls.

### **Example** (Factorial Function):
```c
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}
```
- **Factorial of 5**: `factorial(5)` calls `factorial(4)`, `factorial(3)`, ..., until it reaches the base case `factorial(0)`.

---

## **9.9 Storage Classes in Functions**
Functions in C can be classified based on their **storage class**:
1. **Auto (default)**: Local variables inside a function. The variable’s lifetime is limited to the function execution.
2. **Static**: A variable declared as `static` inside a function retains its value between function calls.
3. **Extern**: Allows functions and variables to be shared between files.
4. **Register**: Suggests to the compiler that a variable should be stored in a CPU register for faster access.

---

## **9.10 Function Scope**
The **scope** of a function refers to the context within which variables or functions are visible.
1. **Local Variables**: Declared inside a function. They are only accessible within that function.
2. **Global Variables**: Declared outside of any function and are accessible by all functions in the program.

---

## **9.11 Function Overloading (Not Supported in C)**
- **Function overloading** is not supported in C, unlike C++.
- In C, you cannot define multiple functions with the same name but different parameters.

---

## **9.12 Function Pointer**
- A **function pointer** is a pointer that points to a function instead of a data variable. This allows dynamic function calls.
  
### **Example**:
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*ptr)() = greet;  // Function pointer
    ptr();  // Calls greet() using the function pointer
    return 0;
}
```

---

## **9.13 Advantages of Functions**
- **Modularity**: Breaks a program into smaller, manageable pieces.
- **Reusability**: A function can be reused in different parts of the program.
- **Abstraction**: Functions hide implementation details and expose only the necessary interface.
- **Easier Debugging**: Isolating issues in a smaller function is easier.

---

## **9.14 Summary**
- A **user-defined function** is a block of code that performs a specific task.
- Functions consist of a name, parameters, return type, and body.
- Functions can be called with arguments, and the result can be returned.
- C supports **pass-by-value** and function **recursion**.
- The **scope** of variables and the **storage class** of functions are important for efficient programming.
- Function pointers allow dynamic function calling, which can be useful for certain advanced programming techniques.

---

Let me know if you need any further elaboration or additional examples!