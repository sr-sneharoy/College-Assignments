# Detailed Answers

### (a) The keyword
The keyword `typedef` can be used to create a data type identifier in C. It allows you to define new names (aliases) for existing data types, making your code more readable and easier to maintain.

---

### (b) The largest value that an `unsigned short int` type variable can store
The largest value that an `unsigned short int` can store is **65,535**. This is because `unsigned short int` typically uses **16 bits**, and the range for an unsigned integer is \( 0 \) to \( 2^{16} - 1 \).

---

### (c) A global variable is also known as
A **global variable** is also known as a **file-scope variable**. It is accessible from any function within the same file or program, provided no other scope restricts its visibility.

---

### (d) A variable can be made constant by declaring it with the qualifier
A variable can be made constant by declaring it with the **`const`** qualifier. This ensures that the variable’s value cannot be modified after its initialization.

---

### 2.3 What are trigraph characters? How are they useful?
**Trigraph characters** are a set of three-character sequences in C that are replaced with a single character. They were introduced to represent certain characters that might not be easily accessible on some keyboards. For example:

| Trigraph  | Replacement |
|-----------|-------------|
| `??=`     | `#`         |
| `??(`     | `[`         |
| `??)`     | `]`         |
| `??'`     | `^`         |
| `??<`     | `{`         |
| `??>`     | `}`         |
| `??!`     | `|`         |
| `??-`     | `~`         |

**Usefulness**:
- Trigraphs make it possible to write C code on systems that do not support certain special characters directly.

---

### 2.4 Describe the four basic data types. How could we extend the range of values they represent?

#### Four Basic Data Types:
1. **`int`**:
   - Used for integer values.
   - Size: Typically 4 bytes.
   - Range: \( -2^{31} \) to \( 2^{31} - 1 \) (on 32-bit systems).

2. **`float`**:
   - Used for single-precision floating-point numbers.
   - Size: Typically 4 bytes.
   - Precision: Up to 7 decimal places.

3. **`char`**:
   - Used for characters (ASCII values).
   - Size: Typically 1 byte.
   - Range: \( -128 \) to \( 127 \) (signed) or \( 0 \) to \( 255 \) (unsigned).

4. **`double`**:
   - Used for double-precision floating-point numbers.
   - Size: Typically 8 bytes.
   - Precision: Up to 15 decimal places.

#### Extending Ranges:
- Use the **`unsigned`** qualifier for integer types to double the positive range.
- Use the **`long`** qualifier for larger integer ranges.
- Use the **`long double`** type for extended precision in floating-point calculations.

---

### 2.5 What is an unsigned integer constant? What is the significance of declaring a constant unsigned?
An **unsigned integer constant** is a numerical constant with no sign (always non-negative). In C, you can make an integer constant unsigned by appending `U` or `u` to it. For example: `100U`.

**Significance**:
- It ensures the constant is treated as an unsigned value.
- It helps avoid overflow errors when performing calculations involving large numbers.

---

### 2.6 Describe the characteristics and purpose of escape sequence characters.
**Escape sequences** are special character sequences in C that represent non-printable or special characters. They begin with a backslash (`\`).

| Escape Sequence | Character Represented     |
|------------------|---------------------------|
| `\n`            | Newline                   |
| `\t`            | Horizontal tab            |
| `\b`            | Backspace                 |
| `\\`            | Backslash                 |
| `\'`            | Single quote              |
| `\"`            | Double quote              |
| `\0`            | Null character            |

**Purpose**:
- Allow representation of non-printable characters.
- Make code more readable and portable.

---

### 2.7 What is a variable and what is meant by the "value" of a variable?
A **variable** is a named storage location in memory that holds a value of a specific data type. 

The **value** of a variable is the actual data stored at the memory location associated with the variable.

---

### 2.8 How do variables and symbolic names differ?
- **Variables**: Represent memory locations that can store and change values during program execution.
- **Symbolic Names**: Represent fixed values (constants) defined using the `#define` preprocessor directive or the `const` qualifier.

---

### 2.9 State the differences between the declaration of a variable and the definition of a symbolic name.
- **Variable Declaration**: Declares a memory space for a variable. Example: `int x;`
- **Symbolic Name Definition**: Assigns a name to a constant value. Example: `#define PI 3.14`

---

### 2.10 What is initialization? Why is it important?
**Initialization** is the process of assigning an initial value to a variable at the time of its declaration. Example: `int x = 10;`

**Importance**:
- Ensures the variable has a predictable value.
- Avoids undefined behavior caused by uninitialized variables.

---

### 2.11 What are the qualifiers that an `int` can have at a time?
Qualifiers that an `int` can have:
1. `signed` (default) or `unsigned`
2. `short`
3. `long`

Examples:
- `unsigned int`
- `short int`
- `long int`

---

### 2.12 A programmer would like to use the word DPR to declare all the double-precision floating-point values in his program. How could he achieve this?
The programmer can use the `typedef` keyword to create an alias for `double`:
```c
typedef double DPR;
DPR value = 3.14159;
```

---

### 2.13 What are enumeration variables? How are they declared? What is the advantage of using them in a program?
**Enumeration variables** are variables that can take predefined constant integer values. They are declared using the `enum` keyword.

Example:
```c
enum Day { Monday, Tuesday, Wednesday };
enum Day today = Monday;
```

**Advantages**:
- Improves code readability.
- Groups related constants together.

---

### 2.14 Describe the purpose of the qualifiers `const` and `volatile`.
1. **`const`**:
   - Makes a variable read-only.
   - Prevents modification after initialization.

2. **`volatile`**:
   - Informs the compiler that the variable’s value may change unexpectedly.
   - Used in cases like hardware registers or multi-threading.

---

### 2.15 When dealing with very small or very large numbers, what steps would you take to improve the accuracy of the calculations?
- Use `double` or `long double` for greater precision.
- Use scientific notation (`e` or `E`) for clarity.
- Apply appropriate rounding techniques.
- Avoid subtracting numbers of similar magnitude to reduce loss of significance.
- Use specialized libraries for high-precision arithmetic when necessary.
---
---
---


Here are the detailed answers for your review questions.

---

### 3.1 State whether the following statements are true or false.

(a) **False**: Not all arithmetic operators have the same level of precedence. For example, `*` and `/` have higher precedence than `+` and `-`.  
(b) **True**: The modulus operator `%` can only be used with integers.  
(c) **True**: The operators `<=`, `>=`, and `!=` all have the same level of priority.  
(d) **True**: During modulo division, the sign of the result is positive if both operands have the same sign.  
(e) **True**: In C, a data item with a value of `0` is considered false.  
(f) **True**: The expression `!(x <= y)` is logically equivalent to `x > y`.  
(g) **False**: A unary expression consists of one operator and one operand, e.g., `-a` or `++x`.  
(h) **False**: Associativity determines the order of evaluation for operators of the same precedence, not different expressions.  
(i) **False**: An expression statement is terminated with a semicolon (`;`), not a period.  
(j) **True**: During the evaluation of mixed expressions, implicit casts are automatically applied to convert types.  
(k) **True**: An explicit cast can change the type of an expression, e.g., `(int)3.14`.  
(l) **True**: Parentheses can be used to change the order of evaluation of expressions.

---

### 3.2 Fill in the blanks with appropriate words.

(a) The expression containing all the integer operands is called **an integer expression**.  
(b) The operator **%** cannot be used with real operands.  
(c) C supports as many as **six** relational operators.  
(d) An expression that combines two or more relational expressions is termed as **a logical expression**.  
(e) The **sizeof** operator returns the number of bytes the operand occupies.  
(f) The order of evaluation can be changed by using **parentheses**.  
(g) The use of **casting** on a variable can change its type in the memory.  
(h) **Operator precedence** is used to determine the order in which different operators in an expression are evaluated.

---

### 3.3 Determine whether the following statements are true or false.

**Given**: `int a = 10, b = 20, c;`

(a) **True**: The statement `a = +10;` is valid. The `+` is a unary operator.  
(b) **False**: `a + 4/6 * 6/2` evaluates to 10 because `4/6` evaluates to 0 in integer division.  
(c) **False**: `b + 3/2 * 2/3` evaluates to 20 because `3/2` evaluates to 1, and `2/3` evaluates to 0.  
(d) **True**: `a += b;` assigns `30` to `a` and leaves `b` as `20`.  
(e) **False**: `++a++;` is invalid because `a++` returns an r-value, and incrementing an r-value is not allowed.  
(f) **False**: `a = 1/b;` assigns `0` to `a`, as `1/b` results in `0` in integer division.

---

### 3.4 Statements with `int a` and `float b`

(a) **True**: `a = 1/3 + 1/3 + 1/3;` assigns `1` to `a` because `1/3` evaluates to `0` in integer division.  
(b) **True**: `b = 1.0/3.0 + 1.0/3.0 + 1.0/3.0;` assigns `1.0` to `b`.  
(c) **True**: `b = 1.0/3.0 * 3.0;` assigns `1.0` to `b` due to floating-point arithmetic.  
(d) **True**: `b = 1.0/3.0 + 2.0/3.0;` assigns `1.0` to `b`.  
(e) **False**: `a = 15/10.0 + 3/2;` assigns `3.5` to `a`, but `a` cannot hold a float value.

---

### 3.5 Determine whether the following expressions are true.

**Given**: `!(5 + 5 >= 10)`  
(a) **False**: `!(10 >= 10)` evaluates to `False`.  
(b) **False**: `5 + 5 == 10 || 1 + 3 == 5` evaluates to `True || False`, which is `True`.  
(c) **True**: `5 > 10 || 10 < 20 && 3 < 5` evaluates to `False || True && True`, which simplifies to `True`.  
(d) **True**: `10 != 15 && !(10 < 20) || 15 > 30` evaluates to `True && False || False`, which simplifies to `False`.

---

### 3.6 Validity and Evaluation of Arithmetic Expressions

(a) **Valid**, evaluates to `1`.  
(b) **Valid**, evaluates to `7.25`.  
(c) **Invalid**, modulus (`%`) is not allowed with floating-point numbers.  
(d) **Valid**, evaluates to `5`.  
(e) **Valid**, evaluates to `-2`.  
(f) **Valid**, evaluates to `20.25`.  
(g) **Valid**, evaluates to `5`.  
(h) **Invalid**, `int` casting is not allowed directly in `%`.

---

### 3.7 Write C assignment statements.

(a) Area:  
```c
Area = r * r + 2 * M_PI * r * h;
```

(b) Torque:  
```c
Torque = (2 * m1 * m2 * g) / (m1 + m2);
```

(c) Side:  
```c
Side = sqrt(a * a + b * b - 2 * a * b * cos(x));
```

(d) Energy:  
```c
Energy = mass * acceleration * height + (velocity * velocity) / 2;
```

---

### 3.8 Identify unnecessary parentheses.

(a) **Unnecessary**: Outer parentheses can be removed.  
(b) **Necessary**: No parentheses are unnecessary.  
(c) **Unnecessary**: Parentheses around `m * n` can be removed.  
(d) **Necessary**: All parentheses are required for clarity.

---

### 3.9 Errors and Fixes in Statements

(a) **Error**: Mixed data types. Fix:  
```c
x = y = z = 0.5; 
```

(b) **Correct**.  
(c) **Correct**, assuming `#include <math.h>` is included.  
(d) **Error**: Missing variable before `*=`. Fix:  
```c
p *= x / y;
```

(e) **Error**: Syntax error due to `/5`. Fix:  
```c
s = 5;
```

(f) **Correct**.

---

### 3.10 Logical Expression Evaluation

**Given**: `a = 5, b = 10, c = -6`

(a) **False**: `5 > 10 && 5 < -6`.  
(b) **True**: `5 < 10 && 5 > -6`.  
(c) **True**: `5 == -6 || 10 > 5`.  
(d) **True**: `10 > 15 && -6 < 0 || 5 > 0`.  
(e) **True**: `(5 / 2.0 == 0.0 && 10 / 2.0 != 0.0) || -6 < 0.0`.
---
---
---

Here are the answers to the questions in detailed format with the questions included.

---

### **4.3 Distinguish between the following pairs:**

**(a) `getchar` and `scanf` functions**  
- **`getchar`**: Reads a single character from the standard input. Does not require format specifiers.  
  Example:  
  ```c
  char ch;
  ch = getchar();
  ```
- **`scanf`**: Reads formatted input, including multiple data types, using format specifiers.  
  Example:  
  ```c
  int num;
  scanf("%d", &num);
  ```

---

**(b) `%s` and `%c` specifications for reading**  
- **`%s`**: Reads a string (sequence of characters) until whitespace is encountered. Adds a null character at the end.  
- **`%c`**: Reads a single character, including whitespace characters.  
  Example:  
  ```c
  char str[10], ch;
  scanf("%s", str); // Reads a string
  scanf(" %c", &ch); // Reads a character
  ```

---

**(c) `%s` and `%[]` specifications for reading**  
- **`%s`**: Reads a string until whitespace is encountered.  
- **`%[]`**: Reads a string based on a custom character set defined within `[]`.  
  Example:  
  ```c
  char str1[10], str2[10];
  scanf("%s", str1); // Reads until whitespace
  scanf("%[A-Za-z]", str2); // Reads only alphabetic characters
  ```

---

**(d) `%g` and `%f` specification for printing**  
- **`%g`**: Automatically chooses between `%f` (fixed-point) and `%e` (exponential) format based on the value.  
- **`%f`**: Always prints floating-point numbers in fixed-point notation.  
  Example:  
  ```c
  float num = 12345.6789;
  printf("%g\n", num); // Exponential form: 1.23457e+04
  printf("%f\n", num); // Fixed-point: 12345.678900
  ```

---

**(e) `%f` and `%e` specifications for printing**  
- **`%f`**: Prints numbers in fixed-point notation (e.g., `12345.678900`).  
- **`%e`**: Prints numbers in scientific notation (e.g., `1.234568e+04`).  
  Example:  
  ```c
  float num = 12345.6789;
  printf("%f\n", num); // 12345.678900
  printf("%e\n", num); // 1.234568e+04
  ```

---

### **4.4 Write `scanf` statements to read the following data lists:**

**(a) 78 B 45**  
```c
int num1, num2;
char ch;
scanf("%d %c %d", &num1, &ch, &num2);
```

**(b) 123 1.23 45A**  
```c
int num1;
float num2;
char str[3];
scanf("%d %f %s", &num1, &num2, str);
```

**(c) 15-10-2002**  
```c
int day, month, year;
scanf("%d-%d-%d", &day, &month, &year);
```

**(d) 10 TRUE 20**  
```c
int num1, num2;
char str[10];
scanf("%d %s %d", &num1, str, &num2);
```

---

### **4.5 State the outputs produced by the following `printf` statements.**

**(a)**  
```c
printf("%d%c%f", 10, 'x', 1.23);
```
**Output**: `10x1.230000`

---

**(b)**  
```c
printf("%2d %c %4.2f", 1234, 'x', 1.23);
```
**Output**: `1234 x 1.23`

---

**(c)**  
```c
printf("%d \t%4.2f", 1234, 456);
```
**Output**: `1234     456.00`

---

**(d)**  
```c
printf("\"%08.2f\"", 123.4);
```
**Output**: `"00123.40"`

---

**(e)**  
```c
printf("%d %d %d", 10, 20);
```
**Error**: Missing third argument in `printf`. It will result in undefined behavior.

---

### **4.6 State errors in the following input statements.**

**(a)**  
```c
scanf("%c%f%d", city, &price, &year);
```
**Error**: `%c` expects a `char*` pointer, but `city` is an array. Use `&city[0]`.

---

**(b)**  
```c
scanf("%s%d", city, amount);
```
**Error**: `%d` expects an `int*`, but `amount` is `float`. Use `%f` instead.

---

**(c)**  
```c
scanf("%f, %d, &amount, &year);
```
**Error**: Invalid format string due to misplaced commas and incorrect `&`.

---

**(d)**  
```c
scanf("\n%f", root);
```
**Error**: `root` is declared as `double` but `%f` expects a `float`. Use `%lf`.

---

**(e)**  
```c
scanf("%c%d %ld", *code, &count, Root);
```
**Error**: `*code` should be `&code`. `Root` is undeclared or invalid.

---

### **4.7 Values for variables `year` and `code`:**

Assume input: `1988 x`

**(a)**  
```c
scanf("%d %c", &year, &code);
```
**year = 1988**, **code = 'x'**

**(b)**  
```c
scanf("%c%d", &year, &code);
```
**year = '1'**, **code = 988**

**(c)**  
```c
scanf("%d %c", &code, &year);
```
**code = 1988**, **year = 'x'**

**(d)**  
```c
scanf("%s %c", &year, &code);
```
**Error**: `%s` expects a string pointer but `year` is an integer.

---

### **4.8 Outputs for given statements:**

**Given**: `count = 1275, price = -235.74, city = "Cambridge"`

**(a)**  
```c
printf("%d %f", count, price);
```
**Output**: `1275 -235.740000`

---

**(b)**  
```c
printf("%2d\n%f", count, price);
```
**Output**:  
`1275`  
`-235.740000`

---

**(c)**  
```c
printf("%d %f", price, count);
```
**Error**: Data type mismatch.

---

**(d)**  
```c
printf("%10dxxxx%5.2f", count, price);
```
**Output**:  
```
      1275xxxx-235.74
```

---

**(e)**  
```c
printf("%s", city);
```
**Output**: `Cambridge`

---

**(f)**  
```c
printf("%-10d %-15s", count, city);
```
**Output**:  
```
1275       Cambridge      
```

---

Here are the detailed answers to the remaining questions from **4.9 to 4.20**:

---

### **4.9 State what (if anything) is wrong with each of the following output statements:**

**(a)**  
```c
printf(d 7.24f, year, amount);
```
**Error**: The format specifier is incorrect and missing quotes. Correct version:  
```c
printf("%d %.2f", year, amount);
```

---

**(b)**  
```c
printf("%-8, "\n, city, code);
```
**Error**: The comma (`%-,`) is invalid, and the format specifier is incomplete. Correct version:  
```c
printf("%-8s\n", city);
```

---

**(c)**  
```c
printff, d, Is, price, count, city);
```
**Error**: `printff` is not a valid function, and `%Is` is an invalid format specifier. Correct version:  
```c
printf("%f %d %s", price, count, city);
```

---

**(d)**  
```c
printf("%f\n", amount, code, year);
```
**Error**: The format specifier `%f` expects only one argument, but extra arguments are provided. Correct version:  
```c
printf("%.2f\n", amount);
```

---

### **4.10 Input response to `scanf` statement:**

**Given**:  
```c
scanf("%4d%4*%d", &year, &code, &count);
```

**Input**: `19883745`

**Explanation**:  
- `%4d`: Reads the first 4 digits into `year` → `year = 1988`.  
- `%4*`: Skips the next 4 characters (`3745`).  
- `%d`: Reads no further input into `count` (undefined).  

**Output**:  
`year = 1988`, `code = undefined`, `count = undefined`.

---

### **4.11 How can we use the `getchar()` function to read multicharacter strings?**

- Use a loop to read one character at a time until a newline or EOF is encountered.  
Example:  
```c
#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';
    printf("You entered: %s\n", str);
    return 0;
}
```

---

### **4.12 How can we use the `putchar()` function to output multicharacter strings?**

- Use a loop to write one character at a time.  
Example:  
```c
#include <stdio.h>
int main() {
    char str[] = "Hello World";
    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
    return 0;
}
```

---

### **4.13 What is the purpose of the `scanf()` function?**

The `scanf()` function is used for formatted input, allowing the program to read and store user input based on specified format specifiers.  
Example:  
```c
int num;
scanf("%d", &num); // Reads an integer and stores it in 'num'.
```

---

### **4.14 Describe the purpose of commonly used conversion characters in a `scanf()` function:**

| **Specifier** | **Purpose**                          |
|---------------|--------------------------------------|
| `%d`          | Reads an integer.                   |
| `%f`          | Reads a float.                      |
| `%lf`         | Reads a double.                     |
| `%c`          | Reads a single character.           |
| `%s`          | Reads a string.                     |
| `%x`/`%o`     | Reads hexadecimal/octal integers.   |
| `%[abc]`      | Reads only characters matching the set. |

---

### **4.15 What happens when an input data item contains:**

**(a)** More characters than the specified field width?  
- The additional characters are left unread and remain in the input buffer.

**(b)** Fewer characters than the specified field width?  
- The program waits for additional input until the field width is satisfied or EOF is encountered.

---

### **4.16 What is the purpose of `printf()` function?**

The `printf()` function is used for formatted output to the standard output device (e.g., console). It allows combining text with variables in a readable format.  
Example:  
```c
int a = 10;
printf("Value of a is %d\n", a);
```

---

### **4.17 Describe the purpose of commonly used conversion characters in a `printf()` function:**

| **Specifier** | **Purpose**                          |
|---------------|--------------------------------------|
| `%d`          | Prints an integer.                  |
| `%f`          | Prints a float in fixed-point.      |
| `%e`          | Prints a float in scientific form.  |
| `%c`          | Prints a single character.          |
| `%s`          | Prints a string.                   |
| `%x`/`%o`     | Prints hexadecimal/octal integers.  |

---

### **4.18 How does a control string in a `printf()` function differ from a `scanf()` function?**

| **Aspect**               | **`printf()`**                | **`scanf()`**                |
|--------------------------|-----------------------------|-----------------------------|
| **Purpose**              | Outputs data.              | Inputs data.               |
| **Control String**       | Specifies output format.   | Specifies input format.    |
| **Extra Characters**     | Displayed as-is.           | Ignored, except `%[]`.     |

---

### **4.19 What happens if an output data item contains:**

**(a)** More characters than the specified field width?  
- The entire data is printed regardless of the field width.

**(b)** Fewer characters than the specified field width?  
- The output is padded with spaces or zeros (depending on the format specifier).

---

### **4.20 How are unrecognized characters within the control string interpreted in:**

**(a)** `scanf` function:  
- Any unrecognized character in the format string is treated as a literal and must match the input exactly.

**(b)** `printf` function:  
- Any unrecognized character is directly printed to the output.

Example:  
```c
printf("Hello, %%World!\n"); // Prints: Hello, %World!
scanf("Hello, %%World!");   // Input must match: Hello, %World!
```
---
---
---


### **6.20 When do we use the statement `for (; ; )`?**

The statement `for (;;)` is used to create an **infinite loop** in C. It means that the loop will run endlessly unless explicitly terminated by a `break` statement, a `return` statement, or a system exit function such as `exit()`.

### **Syntax Explanation:**
```c
for (initialization; condition; increment) {
    // body of the loop
}
```

- **Initialization:** Skipped in `for (;;)` (optional).  
- **Condition:** No condition is specified, so it always evaluates to `true`.  
- **Increment/Decrement:** Skipped (optional).

Thus, the `for (;;)` loop continues indefinitely because it has no termination condition.

---

### **Example 1: Basic Infinite Loop**
```c
#include <stdio.h>
int main() {
    for (;;) {
        printf("This is an infinite loop.\n");
    }
    return 0;  // This will never be reached.
}
```

### **Example 2: Infinite Loop with Break**
```c
#include <stdio.h>
int main() {
    int counter = 0;
    for (;;) {
        printf("Counter: %d\n", counter);
        counter++;
        if (counter == 5) {
            break;  // Exit the loop when counter reaches 5.
        }
    }
    return 0;
}
```

---

### **Use Cases:**
1. **Servers and Background Processes**: Continuously run until stopped manually.  
   Example: Listening for incoming network connections.  
2. **Polling or Monitoring**: Check for changes in a file, sensor, or hardware status.  
3. **Event Handling**: Continuously handle events in GUI or gaming programs.  
4. **Manual Termination**: Infinite loop terminated by user input.  

---

### **Things to Keep in Mind:**
1. Ensure the loop has a way to exit (e.g., `break`, `return`, `exit()`), or it will hang the program.
2. Use sparingly to avoid unintended infinite loops, which can cause high CPU usage.  

---
---
---

### **6.9 What would be the output of each of the following code segments?**

**(a)**
```c
count = 5;
while (count --> 0)
    printf("%d", count);
```

**Output:**  
`43210`

**Explanation:**  
- The `count --> 0` is equivalent to `count-- > 0`.
- The condition `count > 0` is checked first, and then `count` is decremented after each iteration. Hence, the values `4, 3, 2, 1, 0` are printed in sequence.

---

**(b)**
```c
count = 5;
while (count > 0)
    printf("%d", count);
```

**Output:**  
Infinite loop.

**Explanation:**  
- The variable `count` is not decremented inside the loop. As a result, the condition `count > 0` is always true, leading to an infinite loop.

---

**(c)**
```c
count = 5;
do
    printf("%d", count);
while (count > 0);
```

**Output:**  
Infinite loop.

**Explanation:**  
- Similar to (b), `count` is not decremented, so the condition `count > 0` is always true. However, the `do...while` loop ensures the body is executed at least once, creating an infinite loop.

---

**(d)**
```c
for (m = 10; m > 7; m -= 2)
    printf("%d", m);
```

**Output:**  
`108`

**Explanation:**  
- The loop starts with `m = 10` and decrements `m` by `2` in each iteration.
- The values of `m` printed are `10` and `8` before the condition `m > 7` fails.

---

### **6.10 Compare, in terms of their functions, the following pairs of statements:**

**(a) `while` and `do...while`**  
- **`while` Loop:** The condition is checked first, and the body is executed only if the condition is true.  
- **`do...while` Loop:** The body is executed at least once before the condition is checked.

**Example:**
```c
// while
int count = 0;
while (count > 0) {
    printf("Inside while\n");
}

// do...while
do {
    printf("Inside do...while\n");
} while (count > 0);
```
**Output:**  
- `while` loop: No output (condition is false initially).  
- `do...while` loop: Prints "Inside do...while" once.

---

**(b) `while` and `for`**  
- **`while` Loop:** Best for loops where the number of iterations is not predetermined.  
- **`for` Loop:** Best for counter-controlled loops where the number of iterations is known beforehand.

**Example:**
```c
// while
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}

// for
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
```
**Output:**  
Both loops produce the same output: `0 1 2 3 4`.

---

**(c) `break` and `goto`**  
- **`break`:** Exits only the innermost loop or switch statement where it is used.  
- **`goto`:** Allows jumping to a labeled statement anywhere in the program, disrupting normal flow.

**Example:**
```c
// break
for (int i = 0; i < 5; i++) {
    if (i == 2) break;
    printf("%d ", i);
}

// goto
for (int i = 0; i < 5; i++) {
    if (i == 2) goto exit;
    printf("%d ", i);
}
exit:
printf("Exited loop.\n");
```
**Output:**  
`break`: `0 1`  
`goto`: `0 1 Exited loop.`

---

**(d) `break` and `continue`**  
- **`break`:** Exits the loop entirely.  
- **`continue`:** Skips the remaining statements in the current iteration and proceeds to the next iteration.

**Example:**
```c
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;
    printf("%d ", i);
}
```
**Output:**  
`0 1 3 4` (skips `2`).

---

**(e) `continue` and `goto`**  
- **`continue`:** Skips to the next iteration of the innermost loop.  
- **`goto`:** Jumps to a labeled statement, potentially skipping multiple lines of code or even multiple loops.

**Example:**
```c
for (int i = 0; i < 5; i++) {
    if (i == 2) goto skip;
    printf("%d ", i);
    continue;
skip:
    printf("Skipped ");
}
```
**Output:**  
`0 1 Skipped 3 4`.

---

### **6.11 Analyze the program segments and determine how many times the body of each loop will execute:**

**(a)**
```c
x = 5;
y = 50;
```
---
---
---

### **7.7 We want to declare a two-dimensional integer type array called matrix for 3 rows and 5 columns. Which of the following declarations are correct?**

**(a)** `int matrix[3],[5];`  
**Incorrect:** This syntax is invalid as it tries to declare two separate arrays instead of a 2D array.  

**(b)** `int matrix[5][3];`  
**Incorrect:** This declares a 5x3 array, not a 3x5 array.

**(c)** `int matrix[1+2][2+3];`  
**Correct:** This evaluates to `int matrix[3][5];` because `1+2 = 3` and `2+3 = 5`.

**(d)** `int matrix[3,5];`  
**Incorrect:** Commas are not allowed in array declarations.

**(e)** `int matrix[3][5];`  
**Correct:** This is the proper syntax to declare a 2D array with 3 rows and 5 columns.

---

### **7.8 Which of the following initialization statements are correct?**

**(a)** `char str1[4] = "GOOD";`  
**Incorrect:** The string `"GOOD"` requires 5 characters (4 letters + null terminator `\0`), but the array size is only 4.

**(b)** `char str2[] = "C";`  
**Correct:** The size of the array is automatically adjusted to include the null terminator (`\0`), making the size 2.

**(c)** `char str3[5] = "Moon";`  
**Correct:** The string `"Moon"` fits within the 5-character array (4 letters + null terminator `\0`).

**(d)** `char str4[] = {'S', 'U', 'N'};`  
**Correct:** This initializes the array with the characters `'S'`, `'U'`, and `'N'` without requiring a null terminator.

**(e)** `char str5[10] = "Sun";`  
**Correct:** The string `"Sun"` is stored in the array with the remaining elements set to `'\0'`.

---

### **7.9 What is a data structure? Why is an array called a data structure?**

**Data Structure:**  
A data structure is a way to organize, manage, and store data efficiently for operations like retrieval, modification, and processing.

**Why an Array is Called a Data Structure:**  
An array is a collection of elements of the same type stored at contiguous memory locations. It is considered a data structure because it organizes data systematically, allowing easy access using indices.

---

### **7.10 What is a dynamic array? How is it created? Give a typical example of its use.**

**Dynamic Array:**  
A dynamic array is an array whose size can be adjusted during runtime, unlike static arrays with fixed sizes. It is created using memory allocation functions like `malloc()` or `calloc()` in C.

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5; // Number of elements
    arr = (int *)malloc(n * sizeof(int)); // Allocate memory

    for (int i = 0; i < n; i++)
        arr[i] = i + 1; // Initialize array

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); // Print elements

    free(arr); // Free memory
    return 0;
}
```

**Typical Use:**  
Dynamic arrays are useful when the number of elements is not known in advance or may vary during execution, such as when reading user input.

---

### **7.11 What is the error in the following program?**
```c
main() {
    int x;
    float y[];
}
```

**Error:**  
The array `float y[];` is declared without specifying its size. In C, an array must either have a size specified or be initialized during declaration.

**Correction:**
```c
float y[10]; // Declare with a size
```

---

### **7.12 What happens when an array with a specified size is assigned:**

**(a) With values fewer than the specified size?**  
The remaining elements are initialized to `0` for numeric types, `'\0'` for characters, and `NULL` for pointers.

**Example:**
```c
int arr[5] = {1, 2};
```
The array becomes `{1, 2, 0, 0, 0}`.

**(b) With values more than the specified size?**  
It causes a **compile-time error** because the initializer list exceeds the array size.

---

### **7.13 Discuss how initial values can be assigned to a multidimensional array.**

Initial values can be assigned using nested braces or a single list of values.

**Example:**
```c
int matrix[2][3] = {
    {1, 2, 3}, // Row 1
    {4, 5, 6}  // Row 2
};
```

Alternatively:
```c
int matrix[2][3] = {1, 2, 3, 4, 5, 6};
```
Both methods result in the same array.

---

### **7.14 What is the output of the following program?**
```c
main() {
    int m[] = {1, 2, 3, 4, 5};
    int x, y = 0;
    for (x = 0; x < 5; x++)
        y = y + m[x];
    printf("%d", y);
}
```

**Output:**  
`15`

**Explanation:**  
The loop iterates through all elements of the array `m`, adding them to `y`. The result is the sum:  
`1 + 2 + 3 + 4 + 5 = 15`.

---

### **7.15 What is the output of the following program?**
```c
main() {
    char string[] = "HELLO WORLD";
    int m;
    for (m = 0; string[m] != '\0'; m++)
        if ((m % 2) == 0)
            printf("%c", string[m]);
}
```

**Output:**  
`HLOWRD`

**Explanation:**  
The loop iterates over the string `"HELLO WORLD"`. Characters at even indices (`m % 2 == 0`) are printed:  
`H (0), L (2), O (4), W (6), R (8), D (10)`.
---
---
---

### **7.1 State whether the following statements are true or false.**

**(a)** *The type of all elements in an array must be the same.*  
**True**: In C, an array can only contain elements of the same data type.

**(b)** *When an array is declared, C automatically initializes its elements to zero.*  
**False**: Automatic initialization to zero happens only for **global** and **static** arrays. Local arrays contain garbage values unless explicitly initialized.

**(c)** *An expression that evaluates to an integral value may be used as a subscript.*  
**True**: Array subscripts in C must evaluate to integers (integral type).

**(d)** *Accessing an array outside its range is a compile-time error.*  
**False**: C does not perform bound checking, so this leads to undefined behavior, not a compile-time error.

**(e)** *A `char` type variable cannot be used as a subscript in an array.*  
**False**: A `char` can be used as a subscript because it is an integral type.

**(f)** *An `unsigned long int` type can be used as a subscript in an array.*  
**True**: Since `unsigned long int` is an integral type, it can be used as a subscript.

**(g)** *In C, by default, the first subscript is zero.*  
**True**: Array indexing in C starts from zero.

**(h)** *When initializing a multidimensional array, not specifying all its dimensions is an error.*  
**False**: Only the first dimension can be omitted during initialization; all other dimensions must be specified.

**(i)** *When we use expressions as a subscript, its result should always be greater than zero.*  
**False**: The result of the expression can be zero, as arrays are zero-indexed.

**(j)** *In C, we can use a maximum of 4 dimensions for an array.*  
**False**: C has no specific limit on the number of dimensions, but the practical limit depends on memory constraints and the compiler.

**(k)** *In declaring an array, the array size can be a constant or variable or an expression.*  
**True**: The size can be a constant, a variable (in C99 and later), or an expression that evaluates to an integer.

**(l)** *The declaration `int x[2] = {1, 2, 3};` is illegal.*  
**True**: The initializer contains more elements (3) than the array can hold (2).

---

### **7.2 Fill in the blanks in the following statements.**

**(a)** The variable used as a subscript in an array is popularly known as **index variable**.  

**(b)** An array can be initialized either at **compile time** or at **run time**.  

**(c)** An array created using `malloc` function at runtime is referred to as **dynamic array**.  

**(d)** An array that uses more than two subscripts is referred to as **multidimensional array**.  

**(e)** **Sorting** is the process of arranging the elements of an array in order.  

---

### **7.3 Identify errors, if any, in each of the following array declaration statements.**

**(a)** `int score(100);`  
**Error:** Parentheses `()` are invalid for declaring arrays. Use square brackets `[]`.  
**Corrected:** `int score[100];`

**(b)** `float values[10,15];`  
**Error:** Commas `,` are invalid in array declarations. Use `[]` for separate dimensions.  
**Corrected:** `float values[10][15];`

**(c)** `float average[ROW],[COLUMN];`  
**Error:** Each array must have a separate declaration.  
**Corrected:**  
```c
float average[ROW];
float COLUMN[COLUMN];
```

**(d)** `char name[15];`  
**No Error.**

**(e)** `int sum[];`  
**Error:** Array size must be specified unless it is initialized immediately.  
**Corrected:** `int sum[10];` or `int sum[] = {1, 2, 3};`

**(f)** `double salary[i + ROW];`  
**Error:** Array size must be a constant value, not an expression involving variables.  
**Corrected:** Use a constant expression or dynamically allocate the array.

**(g)** `long int number[ROW];`  
**No Error** (assuming `ROW` is a valid constant or macro).  

**(h)** `int array x[COLUMN];`  
**Error:** Invalid syntax (`x` appears twice).  
**Corrected:** `int array[COLUMN];`

---

### **7.4 Identify errors, if any, in each of the following initialization statements.**

**(a)** `int number[] (0,0,0,0,0);`  
**Error:** Use braces `{}` for initialization.  
**Corrected:** `int number[] = {0, 0, 0, 0, 0};`

**(b)** `float item[3][2] = (0, 1, 2, 3, 4, 5);`  
**Error:** Use nested braces `{}` for multidimensional array initialization.  
**Corrected:**  
```c
float item[3][2] = {{0, 1}, {2, 3}, {4, 5}};
```

**(c)** `char word[] = ('A', 'R', 'R', 'A', 'Y');`  
**Error:** Use double quotes for strings or braces `{}` for character arrays.  
**Corrected:**  
```c
char word[] = "ARRAY";
```

**(d)** `int m[2,4] = ((0, 0, 0, 0), (1, 1, 1, 1));`  
**Error:** Use proper array syntax with braces `{}`.  
**Corrected:**  
```c
int m[2][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}};
```

**(e)** `float result[10] = 0;`  
**Error:** The array must be initialized with braces `{}`.  
**Corrected:** `float result[10] = {0};`

---

### **7.5 Assume that the arrays A and B are declared as follows:**
```c
int A[5][4];
float B[4];
```

#### **(a)**
```c
for (i = 1; i <= 5; i++)
    for (j = 1; j <= 4; j++)
        A[i][j] = 0;
```
**Error:** Array indices in C start from `0`. Using `i = 1` and `j = 1` will access out-of-bounds indices.  
**Corrected:**  
```c
for (i = 0; i < 5; i++)
    for (j = 0; j < 4; j++)
        A[i][j] = 0;
```

---

#### **(b)**
```c
for (i = 1; i < 4; i++)
    scanf("%f", B[i]);
```
**Error:** Array `B` has 4 elements, indexed from `0` to `3`. Accessing `B[3]` with `i = 1` is valid, but you should adjust indexing for clarity.  
**Corrected:**  
```c
for (i = 0; i < 4; i++)
    scanf("%f", &B[i]);
```

---

#### **(c)**
```c
for (i = 0; i <= 4; i++)
    B[i] = B[i] + i;
```
**Error:** No error in logic if `i` stays within `0` to `3` (inclusive). However, `i = 4` exceeds the size of `B`.  
**Corrected:**  
```c
for (i = 0; i < 4; i++)
    B[i] = B[i] + i;
```

---

#### **(d)**
```c
for (i = 4; i >= 0; i--)
    for (j = 0; j < 4; j++)
        A[i][j] = B[j] + 1.0;
```
**No Error:** This is valid as `i` goes from `4` to `0` and accesses elements within the bounds of `A` and `B`.

---
---
---

### **8.1 State whether the following statements are true or false**

**(a)** *When initializing a string variable during its declaration, we must include the null character as part of the string constant, like "GOOD\0".*  
**False**: The null character `\0` is automatically added by the compiler when you use double quotes (`"GOOD"`).

**(b)** *The `gets` function automatically appends the null character at the end of the string read from the keyboard.*  
**True**: The `gets` function appends a null character at the end of the input string.

**(c)** *When reading a string with `scanf`, it automatically inserts the terminating null character.*  
**True**: The `scanf` function inserts a null character at the end of the input string.

**(d)** *String variables cannot be used with the assignment operator.*  
**True**: Strings cannot be directly assigned with `=`. Instead, functions like `strcpy` must be used.

**(e)** *We cannot perform arithmetic operations on character variables.*  
**False**: Arithmetic operations can be performed on character variables since they are internally treated as integers (ASCII values).

**(f)** *We can assign a character constant or a character variable to an `int` type variable.*  
**True**: A character constant or variable can be assigned to an `int` variable since characters are stored as their ASCII equivalents.

**(g)** *The function `scanf` cannot be used in any way to read a line of text with the white-spaces.*  
**False**: While `scanf("%s")` skips white spaces, it is possible to read a line with white spaces using `scanf("%[^\n]")`.

**(h)** *The ASCII character set consists of 128 distinct characters.*  
**True**: The ASCII standard defines 128 characters (0 to 127).

**(i)** *In the ASCII collating sequence, the uppercase letters precede lowercase letters.*  
**True**: Uppercase letters (A-Z) have lower ASCII values than lowercase letters (a-z).

**(j)** *In C, it is illegal to mix character data with numeric data in arithmetic operations.*  
**False**: Mixing is allowed because characters are treated as integers in arithmetic operations.

**(k)** *The function `getchar` skips white-space during input.*  
**False**: `getchar` does not skip white spaces; it reads all characters, including white spaces.

**(l)** *In C, strings cannot be initialized at run time.*  
**False**: Strings can be initialized at runtime using functions like `strcpy` or input functions like `scanf` and `gets`.

**(m)** *The input function `gets` has one string parameter.*  
**True**: `gets` takes a single parameter: a pointer to a character array where the input will be stored.

**(n)** *The function call `strcpy(s2, s1);` copies string `s2` into string `s1`.*  
**False**: `strcpy(s2, s1)` copies the contents of `s1` into `s2`.

**(o)** *The function call `strcmp("abc", "ABC");` returns a positive number.*  
**False**: It returns a negative number because 'a' has a greater ASCII value than 'A'.

---

### **8.2 Fill in the blanks in the following statements**

**(a)** We can use the conversion specification **`%[^\n]`** in `scanf` to read a line of text.  

**(b)** We can initialize a string using the string manipulation function **`strcpy`**.  

**(c)** The function `strncat` has **3** parameters.  

**(d)** To use the function `atoi` in a program, we must include the header file **`stdlib.h`**.  

**(e)** The function **`gets`** does not require any conversion specification to read a string from the keyboard.  

**(f)** The function **`strchr`** determines if a character is contained in a string.  

**(g)** The function **`strlen`** is used to determine the length of a string.  

**(h)** The function **`qsort`** is used to sort the strings in alphabetical order.  

**(i)** The function call **`strcat(s2, s1);`** appends **`s1` to `s2`**.  

**(j)** The `printf` may be replaced by **`puts`** function for printing strings.  

---

### **8.3 Describe the limitations of using `getchar` and `scanf` for reading strings**

#### Limitations of `getchar`:
1. Reads only one character at a time. Reading multiple characters requires a loop.
2. It does not handle strings or white spaces directly.

#### Limitations of `scanf`:
1. `scanf` with `%s` stops reading input at the first whitespace or newline character, which makes it unsuitable for multi-word input.
2. It does not perform bound checking, leading to potential buffer overflow if the input exceeds the array size.

---

### **8.4 Explain how null character helps in string manipulations**

The null character (`\0`) serves as a marker for the end of a string in C. It allows functions like `strlen`, `strcpy`, and `strcat` to know where the string ends, making operations on character arrays efficient and reliable.

---

### **8.5 Compare different methods for assigning strings**

1. **During Declaration:**  
   ```c
   char string[] = "Hello";
   ```
   - Suitable for initialization at the time of declaration.
   - Cannot be reassigned later.

2. **Using `strcpy`:**  
   ```c
   strcpy(string, "Hello");
   ```
   - Allows dynamic reassignment.
   - Requires the `string` array to be large enough.

3. **Using `scanf`:**  
   ```c
   scanf("%s", string);
   ```
   - Limited to single-word input.
   - Unsafe if the input exceeds array size.

4. **Using `gets`:**  
   ```c
   gets(string);
   ```
   - Allows multi-word input.
   - Risk of buffer overflow, as it does not check array bounds.

---

### **8.6 Output of the following program segments**

**(a)** `printf("%s", string);`  
Output: `The sky is the limit.`  

**(b)** `printf("%25.10s", string);`  
Output: Prints the first 10 characters of `string` right-aligned in a 25-character field.  
Output: `         The sky is`  

**(c)** `printf("%s", string[0]);`  
Error: `string[0]` is a character, not a string. Use `%c` instead of `%s`.

**(d)**  
```c
for (i = 0; string[i] != "."; i++)
    printf("%c", string[i]);
```
Error: `.` is not the null character (`\0`). Change condition to `string[i] != '\0'`.  

**(e)**  
```c
for (i = 0; string[i] != '\0'; i++)
    printf("%d\n", string[i]);
```
Output: ASCII values of characters in `string` printed line by line.

**(f)** Contains logical errors. Will result in undefined behavior.

**(g)** `printf("%c\n", string[10] + 5);`  
Output: Prints the character that is 5 positions ahead of `string[10]` in the ASCII table.  

---

### **8.7 Which statements correctly concatenate strings?**

Only **(d)** is correct:  
```c
strcpy(s3, strcat(s1, s2));
```

---

### **8.8 Output of the statement:**
```c
printf("%d", strcmp("push", "pull"));
```
Output: A positive number, because "push" comes after "pull" lexicographically.  

---

### **8.9 Assume `s1`, `s2`, and `s3` are declared as follows:**
```c
char s1[10] = "she";
char s2[20] = "he";
char s3[30];
```
Analyze specific program statements to predict outputs if provided.

