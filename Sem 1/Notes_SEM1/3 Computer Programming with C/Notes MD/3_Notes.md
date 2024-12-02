Here is a comprehensive breakdown of Chapter 3: **Operators and Expressions** from *Programming in ANSI C* by E. Balagurusamy in Markdown format.

---

# **Chapter 3: Operators and Expressions**

## **3.1 Introduction**
- Programs involve data manipulation, which is achieved using **operators** and **expressions**. 
- Operators are symbols that perform operations on variables and values, while expressions are combinations of variables, constants, and operators.

---

## **3.2 Arithmetic Operators**
Used for basic mathematical operations.

### **Operators and Examples**
| Operator | Description         | Example     | Result        |
|----------|---------------------|-------------|---------------|
| `+`      | Addition            | `5 + 3`     | `8`           |
| `-`      | Subtraction         | `5 - 3`     | `2`           |
| `*`      | Multiplication      | `5 * 3`     | `15`          |
| `/`      | Division            | `5 / 3`     | `1` (integer) |
| `%`      | Modulus (remainder) | `5 % 3`     | `2`           |

### **Notes**
- Division of integers truncates the decimal part. Use floating-point numbers for precise results.
- Modulus is only valid for integer operands.

---

## **3.3 Relational Operators**
Used to compare two values or expressions.

### **Operators and Examples**
| Operator | Description               | Example       | Result    |
|----------|---------------------------|---------------|-----------|
| `>`      | Greater than              | `5 > 3`       | `true`    |
| `<`      | Less than                 | `5 < 3`       | `false`   |
| `>=`     | Greater than or equal to  | `5 >= 5`      | `true`    |
| `<=`     | Less than or equal to     | `5 <= 3`      | `false`   |
| `==`     | Equal to                  | `5 == 5`      | `true`    |
| `!=`     | Not equal to              | `5 != 3`      | `true`    |

### **Usage**
Relational operators return a **boolean value** (`true` or `false`).

---

## **3.4 Logical Operators**
Used for combining multiple conditions.

### **Operators and Examples**
| Operator | Description          | Example             | Result    |
|----------|----------------------|---------------------|-----------|
| `&&`     | Logical AND          | `(5 > 3) && (3 > 1)`| `true`    |
| `||`     | Logical OR           | `(5 > 3) || (3 < 1)`| `true`    |
| `!`      | Logical NOT          | `!(5 > 3)`          | `false`   |

### **Truth Table**
| A     | B     | A && B | A || B | !A   |
|-------|-------|--------|--------|------|
| true  | true  | true   | true   | false|
| true  | false | false  | true   | false|
| false | true  | false  | true   | true |
| false | false | false  | false  | true |

---

## **3.5 Assignment Operators**
Used to assign values to variables.

### **Basic Assignment**
```c
int a = 10;  // Assign 10 to variable a
```

### **Compound Assignment**
| Operator | Meaning            | Example     | Equivalent To |
|----------|--------------------|-------------|---------------|
| `+=`     | Add and assign     | `a += 5`    | `a = a + 5`   |
| `-=`     | Subtract and assign| `a -= 5`    | `a = a - 5`   |
| `*=`     | Multiply and assign| `a *= 5`    | `a = a * 5`   |
| `/=`     | Divide and assign  | `a /= 5`    | `a = a / 5`   |
| `%=`     | Modulus and assign | `a %= 5`    | `a = a % 5`   |

---

## **3.6 Increment and Decrement Operators**
Used to increase or decrease a variable's value by 1.

### **Types**
1. **Pre-increment (`++a`) / Pre-decrement (`--a`)**:
   - Increments/decrements the value **before** use in an expression.

2. **Post-increment (`a++`) / Post-decrement (`a--`)**:
   - Increments/decrements the value **after** use in an expression.

### **Example**
```c
int a = 5;
int b = ++a;  // Pre-increment: a = 6, b = 6
int c = a--;  // Post-decrement: c = 6, a = 5
```

---

## **3.7 Bitwise Operators**
Operate at the binary level.

### **Operators and Examples**
| Operator | Description              | Example      | Result  |
|----------|--------------------------|--------------|---------|
| `&`      | Bitwise AND              | `5 & 3`      | `1`     |
| `|`      | Bitwise OR               | `5 | 3`      | `7`     |
| `^`      | Bitwise XOR              | `5 ^ 3`      | `6`     |
| `~`      | Bitwise Complement       | `~5`         | `-6`    |
| `<<`     | Left shift               | `5 << 1`     | `10`    |
| `>>`     | Right shift              | `5 >> 1`     | `2`     |

### **Binary Representation Example**
```c
5 = 0101
3 = 0011
5 & 3 = 0001  (1 in decimal)
5 | 3 = 0111  (7 in decimal)
```

---

## **3.8 Special Operators**
1. **Sizeof Operator**  
   - Used to determine the size (in bytes) of a data type or variable.
   ```c
   int x = 10;
   printf("%zu", sizeof(x));  // Output: 4 (on most systems)
   ```

2. **Comma Operator**  
   - Allows multiple expressions to be evaluated in a single statement.
   ```c
   int a, b;
   a = (b = 3, b + 2);  // b = 3, a = 5
   ```

3. **Conditional (Ternary) Operator**  
   - Syntax: `condition ? expression1 : expression2`.
   - Example:
     ```c
     int x = 5, y = 10;
     int max = (x > y) ? x : y;  // max = 10
     ```

4. **Pointer Operators**  
   - `&`: Address-of operator.
   - `*`: Dereference operator.

5. **Member Selection Operators**  
   - `.`: Access a structure member.
   - `->`: Access a structure member through a pointer.

---

## **3.9 Expressions**
An expression is a combination of variables, constants, and operators that evaluates to a value.

### **Types of Expressions**
1. **Arithmetic Expressions**:
   ```c
   int result = 5 + 3 * 2;  // Output: 11 (follows precedence rules)
   ```

2. **Relational Expressions**:
   ```c
   int result = (5 > 3);  // Output: 1 (true)
   ```

3. **Logical Expressions**:
   ```c
   int result = (5 > 3) && (3 > 1);  // Output: 1 (true)
   ```

4. **Bitwise Expressions**:
   ```c
   int result = 5 & 3;  // Output: 1
   ```

5. **Conditional Expressions**:
   ```c
   int max = (a > b) ? a : b;
   ```

---

## **3.10 Operator Precedence and Associativity**
Defines the order in which operators are evaluated in an expression.

### **Precedence Table**
| Precedence | Operator           | Associativity  |
|------------|--------------------|----------------|
| 1 (Highest)| `()`, `[]`, `->`, `.` | Left to Right |
| 2          | `!`, `~`, `++`, `--` | Right to Left |
| 3          | `*`, `/`, `%`        | Left to Right |
| 4          | `+`, `-`             | Left to Right |
| 5          | `<<`, `>>`           | Left to Right |
| 6          | `<`, `<=`, `>`, `>=` | Left to Right |
| 7          | `==`, `!=`           | Left to Right |
| 8          | `&`                  | Left to Right |
| 9          | `^`                  | Left to Right |
| 10         | `|`                  | Left to Right |
| 11         | `&&`                 | Left to Right |
| 12         | `||`                 | Left to Right |
| 13         | `? :`                | Right to Left |
| 14

 (Lowest)| `=`, `+=`, `-=`...   | Right to Left |

---

## **3.11 Summary**
- Operators and expressions are essential for data manipulation in C.
- Proper understanding of operator precedence and associativity ensures accurate expression evaluation.
- Logical and bitwise operators are powerful tools for conditional operations.

---

Let me know if you'd like detailed examples or clarification on any topic!