Here is a detailed explanation of Chapter 10: **Structures and Unions** from *Programming in ANSI C* by E. Balagurusamy in Markdown format.

---

# **Chapter 10: Structures and Unions**

## **10.1 Introduction**
- **Structures** and **unions** are user-defined data types in C that allow the grouping of different types of variables under a single name.
- Structures and unions enable efficient data handling and organization, especially for complex data structures.
- **Structures** allocate memory for each member, while **unions** allocate memory for the largest member only.

---

## **10.2 Structure**

### **10.2.1 What is a Structure?**
A **structure** is a user-defined data type that allows grouping of variables of different data types under a single name. Each variable in the structure is called a **member** or **field**.

### **Syntax**:
```c
struct structure_name {
    data_type member1;
    data_type member2;
    // More members...
};
```

### **Example**:
```c
struct student {
    int roll_no;
    char name[50];
    float marks;
};
```
- **`struct student`** is the structure name.
- **`roll_no`**, **`name`**, and **`marks`** are the members of the structure.

---

### **10.2.2 Declaring a Structure Variable**
Once a structure is defined, you can declare variables of that type.

### **Syntax**:
```c
struct structure_name variable_name;
```

### **Example**:
```c
struct student s1;
```

You can also declare and initialize the structure variables at the time of declaration.

### **Example**:
```c
struct student s1 = {101, "John", 85.5};
```
- `s1` is a variable of type `struct student`.
- The values `101`, `"John"`, and `85.5` are assigned to the respective members `roll_no`, `name`, and `marks`.

---

### **10.2.3 Accessing Structure Members**
Structure members can be accessed using the **dot operator (`.`)**.

### **Syntax**:
```c
variable_name.member_name;
```

### **Example**:
```c
printf("%d", s1.roll_no);  // Output: 101
printf("%s", s1.name);      // Output: John
printf("%.2f", s1.marks);   // Output: 85.50
```

---

### **10.2.4 Initializing a Structure**
Structures can be initialized in two ways:
1. **Static Initialization**: Assign values at the time of declaration.
   
   **Example**:
   ```c
   struct student s1 = {101, "John", 85.5};
   ```
   
2. **Dynamic Initialization**: Assign values to individual members after declaring the structure variable.
   
   **Example**:
   ```c
   struct student s1;
   s1.roll_no = 101;
   strcpy(s1.name, "John");
   s1.marks = 85.5;
   ```

---

### **10.2.5 Nested Structures**
A structure can contain other structures as its members, creating **nested structures**.

### **Example**:
```c
struct date {
    int day;
    int month;
    int year;
};

struct student {
    int roll_no;
    char name[50];
    struct date dob;
};
```
Here, the `student` structure contains a `date` structure as a member (`dob`).

### **Accessing Nested Structure Members**:
To access nested structure members, use the dot operator for each level.
```c
printf("%d", s1.dob.day);  // Access day from dob
```

---

### **10.2.6 Structure and Functions**
Structures can be passed to functions by **value** or **reference**.

1. **Pass by Value**: A copy of the structure is passed to the function.

   **Example**:
   ```c
   void printStudent(struct student s) {
       printf("%d %s %.2f", s.roll_no, s.name, s.marks);
   }
   ```

2. **Pass by Reference**: A pointer to the structure is passed to the function.

   **Example**:
   ```c
   void updateMarks(struct student *s) {
       s->marks = 90.0;  // Using pointer to update the marks
   }
   ```

---

## **10.3 Union**

### **10.3.1 What is a Union?**
A **union** is a user-defined data type that allows storing different data types in the same memory location. However, unlike structures, a union only allocates memory for the largest member.

### **Syntax**:
```c
union union_name {
    data_type member1;
    data_type member2;
    // More members...
};
```

### **Example**:
```c
union data {
    int i;
    float f;
    char str[20];
};
```

- **`union data`** is the union name.
- **`i`**, **`f`**, and **`str`** are the members of the union.

---

### **10.3.2 Declaring a Union Variable**
Once a union is defined, you can declare variables of that type.

### **Syntax**:
```c
union union_name variable_name;
```

### **Example**:
```c
union data d1;
```

You can also initialize union members at the time of declaration, but only one member can hold a value at a time since all members share the same memory location.

### **Example**:
```c
union data d1 = {10};  // Only 'i' is initialized with 10
```

---

### **10.3.3 Accessing Union Members**
Union members can be accessed using the **dot operator (`.`)**, just like structures.

### **Example**:
```c
d1.i = 5;              // Assign value to integer member
printf("%d", d1.i);    // Output: 5
```

- After assigning a value to one member of the union, the values of other members may be overwritten or invalid because all members share the same memory location.

---

### **10.3.4 Difference Between Structure and Union**
- **Memory Allocation**:
  - **Structure**: Each member has its own memory.
  - **Union**: All members share the same memory space.
  
- **Size**:
  - **Structure**: The size is the sum of the sizes of all its members.
  - **Union**: The size is the size of the largest member.

- **Usage**:
  - **Structure**: Suitable when you need to store different types of data together, each with its own memory location.
  - **Union**: Suitable when you need to store different types of data but only one type will be used at any time.

---

## **10.4 Structure vs Union**

| Feature               | Structure                         | Union                         |
|-----------------------|------------------------------------|-------------------------------|
| **Memory Allocation**  | Each member has its own memory.    | All members share the same memory. |
| **Size**               | Size is the sum of all members.    | Size is the size of the largest member. |
| **Access**             | All members can be accessed at once. | Only one member can be accessed at a time. |

---

## **10.5 Using `typedef` with Structures and Unions**
The `typedef` keyword allows you to create an alias for a structure or union type.

### **Structure Example**:
```c
typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student;
```
- Now you can use `Student` instead of `struct student`.

### **Union Example**:
```c
typedef union {
    int i;
    float f;
    char str[20];
} Data;
```
- Now you can use `Data` instead of `union data`.

---

## **10.6 Structure and Union with Pointers**
Pointers can be used with structures and unions to manipulate their data.

### **Structure Example**:
```c
struct student s1;
struct student *ptr = &s1;
ptr->marks = 90.0;  // Access member using pointer
```

### **Union Example**:
```c
union data d1;
union data *ptr = &d1;
ptr->i = 10;  // Access union member using pointer
```

---

## **10.7 Arrays of Structures and Unions**

### **Arrays of Structures**
You can declare an array of structures to store multiple instances of a structure.

### **Example**:
```c
struct student students[5];
```

### **Arrays of Unions**
You can declare an array of unions to store multiple instances of a union.

### **Example**:
```c
union data d[5];
```

---

## **10.8 Structures and Unions in Functions**
- Structures and unions can be passed to functions by **value** or **reference**.
- For passing by reference, use pointers to structures and unions.

---

## **10.9 Summary**
- **Structures** allow grouping variables of different data types under a single name and allocate separate memory for each member.
- **Unions** allow grouping variables of different data types, but all members share the same memory location, and only one member can store a value at a time.
- You can use **typedef** to create aliases for structures and unions.
- Structures and unions can be passed to functions by value or by reference (using pointers).
- **Arrays of