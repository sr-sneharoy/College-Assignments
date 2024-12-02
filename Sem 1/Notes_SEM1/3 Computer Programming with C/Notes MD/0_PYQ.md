### 1. **Describe why we declare an array without assigning the size of that array.**  
An array can be declared without assigning its size if the values are explicitly initialized during the declaration. In such cases, the compiler calculates the size based on the number of elements in the initialization list. For example:  
```c
int arr[] = {1, 2, 3}; // Compiler sets size to 3.
```

---

### 2. **Why do we consider an array as homogeneous?**  
An array is considered homogeneous because it stores elements of the same data type, ensuring uniformity in data storage and operations.

---

### 3. **Describe identifiers and keywords.**  
- **Identifiers**: Names used to identify variables, functions, arrays, or other user-defined elements in a program. For example, `x`, `totalSum`.  
- **Keywords**: Reserved words in C with predefined meanings and purposes. They cannot be used as identifiers. Examples include `int`, `return`, `if`, `for`.

---

### 4. **What is the general form of a union in C? What is a union in C?**  
- **General form**:  
```c
union union_name {
    data_type1 member1;
    data_type2 member2;
    ...
};
```
- **Union**: A user-defined data type that allows storing different data types in the same memory location. Only one member can hold a value at a time.

---

### 5. **Difference between a character and a string in C.**  
- **Character**: A single character, stored in a `char` data type (e.g., `'A'`).  
- **String**: A sequence of characters ending with a null character (`\0`), stored as a character array (e.g., `"Hello"`).

---

### 6. **What is the description for syntax errors?**  
Syntax errors occur when the program violates the rules of the programming language. Examples include missing semicolons, incorrect use of operators, or mismatched brackets.

---

### 7. **Why keep some code blocks in comment symbols instead of deleting them when debugging?**  
Commenting code rather than deleting it helps retain the original code for reference or potential reuse, making debugging and experimentation safer.

---

### 8. **Describe why size declaration is mandatory at the time of array declaration.**  
If the array is not initialized during declaration, the compiler requires a size to allocate memory. Without a size or initialization, it cannot determine how much memory to allocate.  
Example:  
```c
int arr[5]; // Size is mandatory here.
```

---

### 9. **Define the significance of `int a[] = {1, 2, 3, 4, 5};`.**  
This statement initializes an integer array with the values `{1, 2, 3, 4, 5}` and implicitly sets the array size to 5. 

---

### 10. **What are reserved words within a programming language?**  
Reserved words are predefined keywords that have a special meaning in the language and cannot be used as identifiers. Examples in C include `for`, `while`, `break`.

---

### 11. **What is typecasting in C? Give its types.**  
Typecasting refers to converting a variable from one data type to another.  
Types:  
1. **Implicit Casting** (Type promotion): Done automatically by the compiler.  
2. **Explicit Casting**: Performed manually by the programmer using the cast operator.  
Example:  
```c
int x = 10;
float y = (float)x; // Explicit casting
```

---

### 12. **What does the `sizeof` operator do in C? How is it used?**  
The `sizeof` operator determines the size (in bytes) of a variable or data type.  
Example:  
```c
int a = 10;
printf("%zu", sizeof(a)); // Outputs 4 on most systems.
```

---

### 13. **What is `enum`?**  
An `enum` is a user-defined data type that assigns names to integral constants, improving code readability.  
Example:  
```c
enum Color { RED, GREEN, BLUE };
```

---

### 14. **Key features in C programming language.**  
- Fast and efficient.  
- Supports low-level memory manipulation.  
- Structured and procedural.  
- Rich library of functions.  
- Platform-independent.

---

### 15. **What are preprocessor directives?**  
Preprocessor directives are instructions processed before the compilation of the code. Examples include `#include` for including libraries and `#define` for defining macros.  

---

### 16. **Difference between `abs()` and `fabs()` functions.**  
- **`abs()`**: Used for integers, returns the absolute value.  
- **`fabs()`**: Used for floating-point numbers, returns the absolute value.  
Example:  
```c
int x = -5;
float y = -3.14;
printf("%d", abs(x));  // Output: 5
printf("%f", fabs(y)); // Output: 3.14
```

---

### 17. **Apply `strcmp()` with an example.**  
The `strcmp()` function compares two strings.  
Example:  
```c
#include <string.h>
#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    printf("%d", strcmp(str1, str2)); // Outputs a negative value.
    return 0;
}
```

---

### 18. **Apply `strcat()` with an example.**  
The `strcat()` function concatenates two strings.  
Example:  
```c
#include <string.h>
#include <stdio.h>
int main() {
    char str1[20] = "Hello";
    char str2[] = " World";
    strcat(str1, str2);
    printf("%s", str1); // Outputs: "Hello World"
    return 0;
}
```

---

### 19. **Apply `strcpy()` with an example.**  
The `strcpy()` function copies one string to another.  
Example:  
```c
#include <string.h>
#include <stdio.h>
int main() {
    char src[] = "Hello";
    char dest[20];
    strcpy(dest, src);
    printf("%s", dest); // Outputs: "Hello"
    return 0;
}
```

---

### Importance of a `switch` Case Statement  
The `switch` statement is used for decision-making in a program. It evaluates a single expression and executes a block of code corresponding to the matching case.  

#### **Importance**:  
1. **Readability**: Simplifies complex nested `if-else` structures, making the code more readable.  
2. **Efficiency**: In some cases, `switch` is faster than multiple `if-else` statements as it uses jump tables in assembly for execution.  
3. **Ease of Maintenance**: Each case is handled individually, which makes the code easier to update.  
4. **Structured Control**: Useful when dealing with multiple constant values to control program flow.  

#### **Example**:  
```c
#include <stdio.h>
int main() {
    int day = 2;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        default: printf("Invalid day\n");
    }
    return 0;
}
```

---

### Limitations of the `switch` Statement  
1. **Only for Discrete Values**: It works only with discrete values (e.g., integers or characters). You cannot use floating-point expressions or ranges.  
2. **No Relational Conditions**: Cannot evaluate relational or logical conditions (e.g., `x > 10`).  
3. **Sequential Matching**: Executes cases sequentially unless a `break` is used, which can lead to bugs.  
4. **Limited Data Types**: Supports only integral types like `int`, `char`, or enumeration.  
5. **Complexity in Large Cases**: With many cases, it can become difficult to manage, reducing its readability advantage.

---

### Difference Between `switch` and `if-else`  

| **Aspect**          | **Switch**                                     | **If-Else**                              |
|----------------------|-----------------------------------------------|------------------------------------------|
| **Condition Type**   | Checks equality for a single variable or expression. | Handles relational and logical conditions. |
| **Data Types**       | Works with integral types like `int`, `char`. | Supports all data types.                 |
| **Readability**      | More readable for multiple discrete cases.    | Becomes cluttered for many conditions.   |
| **Efficiency**       | Faster for a large number of discrete values. | May be slower as conditions are checked sequentially. |
| **Usage**            | Best for menu-driven programs or fixed values. | Best for ranges or complex conditions.   |
| **Default Case**     | Requires a `default` to handle unmatched cases. | Optional `else` for unmatched conditions. |

#### Example: `if-else`
```c
#include <stdio.h>
int main() {
    int number = 10;
    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
```

---

The statement "**An array cannot be used as a member of a structure**" is **incorrect** because in C programming, arrays **can** be used as members of a structure. This allows grouping related data types, including arrays, within a single user-defined data structure.

### **Example: Using an Array as a Structure Member**
```c
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50]; // Array as a member
    float marks[5]; // Array as a member
};

int main() {
    struct Student s1;

    // Assign values to structure members
    s1.rollNo = 1;
    snprintf(s1.name, 50, "John Doe");
    s1.marks[0] = 85.5;
    s1.marks[1] = 90.0;

    // Accessing structure members
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks in Subject 1: %.2f\n", s1.marks[0]);
    printf("Marks in Subject 2: %.2f\n", s1.marks[1]);

    return 0;
}
```

### **Why This is Allowed**
An array as a structure member is valid because arrays are a contiguous block of memory, and the structure can accommodate it as part of its memory layout. The structure essentially keeps track of the array’s base address and allocates the necessary space for it.

---

### **Possible Misinterpretation**
The confusion might arise because **structures themselves cannot be directly assigned to arrays**, nor can entire arrays within a structure be passed to functions without pointers. However, these limitations do not prevent an array from being a structure member. 

---

### **Key Takeaways**
- Arrays can be part of a structure.
- They are useful for grouping data that shares a common relationship.
- Proper care must be taken when copying or passing structures with array members due to their fixed memory layout.

---

The given code snippet contains the call:

```c
printf("%d", strcmp("push", "pull"));
```

Here’s what happens step by step:

### **Explanation of `strcmp`**
- The `strcmp` function compares two strings lexicographically (character by character using their ASCII values).  
- It is defined in `<string.h>` and returns:
  - A negative value if the first string is less than the second string.
  - Zero if both strings are equal.
  - A positive value if the first string is greater than the second string.

### **Comparison of "push" and "pull"**
1. `strcmp` starts comparing the strings from the first character:
   - First characters: `'p'` (ASCII 112) in both strings are equal. So, it moves to the next character.
2. Second characters: `'u'` (ASCII 117) in both strings are equal. So, it moves to the next character.
3. Third characters: `'s'` (ASCII 115) in `"push"` vs. `'l'` (ASCII 108) in `"pull"`.
   - `'s'` is greater than `'l'`.

Since `'s' > 'l'`, `strcmp` returns a **positive value**.

### **Output**
The `printf` statement will print a positive integer (exact value depends on the ASCII difference between `'s'` and `'l'`). Generally, it would be `7` because `115 (ASCII of 's') - 108 (ASCII of 'l') = 7`.

### **Final Output**
```
7
```

---

### **Statement: Dynamically allocated memory can only be accessed using pointers**  
The statement is **true** because dynamically allocated memory is accessed through pointers in C. 

#### **Reason**:
1. **Dynamic Memory Allocation**: Functions like `malloc()`, `calloc()`, or `realloc()` return a pointer to a block of memory allocated on the heap.  
   Example:  
   ```c
   int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers.
   ```
2. **Pointer Usage**: Without a pointer, there’s no way to reference or manipulate this memory block. Pointers act as the link between your program and the dynamically allocated memory.

#### **Key Point**:
Dynamic memory does not have a variable name associated with it. Instead, the memory address (returned by the allocation function) must be stored in a pointer for access.

---

### **Difference Between `calloc` and `malloc`**

| **Feature**               | **`malloc`**                                   | **`calloc`**                                |
|---------------------------|-----------------------------------------------|--------------------------------------------|
| **Function**              | Allocates a single block of memory.           | Allocates multiple blocks of memory.       |
| **Initialization**        | Does **not initialize** the allocated memory.  | Initializes the allocated memory to **0**. |
| **Syntax**                | `void *malloc(size_t size)`                   | `void *calloc(size_t n, size_t size)`      |
| **Parameters**            | Takes one parameter (total memory size).      | Takes two parameters (number of blocks and size of each block). |
| **Performance**           | Faster as it doesn’t initialize memory.       | Slightly slower due to memory initialization. |
| **Use Case**              | Suitable when no initialization is needed.    | Useful when zero-initialized memory is required. |

#### **Examples**:
1. **Using `malloc`**:
   ```c
   int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers.
   ```
   The memory content is uninitialized and may contain garbage values.

2. **Using `calloc`**:
   ```c
   int *ptr = (int *)calloc(5, sizeof(int)); // Allocates and initializes memory for 5 integers.
   ```
   All allocated memory is initialized to `0`.

---

### **Key Takeaway**:
Use `malloc` when initialization is not required or when performance is critical. Use `calloc` when you need memory to be initialized to zero.

---

### **Comparison of `malloc`, `calloc`, and `realloc` in C**

| **Feature**               | **`malloc`**                                   | **`calloc`**                                | **`realloc`**                                  |
|---------------------------|-----------------------------------------------|--------------------------------------------|-----------------------------------------------|
| **Purpose**               | Allocates a single block of memory.           | Allocates multiple blocks of memory, initializes to zero. | Resizes an already allocated memory block.    |
| **Initialization**        | Memory is **not initialized**.                | Memory is **initialized to 0**.             | Retains existing data up to the new size. New memory (if expanded) is uninitialized. |
| **Parameters**            | Takes one parameter: total memory size in bytes. | Takes two parameters: number of blocks and size of each block. | Takes a pointer to previously allocated memory and the new size in bytes. |
| **Return Value**          | Returns a pointer to the allocated memory.    | Returns a pointer to the allocated memory.  | Returns a pointer to resized memory, or `NULL` if reallocation fails. |
| **Use Case**              | When you know the exact size of memory required. | When you need zero-initialized memory.      | When you need to change the size of an existing memory block. |
| **Behavior on Failure**   | Returns `NULL` without changing the program's memory. | Returns `NULL` without changing the program's memory. | Returns `NULL`, but original memory block is not freed. |

---

### **Detailed Explanation of `realloc`**

The `realloc` function is used to resize a block of memory previously allocated by `malloc`, `calloc`, or another `realloc`. It adjusts the size of the memory block without losing the original data (up to the smaller of the old and new sizes).

#### **Syntax**:
```c
void *realloc(void *ptr, size_t new_size);
```

- **Parameters**:
  - `ptr`: Pointer to the memory block to resize. If `ptr` is `NULL`, it behaves like `malloc(new_size)`.
  - `new_size`: The new size of the memory block.

- **Behavior**:
  - If the new size is larger, the additional memory may contain garbage values.
  - If the new size is smaller, the excess memory is deallocated.

---

### **Examples**:

#### 1. **`malloc` Example**:
```c
int *arr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers.
```

#### 2. **`calloc` Example**:
```c
int *arr = (int *)calloc(5, sizeof(int)); // Allocates and initializes memory for 5 integers to 0.
```

#### 3. **`realloc` Example**:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int)); // Allocates memory for 3 integers.
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    // Resize the memory block to hold 5 integers.
    arr = (int *)realloc(arr, 5 * sizeof(int));
    arr[3] = 4; // Assign values to new memory.
    arr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Outputs: 1 2 3 4 5
    }

    free(arr); // Free the allocated memory.
    return 0;
}
```

---

### **Key Takeaways**:
- **`malloc`**: Allocates a single uninitialized memory block.
- **`calloc`**: Allocates and initializes memory to zero, suitable for arrays.
- **`realloc`**: Resizes existing memory blocks without losing data, making it flexible for dynamic arrays or data structures.

---


### **`strcpy` and `strncpy` in C**

Both `strcpy` and `strncpy` are used to copy strings from one location to another, but they have significant differences in how they handle memory and string termination.

---

### **`strcpy`**

#### **Definition**:
The `strcpy` function copies the contents of one string into another.

#### **Syntax**:
```c
char *strcpy(char *dest, const char *src);
```

- **`dest`**: Destination string where the content will be copied.
- **`src`**: Source string to be copied.

#### **Behavior**:
- Copies the entire `src` string, including the null terminator (`\0`), to the `dest` string.
- Assumes that the destination array is large enough to hold the source string and the null terminator.
- If the `dest` array is too small, it leads to **buffer overflow**, causing undefined behavior.

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50]; // Ensure the destination array is large enough.
    strcpy(dest, src);
    printf("Copied String: %s\n", dest); // Output: "Copied String: Hello, World!"
    return 0;
}
```

---

### **`strncpy`**

#### **Definition**:
The `strncpy` function copies up to a specified number of characters from one string to another.

#### **Syntax**:
```c
char *strncpy(char *dest, const char *src, size_t n);
```

- **`dest`**: Destination string where the content will be copied.
- **`src`**: Source string to be copied.
- **`n`**: Maximum number of characters to copy.

#### **Behavior**:
- Copies at most `n` characters from `src` to `dest`.
- If the length of `src` is less than `n`, the remainder of `dest` is padded with null bytes (`\0`).
- If the length of `src` is greater than or equal to `n`, no null terminator is added to `dest` unless explicitly included in `n`.

#### **Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[10];
    strncpy(dest, src, sizeof(dest) - 1); // Copy up to 9 characters
    dest[9] = '\0'; // Ensure null termination
    printf("Copied String: %s\n", dest); // Output: "Copied String: Hello, Wo"
    return 0;
}
```

---

### **Key Differences Between `strcpy` and `strncpy`**

| Feature               | `strcpy`                          | `strncpy`                             |
|-----------------------|-----------------------------------|---------------------------------------|
| **Null Termination**  | Always adds a null terminator to `dest`. | May not add a null terminator if `n` is smaller than the length of `src`. |
| **Number of Characters Copied** | Copies the entire `src` string including the null terminator. | Copies at most `n` characters. |
| **Padding**           | Does not pad the destination string. | Pads `dest` with null bytes if `src` is shorter than `n`. |
| **Risk of Overflow**  | High risk if `dest` is not large enough. | Safer, but care is still needed for null termination. |
| **Use Case**          | When you know `dest` is large enough. | When you need to copy a limited number of characters or deal with fixed-size buffers. |

---

### **When to Use?**
- Use `strcpy` when you are certain the destination buffer is large enough and the source string is null-terminated.  
- Use `strncpy` for safer copying when working with fixed-size buffers, but ensure to handle null termination explicitly if `n` is less than the length of `src`.

---

### Algorithm to Concatenate Two Strings Without Using `strcat`

To concatenate two strings manually, we will append the characters of the second string (`str2`) to the end of the first string (`str1`) without using the built-in `strcat` function.

---

### **Algorithm**

1. **Input**: Two strings `str1` and `str2`.
2. **Find the Length of `str1`**: 
   - Traverse `str1` to find its length (`len1`), where the null terminator (`\0`) is encountered.
3. **Append `str2` to `str1`**:
   - Start from `len1` and copy each character of `str2` to `str1`.
   - Keep appending until the null terminator of `str2` is reached.
4. **Terminate the Resulting String**:
   - Add a null terminator (`\0`) at the end of the concatenated string.
5. **Output**: The concatenated string in `str1`.

---

### **Pseudocode**

```plaintext
Algorithm ConcatenateStrings
Input: str1 (destination string), str2 (source string)
Output: str1 with str2 appended

1. Initialize i = 0, j = 0
2. While str1[i] is not '\0'
       Increment i (to find the length of str1)
3. While str2[j] is not '\0'
       str1[i] = str2[j]  // Append characters of str2 to str1
       Increment i and j
4. str1[i] = '\0'         // Add null terminator to the concatenated string
5. Return str1
```

---

### **Example**

#### Input:
```plaintext
str1 = "Hello"
str2 = " World"
```

#### Execution:
1. Find the length of `str1`: `len1 = 5`.
2. Start appending `str2` from `str1[5]`:
   - `str1[5] = ' '`, `str1[6] = 'W'`, `str1[7] = 'o'`, ..., `str1[11] = 'd'`.
3. Add null terminator at `str1[12]`.
4. Result: `str1 = "Hello World"`.

---

### **C Code Implementation**
```c
#include <stdio.h>

void concatenate(char *str1, const char *str2) {
    int i = 0, j = 0;

    // Find the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator
    str1[i] = '\0';
}

int main() {
    char str1[50] = "Hello";  // Ensure str1 has enough space to hold both strings
    char str2[] = " World";

    concatenate(str1, str2);

    printf("Concatenated String: %s\n", str1); // Output: "Hello World"

    return 0;
}
```

---

### **Key Notes**
1. Ensure the destination string (`str1`) has enough space to store both `str1` and `str2`.
2. This approach manually handles string manipulation, avoiding built-in functions like `strcat`.
3. The time complexity is \(O(n + m)\), where \(n\) is the length of `str1` and \(m\) is the length of `str2`.

---

### **Short Note on `goto` Statement**

The `goto` statement in C provides an unconditional jump to a labeled part of the program. It allows the program's control to jump directly to a specified label, bypassing the usual sequence of execution.

#### **Syntax**:
```c
goto label;
...
label:
    // code to execute
```

#### **Example**:
```c
#include <stdio.h>
int main() {
    int num = 10;
    if (num > 5) {
        goto greater;
    }
    printf("Number is not greater than 5.\n");
    return 0;

greater:
    printf("Number is greater than 5.\n");
    return 0;
}
```

#### **Features of `goto`**:
1. `goto` is typically used for:
   - Exiting deeply nested loops or conditionals.
   - Handling exceptional cases in low-level programming.

2. While it can simplify certain tasks, its misuse leads to **"spaghetti code"**—programs with complex and tangled control flow.

---

### **Advantages**:
- **Simplifies Error Handling**: Useful for breaking out of deeply nested loops or complex conditions.
- **Readability in Rare Cases**: In very small programs, `goto` might make control flow simpler to understand.

---

### **Disadvantages**:
- **Readability Issues**: It disrupts the natural flow of the program, making the code harder to understand and maintain.
- **Debugging Difficulties**: Programs with multiple `goto` statements can be challenging to debug and trace.
- **Modern Alternatives**: Structured programming constructs like `break`, `continue`, or function calls make `goto` largely unnecessary.

---

### **Would I Prefer to Use `goto`?**
As a programmer, I would **avoid using the `goto` statement** unless absolutely necessary. Modern programming practices emphasize structured and readable code, and there are usually better alternatives like loops, conditionals, or functions.

#### **Justification**:
- Using `goto` makes the code less maintainable and harder to debug.
- Structured constructs achieve the same goals more cleanly and logically.
- In rare cases (e.g., low-level system programming or exiting deeply nested loops), `goto` might be justified, but such situations are uncommon in modern programming. 

In conclusion, while `goto` is a valid construct, its drawbacks in readability and maintainability outweigh its benefits, especially with the availability of better alternatives.

---

### **Memory Leak in C**

A **memory leak** occurs when a program allocates memory dynamically (using `malloc`, `calloc`, or `realloc`) but fails to release it (using `free`) when it is no longer needed. As a result, the program consumes more memory over time, leading to reduced system performance and potentially causing the system to run out of memory.

---

### **How Memory Leak Happens**
When you allocate memory dynamically, it resides in the heap. If you do not free the allocated memory properly, the memory remains in the heap, even if the program no longer uses it. The memory is "lost" because the pointer to it may no longer be accessible, but the system has not released it.

#### **Example of Memory Leak**:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(10 * sizeof(int));  // Memory is allocated for 10 integers.
    
    // Some operations here...

    // Forget to call free(ptr), leading to a memory leak.

    return 0;
}
```

In the above example, `malloc` allocates memory for 10 integers, but no `free` call is made to release that memory, leading to a memory leak.

---

### **Causes of Memory Leaks**

1. **Failure to Call `free`**: After dynamically allocated memory is no longer needed, if `free` is not called, the memory remains allocated.
   
2. **Overwriting Pointers**: If a pointer pointing to dynamically allocated memory is overwritten without first calling `free`, the reference to the memory is lost, causing a memory leak.

   ```c
   int *ptr = (int *)malloc(10 * sizeof(int));
   ptr = (int *)malloc(20 * sizeof(int));  // Memory allocated by the first malloc is leaked!
   ```

3. **Memory Allocation Inside a Loop**: Repeatedly allocating memory in a loop without freeing previously allocated memory can lead to continuous memory consumption, leading to a leak.

4. **Exceptions and Error Handling**: In cases where the program encounters an error before calling `free` (e.g., in a function that exits prematurely), dynamically allocated memory may not be freed.

---

### **How to Overcome Memory Leaks**

1. **Always Use `free`**: Ensure that every call to `malloc`, `calloc`, or `realloc` is matched with a corresponding call to `free` when the allocated memory is no longer needed.
   
   ```c
   int *ptr = (int *)malloc(10 * sizeof(int));
   // Do something with ptr
   free(ptr);  // Properly release the allocated memory.
   ```

2. **Set Pointers to `NULL` After `free`**: After freeing a pointer, set it to `NULL`. This prevents accessing freed memory (dangling pointer) and can help avoid bugs where a pointer is mistakenly used after being freed.
   
   ```c
   free(ptr);
   ptr = NULL;  // Avoids accessing freed memory.
   ```

3. **Use Memory Management Tools**:
   - **Valgrind**: A tool for detecting memory leaks and other memory-related issues in C programs. It can identify locations where memory was allocated but not freed.
   - **Static Analysis Tools**: Some IDEs and linters offer static analysis to help identify potential memory leaks.

4. **Track Allocations and Deallocations**: Maintain a systematic approach to memory management, especially in complex programs. You can use tools to log memory allocations and deallocations to ensure consistency.

5. **Code Reviews**: Regular code reviews and testing can help catch potential memory leaks early.

---

### **Summary**

A memory leak occurs when a program allocates memory but doesn't release it when it's no longer needed, leading to wasted memory resources. This typically happens due to the failure to call `free`, overwriting pointers without freeing memory, or memory allocation mistakes in loops or error-prone code.

To avoid memory leaks:
- Always free dynamically allocated memory.
- Set pointers to `NULL` after freeing them.
- Use tools like Valgrind to detect leaks.
- Maintain good coding practices and memory management discipline.


---

### **Function Prototypes in C Programming**

A **function prototype** in C is a declaration of a function that specifies its return type, name, and parameters (without the function body). It informs the compiler about the function's interface, allowing the function to be used before it is defined or implemented.

The function prototype is typically placed at the beginning of a program or in a header file, making the function available throughout the program.

---

### **Syntax of Function Prototype**
The syntax of a function prototype is:
```c
return_type function_name(parameter_list);
```

- **`return_type`**: Specifies the type of value the function will return (e.g., `int`, `float`, `void`).
- **`function_name`**: The name of the function.
- **`parameter_list`**: A list of parameters (types and names) that the function takes. If there are no parameters, `void` can be used.

#### **Example of Function Prototype**:
```c
#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int result = add(10, 20);  // Function call
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

---

### **Explanation of Example**

1. **Function Prototype**: 
   ```c
   int add(int, int);
   ```
   This declares a function named `add` that takes two `int` arguments and returns an `int` value. The function body is not provided at this point, just the declaration.

2. **Function Call**: 
   ```c
   int result = add(10, 20);
   ```
   In the `main` function, we call the `add` function, passing two integer arguments. Since the compiler knows about the function prototype, it can compile the function call correctly even though the full definition of `add` comes later.

3. **Function Definition**:
   ```c
   int add(int a, int b) {
       return a + b;
   }
   ```
   The `add` function is defined below `main`, which returns the sum of the two input integers.

---

### **Why Function Prototypes Are Useful in Large Programs**

In large programs, function prototypes offer several important advantages:

1. **Enables Forward Declarations**:
   - **Forward Declarations** allow functions to be called before their full definitions appear in the code. This is particularly useful when the function is defined after the point of its first use.
   - Without prototypes, you would have to define the entire function before it could be called, which could lead to poor organization and harder-to-read code.

2. **Helps with Function Signatures**:
   - Prototypes specify the function's return type and parameters, which helps the compiler enforce correct usage of the function. This ensures that the correct number and types of arguments are passed, preventing errors such as passing a `float` where an `int` is expected.
   - The compiler can generate better error messages if a function is called incorrectly.

3. **Improves Code Readability**:
   - By providing a clear interface for each function, prototypes make it easier to understand the function's purpose, parameters, and return type without needing to read the entire function implementation.
   - Prototypes are especially useful in large programs with many functions spread across different files.

4. **Encourages Modular Design**:
   - In large projects, functions are often divided into multiple files (e.g., source code and header files). Prototypes allow the functions to be declared in header files and defined in source files, making it easier to separate the interface (what the function does) from the implementation (how it works).

5. **Error Detection**:
   - Function prototypes help detect errors early during compilation, especially when there is a mismatch between the declared parameters in the prototype and the arguments passed to the function.

---

### **Example of Prototypes in Large Programs**

In a large program, function prototypes are often placed in header files (`.h`), while the function definitions are in source files (`.c`).

#### **Example Header File (`math_operations.h`)**:
```c
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

int add(int, int);
int subtract(int, int);
float divide(float, float);

#endif
```

#### **Example Source File (`math_operations.c`)**:
```c
#include "math_operations.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float divide(float a, float b) {
    if (b == 0) {
        return 0;  // Error handling: division by zero.
    }
    return a / b;
}
```

#### **Example Main File (`main.c`)**:
```c
#include <stdio.h>
#include "math_operations.h"

int main() {
    int result1 = add(10, 5);
    int result2 = subtract(10, 5);
    float result3 = divide(10.0, 2.0);

    printf("Addition: %d\n", result1);
    printf("Subtraction: %d\n", result2);
    printf("Division: %.2f\n", result3);

    return 0;
}
```

---

### **Summary**

A **function prototype** provides a declaration of a function's name, return type, and parameters before the function is used or defined in the code. It is especially helpful in large programs for:

- Enabling forward declarations.
- Ensuring correct function usage.
- Improving modularity and readability.
- Providing early error detection.

Using function prototypes allows the program to be structured efficiently, promoting good programming practices and easier maintenance.

---

### **Why Use Functions in C?**

Functions are a fundamental part of C programming that help organize code into reusable, modular, and manageable units. Instead of writing repetitive code, functions allow developers to create reusable code blocks that can be invoked whenever needed.

---

### **Advantages of Using Functions**

1. **Code Reusability**:
   - Functions can be written once and reused multiple times, reducing redundancy and saving time.

2. **Modularity**:
   - Functions divide a program into smaller, logical chunks, making the code easier to read, understand, and debug.

3. **Ease of Debugging**:
   - By isolating functionality in functions, you can debug specific parts of the program without affecting the rest.

4. **Improved Readability**:
   - Functions help organize code and describe the purpose of specific blocks through meaningful names, making the code self-explanatory.

5. **Easier Maintenance**:
   - Changes in functionality can be implemented in one place (the function definition), making updates easier and reducing the likelihood of errors.

6. **Facilitates Teamwork**:
   - Functions make it easier for multiple developers to work on different parts of the same program simultaneously.

7. **Scalability**:
   - Functions make it easier to add new features to a program by providing a structure for implementing new functionality.

---

### **Types of Functions in C**

C provides different types of functions based on their usage and purpose. They can broadly be classified into:

#### **1. Built-in Functions (Library Functions)**
These are pre-defined functions provided by the C standard library. They perform common tasks like input/output, mathematical calculations, and string handling. Examples include:
   - `printf()` and `scanf()` (Input/Output operations)
   - `strlen()` and `strcpy()` (String operations)
   - `sqrt()` and `pow()` (Mathematical operations)

#### **2. User-defined Functions**
These are custom functions created by the programmer to perform specific tasks. They are defined explicitly in the program and can be reused as needed.

---

### **Classification of User-defined Functions**

#### **a. Based on Return Type**
1. **Void Functions**:
   - These functions do not return any value.
   - Example:
     ```c
     void greet() {
         printf("Hello, World!\n");
     }
     ```

2. **Non-void Functions**:
   - These functions return a value of a specific type (e.g., `int`, `float`, etc.).
   - Example:
     ```c
     int add(int a, int b) {
         return a + b;
     }
     ```

#### **b. Based on Parameters**
1. **Functions Without Parameters**:
   - These functions do not take any arguments.
   - Example:
     ```c
     void display() {
         printf("No parameters here!\n");
     }
     ```

2. **Functions With Parameters**:
   - These functions take one or more arguments.
   - Example:
     ```c
     int multiply(int a, int b) {
         return a * b;
     }
     ```

#### **c. Based on Function Calling**
1. **Call by Value**:
   - A copy of the actual argument is passed to the function.
   - Changes made to the parameter inside the function do not affect the original value.
   - Example:
     ```c
     void modify(int x) {
         x = 10;
     }
     ```

2. **Call by Reference**:
   - The address of the actual argument is passed to the function.
   - Changes made to the parameter inside the function affect the original value.
   - Example:
     ```c
     void modify(int *x) {
         *x = 10;
     }
     ```

---

### **Example of Functions in Action**
```c
#include <stdio.h>

// Function prototypes
void greet();
int add(int, int);
float divide(float, float);

int main() {
    greet();

    int sum = add(10, 20);
    printf("Sum: %d\n", sum);

    float result = divide(20.0, 5.0);
    printf("Division Result: %.2f\n", result);

    return 0;
}

// Function Definitions
void greet() {
    printf("Welcome to the Program!\n");
}

int add(int a, int b) {
    return a + b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0.0;
    }
    return a / b;
}
```

---

### **Summary**

Using functions in C enhances **code organization**, **reusability**, and **readability**. Functions can be classified into **built-in functions** and **user-defined functions**, with further subdivisions based on return types, parameters, and calling methods. By leveraging functions, programmers can build modular and scalable applications, making development and maintenance more efficient.

---


### **Answers**

#### **1.A. How does a function return an array?**
In C, a function cannot directly return an array. However, it can return a pointer to an array or use structures to achieve this. One common method is to allocate the array dynamically and return a pointer.

**Example**:
```c
#include <stdio.h>
#include <stdlib.h>

int* generateArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));  // Dynamic memory allocation
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;  // Assign values
    }
    return arr;
}

int main() {
    int* arr = generateArray(5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);  // Free memory
    return 0;
}
```

---

#### **1.8. What are arrays? In C, can you have arrays of any data type?**
An **array** is a collection of elements of the same data type stored in contiguous memory locations. 

Yes, in C, you can have arrays of any data type, including:
- **Primitive types**: `int`, `float`, `char`
- **Derived types**: Pointers, structures, etc.

---

#### **2.A. Syntax of declaring a pointer**
```c
data_type *pointer_name;
```

**Example**:
```c
int *ptr;  // Pointer to an integer
float *fptr;  // Pointer to a float
```

---

#### **How does modular programming increase readability?**
Modular programming increases readability by dividing a program into smaller, self-contained units (functions or modules). Each module handles a specific task, making the program:
1. **Easier to understand**.
2. **Easier to debug**.
3. **Reusable** for future projects.

---

#### **What is the default value of an array?**
In C:
- Arrays declared locally have **garbage values** by default.
- Arrays declared globally or as static variables are **initialized to zero** by default.

---

#### **State two differences between `do` and `do-while` loop**

| **Aspect**            | **`do` Loop**                        | **`do-while` Loop**                    |
|-----------------------|--------------------------------------|----------------------------------------|
| **Condition Check**    | Does not exist (only executes once) | Condition is checked at the end.       |
| **Execution Guarantee** | Executes exactly once.             | Executes at least once, even if false. |

---

#### **4.A. Why do we consider an array homogeneous?**
An array is considered homogeneous because all its elements are of the **same data type**, ensuring uniform operations and storage.

---

#### **4.8. Is it necessary that all the elements of a structure should be the same size?**
No, structure elements can have different sizes and data types.

---

#### **5.A. Can a function return any address?**
Yes, a function can return an address using pointers. This is commonly used to return addresses of arrays, dynamically allocated memory, or variables.

**Example**:
```c
int* returnAddress(int* ptr) {
    return ptr;  // Return the address of the input pointer
}
```

---

#### **5.B. What do you mean by Whitespace Characters?**
Whitespace characters are characters used to separate tokens in C code. These include:
- Space (`' '`).
- Tab (`'\t'`).
- Newline (`'\n'`).

---

#### **6.A. What is nested if-else?**
A **nested if-else** statement is an `if-else` statement inside another `if` or `else` block, used for complex decision-making.

**Example**:
```c
if (a > 0) {
    if (a % 2 == 0) {
        printf("Positive Even Number");
    } else {
        printf("Positive Odd Number");
    }
} else {
    printf("Negative Number");
}
```

---

#### **6.8. What is a constant?**
A **constant** is a variable whose value cannot be changed during program execution. Declared using the `const` keyword.

**Example**:
```c
const int PI = 3.14;
```

---

#### **7.A. Properties of a Function**
1. Must have a unique name.
2. Can have input parameters and return values.
3. Can be called multiple times from different parts of the program.
4. Promotes code modularity and reuse.

---

#### **7.8. Properties of a Recursive Function**
1. Calls itself directly or indirectly.
2. Must have a base condition to prevent infinite recursion.
3. Used for problems that can be broken down into smaller, similar subproblems.

---

#### **What is the use of `fclose()`?**
The `fclose()` function closes a file opened with `fopen()`, releasing associated resources.

**Syntax**:
```c
int fclose(FILE *stream);
```

---

#### **Explain `strcat()` with an Example**
The `strcat()` function concatenates two strings.

**Example**:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s\n", str1);  // Output: Hello, World!
    return 0;
}
```

---

#### **What are the types of C preprocessors?**
1. **Macro Preprocessors**: Define macros (`#define`).
2. **File Inclusion Preprocessors**: Include header files (`#include`).
3. **Conditional Compilation Preprocessors**: Compile code selectively (`#ifdef`, `#ifndef`).

---

#### **Similarity Between Structure and Union**
- Both are user-defined data types.
- Both can contain multiple members of different data types.

---

#### **Difference Between Structure and Union**

| **Aspect**       | **Structure**                      | **Union**                         |
|------------------|------------------------------------|------------------------------------|
| **Memory Usage** | Allocates memory for all members. | Allocates memory for the largest member only. |
| **Access**       | All members can be accessed simultaneously. | Only one member can hold a value at a time. |

---

#### **What is a Dangling Pointer?**
A **dangling pointer** is a pointer that points to a memory location that has been deallocated or freed.

**Example**:
```c
int *ptr = (int*)malloc(sizeof(int));
free(ptr);  // ptr now becomes a dangling pointer.
```

---

#### **Properties of While Loop**
1. The condition is evaluated before each iteration.
2. The loop body may not execute if the condition is initially false.
3. Suitable for scenarios where the number of iterations is not known in advance.

---

### **Where is the system status saved when a procedure (or function) calls another?**

When a procedure or function calls another in C, the **system status** (such as the return address, local variables, and parameters) is saved in the **call stack**. The call stack is a special region of memory that holds information about the function calls. 

The key elements saved during a function call include:
1. **Return address**: The address to which control should return after the function completes execution.
2. **Function parameters**: The arguments passed to the function.
3. **Local variables**: The variables declared within the function.

When a function call occurs, a **stack frame** is created in the call stack, which stores this information. Upon returning from the function, the stack frame is removed, and control returns to the calling function.

---

### **Distinguish Between Recursion and Iteration**

| **Aspect**              | **Recursion**                                             | **Iteration**                                              |
|-------------------------|-----------------------------------------------------------|------------------------------------------------------------|
| **Definition**          | A process where a function calls itself.                 | A repetitive process where a loop is used to repeat an action. |
| **Function Calls**      | Involves function calls within the same function.         | Involves loops (like `for`, `while`) to repeat the process. |
| **Memory Usage**        | Recursion uses the call stack, leading to higher memory usage for deep recursion. | Iteration uses a fixed amount of memory, and memory usage remains constant. |
| **Termination Condition**| Must have a **base case** to stop recursive calls.       | Loops have a **loop condition** to terminate. |
| **Performance**         | May be less efficient due to overhead of function calls. | Generally more efficient as it avoids overhead. |

---

### **Write a Recursive Function for Finding the Following Series of n Terms:**

The series is: \(1^1 + 2^2 + 3^3 + \dots + n^n\).

Here’s a recursive function to calculate the sum:

```c
#include <stdio.h>
#include <math.h>

// Recursive function to calculate the sum of the series 1^1 + 2^2 + 3^3 + ... + n^n
int sumSeries(int n) {
    // Base case: when n is 1, return 1^1
    if (n == 1) {
        return 1;
    }
    // Recursive case: n^n + sum of the previous terms
    return pow(n, n) + sumSeries(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Sum of the series: %d\n", sumSeries(n));
    return 0;
}
```

**Explanation**:
- The function `sumSeries(n)` recursively calculates the sum of the series \(1^1 + 2^2 + \dots + n^n\).
- The base case is when `n` equals 1, returning \(1^1\).
- The recursive case calculates \(n^n\) and adds the result of `sumSeries(n - 1)` to it, until the base case is reached.

---

### **How Are Libraries Functions Created? What Are Their Advantages?**

**Creation of Library Functions**:
Library functions are created by writing a function in a source code file, compiling it, and storing it in a library file (either static `.a` or dynamic `.so` or `.dll`). For example:
1. Write a function, e.g., `add()`.
2. Compile it into an object file `.o` or `.obj`.
3. Link it into a library (`.a`, `.so`, or `.dll`).
4. When creating applications, link the program to the library during compilation or runtime.

**Advantages**:
1. **Code Reusability**: Library functions provide a reusable set of functions that can be used across multiple programs.
2. **Modularity**: Functions are grouped into logical libraries, making the code modular and easy to maintain.
3. **Efficiency**: Pre-written and optimized functions reduce the development time and effort.
4. **Portability**: Libraries can be used on different platforms without modifying the code.
5. **Security**: Libraries are often tested and optimized, ensuring stability and reliability.

---

### **How Does Memory Allocation Work in Recursive Functions?**

In recursive functions, memory allocation works as follows:
1. **Function Calls**: Every time a function is called, a **new stack frame** is created in the **call stack**. The stack frame contains local variables, function parameters, and return address information.
2. **Recursive Calls**: For each recursive call, a new stack frame is created. The deeper the recursion, the more memory is consumed by stack frames.
3. **Base Case**: Once the base case is reached, the recursion stops, and the function calls start returning. As each function returns, its stack frame is removed, freeing the memory.
4. **Memory Efficiency**: If the recursion is deep, it can lead to a **stack overflow** due to excessive memory usage. This happens when the function calls exceed the call stack's capacity.

For recursive functions, **dynamic memory allocation** (using `malloc()` or `calloc()`) can also be used to allocate memory for data structures like arrays or linked lists if the function requires.

**Example**:
```c
void recursiveFunction(int n) {
    if (n == 0) {
        return;
    }
    // Local variable allocated for each call
    int temp = n;
    recursiveFunction(n - 1);  // Recursive call
    // Stack frame is released once function returns
}
```

- In this example, every time `recursiveFunction` is called, the `temp` variable is allocated in the stack, and the memory is freed after returning from the function.

---

### **Differences Between Function Prototype, Function Definition, and Function Call**

| **Aspect**               | **Function Prototype**                                                                                     | **Function Definition**                                                                 | **Function Call**                                            |
|--------------------------|-----------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------|-------------------------------------------------------------|
| **Purpose**              | Declares the function, its return type, and parameters to the compiler.                                   | Contains the actual code for the function's task.                                      | Executes the function by passing arguments.                 |
| **Location**             | Appears at the beginning of the program or in a header file.                                              | Defined in the program body or a separate source file.                                 | Written in the main function or other parts of the program. |
| **Syntax**               | `return_type function_name(parameter_list);`                                                              | `return_type function_name(parameter_list) { /* Function Body */ }`                    | `function_name(arguments);`                                  |
| **Example**              | `int add(int, int);`                                                                                     | `int add(int a, int b) { return a + b; }`                                              | `int result = add(5, 3);`                                    |

---

### **Working Principles of `calloc()` and `realloc()`**

#### **`calloc()`**
1. **Purpose**: Allocates a block of memory for an array of elements, initializing all bytes to zero.
2. **Syntax**:
   ```c
   void* calloc(size_t num, size_t size);
   ```
   - `num`: Number of elements.
   - `size`: Size of each element.
3. **Working**:
   - Allocates memory dynamically for `num` elements.
   - Initializes the allocated memory to `0`.
4. **Example**:
   ```c
   int* arr = (int*)calloc(5, sizeof(int));  // Allocates memory for 5 integers
   ```

#### **`realloc()`**
1. **Purpose**: Changes the size of a previously allocated memory block.
2. **Syntax**:
   ```c
   void* realloc(void* ptr, size_t new_size);
   ```
   - `ptr`: Pointer to the previously allocated memory.
   - `new_size`: New size in bytes.
3. **Working**:
   - Expands or shrinks the memory block pointed by `ptr`.
   - Contents of the original memory are preserved up to the lesser of the old or new size.
4. **Example**:
   ```c
   arr = (int*)realloc(arr, 10 * sizeof(int));  // Resize to hold 10 integers
   ```

---

### **C Program: Passing an Array Among Functions as Argument and Returning an Array**

```c
#include <stdio.h>

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* doubleArray(int arr[], int size) {
    static int result[100];
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 2;
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    displayArray(arr, size);

    int* doubledArr = doubleArray(arr, size);

    printf("Doubled Array: ");
    displayArray(doubledArr, size);

    return 0;
}
```

---

### **Why Does a Void Pointer Need Explicit Typecasting Before Being Dereferenced?**
- A **void pointer** does not have a defined data type.
- To dereference a void pointer, the compiler must know the size of the data it points to.
- Explicit typecasting specifies the data type, enabling the compiler to correctly access the memory.

**Example**:
```c
void* ptr;
int x = 10;
ptr = &x;

printf("%d\n", *(int*)ptr);  // Explicitly typecasting to int*
```

---

### **What Is Meant by Dereferencing?**
Dereferencing a pointer means accessing the value stored at the memory location pointed to by the pointer.

**Example**:
```c
int x = 10;
int* ptr = &x;
printf("%d\n", *ptr);  // Dereferencing the pointer to access x
```

#### **Difference Between Pointer and Dereference Pointer**

| **Pointer**                    | **Dereference Pointer**                      |
|--------------------------------|---------------------------------------------|
| Holds the memory address of a variable. | Accesses the value at the stored address. |
| Syntax: `int* ptr = &x;`        | Syntax: `*ptr`                              |

---

### **C Program: Sort an Array Using Pointers**

```c
#include <stdio.h>

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    sortArray(arr, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
```

**Output**:
```
Original Array: 5 2 9 1 6
Sorted Array: 1 2 5 6 9
```
---

### **Linker and Loader in C**

1. **Linker**:
   - The **linker** is a tool that combines object files generated by the compiler into a single executable file.
   - Responsibilities:
     - Resolves references between functions and variables across different object files.
     - Links library files to the program if library functions are used.
     - Produces an executable file.
   - Example:
     - If you have `main.c` and `helper.c` compiled into `main.o` and `helper.o`, the linker combines them into `a.out` or another executable.

2. **Loader**:
   - The **loader** is part of the operating system that loads the executable into memory for execution.
   - Responsibilities:
     - Allocates memory for the program.
     - Sets up the execution environment.
     - Resolves dynamic linking if required.

---

### **Why C is Called Procedural and Structured Programming Language**

1. **Procedural**:
   - C focuses on **procedures or routines** (functions) to perform tasks.
   - Programs are broken into smaller functions for modularity and code reuse.
   - Example: `main()` is a procedural entry point, and other functions define specific tasks.

2. **Structured**:
   - C supports **structured programming concepts** such as sequence, selection (`if-else`), and iteration (`loops`).
   - It allows control flow structures that make the program readable and maintainable.
   - Example: Using `if-else` and loops to structure the program.

---

### **C Program: Find the Highest Common Factor (HCF) Using Recursion**

```c
#include <stdio.h>

// Recursive function to find HCF
int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));
    return 0;
}
```

---

### **Explain `strlen()` in C**

1. **Definition**:
   - `strlen()` is a standard library function declared in `<string.h>`.
   - It calculates the **length of a string** (excluding the null character `\0`).

2. **Syntax**:
   ```c
   size_t strlen(const char* str);
   ```

3. **Example**:
   ```c
   #include <stdio.h>
   #include <string.h>

   int main() {
       char str[] = "Hello, World!";
       printf("Length of the string: %zu\n", strlen(str));  // Output: 13
       return 0;
   }
   ```

---

### **Actual Argument and Formal Argument**

1. **Actual Argument**:
   - The values or variables passed to a function when it is called.
   - Example:
     ```c
     int result = add(5, 3);  // 5 and 3 are actual arguments
     ```

2. **Formal Argument**:
   - The parameters defined in the function declaration or definition to receive the actual arguments.
   - Example:
     ```c
     int add(int a, int b) {  // a and b are formal arguments
         return a + b;
     }
     ```

---

### **All Binary Operators in C (With Priorities)**

Binary operators operate on two operands. They are grouped by functionality and priority (from highest to lowest):

1. **Arithmetic Operators**:
   - `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), `%` (modulus).
   - Priority: `*`, `/`, `%` > `+`, `-`.

2. **Relational Operators**:
   - `<`, `<=`, `>`, `>=`, `==`, `!=`.
   - Priority: `==`, `!=` > `<`, `<=`, `>`, `>=`.

3. **Logical Operators**:
   - `&&` (logical AND), `||` (logical OR).
   - Priority: `&&` > `||`.

4. **Bitwise Operators**:
   - `&` (AND), `|` (OR), `^` (XOR), `<<` (left shift), `>>` (right shift).
   - Priority: `<<`, `>>` > `&` > `^` > `|`.

5. **Assignment Operators**:
   - `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=`.
   - Priority: Lowest among binary operators.

6. **Example**:
   ```c
   int x = 10, y = 20, z;
   z = x + y * 2;  // Multiplication (*) has higher priority than addition (+)
   printf("%d\n", z);  // Output: 50
   ```

---

### **Detailed Description of Binary Operators by Priority**

| **Operator** | **Description**                      | **Example**                      |
|--------------|--------------------------------------|----------------------------------|
| `*`, `/`, `%`| Multiplication, division, modulus.   | `z = x * y;`                    |
| `+`, `-`     | Addition, subtraction.               | `z = x + y;`                    |
| `<<`, `>>`   | Left and right shift.                | `z = x << 2;`                   |
| `<, <=, >, >=`| Relational operators.               | `if (x < y)`                    |
| `==, !=`     | Equality and inequality.             | `if (x == y)`                   |
| `&`          | Bitwise AND.                         | `z = x & y;`                    |
| `^`          | Bitwise XOR.                         | `z = x ^ y;`                    |
| `|`          | Bitwise OR.                          | `z = x | y;`                    |
| `&&`         | Logical AND.                         | `if (x && y)`                   |
| `||`         | Logical OR.                          | `if (x || y)`                   |
| `=`          | Assignment.                          | `x = y;`                        |

---



### **Q1: What is dynamic memory allocation? How does it differ from static memory allocation?**  
- **Dynamic Memory Allocation**: Memory is allocated at runtime using library functions like `malloc()`, `calloc()`, `realloc()`, and `free()`.  
- **Static Memory Allocation**: Memory is allocated at compile-time and cannot be resized during execution.  

**Key Differences**:  
| **Aspect**             | **Static Allocation**                     | **Dynamic Allocation**                  |
|-------------------------|-------------------------------------------|------------------------------------------|
| **Timing**              | Compile-time                             | Runtime                                  |
| **Flexibility**         | Fixed size                               | Can resize as needed                     |
| **Functions Used**      | Not applicable                           | `malloc()`, `calloc()`, `realloc()`, etc.|
| **Storage Location**    | Stack or global memory                   | Heap                                     |

---

### **Q2: Explain the functions `malloc()`, `calloc()`, `realloc()`, and `free()`. Provide examples.**

#### **1. `malloc()`**:
- Allocates a block of memory of specified size.  
- Does not initialize the memory.  

**Syntax**:  
```c
void* malloc(size_t size);
```

**Example**:  
```c
int *ptr = (int *)malloc(5 * sizeof(int));  // Allocates memory for 5 integers.
```

---

#### **2. `calloc()`**:
- Allocates memory for an array of elements and initializes all bytes to zero.  

**Syntax**:  
```c
void* calloc(size_t num, size_t size);
```

**Example**:  
```c
int *ptr = (int *)calloc(5, sizeof(int));  // Allocates memory for 5 integers and initializes them to zero.
```

---

#### **3. `realloc()`**:
- Resizes a previously allocated memory block.  

**Syntax**:  
```c
void* realloc(void *ptr, size_t size);
```

**Example**:  
```c
ptr = (int *)realloc(ptr, 10 * sizeof(int));  // Resizes the memory block to hold 10 integers.
```

---

#### **4. `free()`**:
- Frees previously allocated memory to avoid memory leaks.  

**Syntax**:  
```c
void free(void *ptr);
```

**Example**:  
```c
free(ptr);  // Frees the allocated memory.
```

---

### **Q3: What are the advantages of dynamic memory allocation?**  
1. **Efficient Memory Usage**: Allocates memory as needed at runtime, avoiding wastage.  
2. **Flexibility**: Memory blocks can be resized using `realloc()`.  
3. **Dynamic Structures**: Supports creation of dynamic data structures like linked lists, stacks, and queues.  
4. **Large Memory Access**: Allows allocation from the heap, which is typically larger than the stack.

---


### **Q8: How does the `free()` function help in memory management?**  
The `free()` function releases the memory allocated using `malloc()`, `calloc()`, or `realloc()`. This helps:  
- Prevent **memory leaks**.  
- Make memory available for future allocations.  

**Example**:  
```c
int *ptr = (int *)malloc(5 * sizeof(int));
free(ptr);  // Frees the memory allocated to `ptr`.
```


---