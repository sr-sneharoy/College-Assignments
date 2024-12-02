Here is the detailed explanation of Chapter 13: **Dynamic Memory Allocation and Linked List** in Markdown format:

---

# **Chapter 13: Dynamic Memory Allocation and Linked List**

---

## **13.1 Introduction**

Dynamic memory allocation allows programs to allocate memory at runtime instead of at compile time. This is particularly useful when the exact amount of memory required is not known in advance. Dynamic memory allocation makes use of the heap memory and allows the program to:
- Allocate memory on demand.
- Resize memory as needed.
- Free unused memory to avoid wastage.

### **Static vs Dynamic Memory Allocation**

| **Static Memory Allocation** | **Dynamic Memory Allocation** |
|------------------------------|-------------------------------|
| Memory size is fixed at compile time. | Memory size is decided during program execution. |
| Limited flexibility. | Offers greater flexibility. |
| Uses stack memory. | Uses heap memory. |
| Example: `int arr[10];` | Example: `int *arr = malloc(10 * sizeof(int));` |

---

## **13.2 Functions for Dynamic Memory Allocation**

C provides four standard library functions for dynamic memory allocation, all declared in `<stdlib.h>`:

### **1. malloc() (Memory Allocation)**

- Allocates a block of memory of the specified size.
- Returns a pointer to the allocated memory.
- The memory is uninitialized (contains garbage values).

#### **Syntax**:
```c
void *malloc(size_t size);
```

#### **Parameters**:
- `size`: Number of bytes to allocate.

#### **Example**:
```c
int *arr = (int *)malloc(5 * sizeof(int));
if (arr == NULL) {
    printf("Memory allocation failed.\n");
} else {
    printf("Memory allocation successful.\n");
}
```

---

### **2. calloc() (Contiguous Allocation)**

- Allocates memory for an array of elements.
- Initializes all allocated bytes to zero.
- Returns a pointer to the memory.

#### **Syntax**:
```c
void *calloc(size_t num, size_t size);
```

#### **Parameters**:
- `num`: Number of elements to allocate.
- `size`: Size of each element.

#### **Example**:
```c
int *arr = (int *)calloc(5, sizeof(int));
if (arr == NULL) {
    printf("Memory allocation failed.\n");
} else {
    printf("Memory allocation successful.\n");
}
```

---

### **3. realloc() (Reallocation)**

- Changes the size of a previously allocated memory block.
- Can expand or shrink the memory block.
- May move the memory block to a new location if necessary.

#### **Syntax**:
```c
void *realloc(void *ptr, size_t size);
```

#### **Parameters**:
- `ptr`: Pointer to the previously allocated memory block.
- `size`: New size in bytes.

#### **Example**:
```c
int *arr = (int *)malloc(5 * sizeof(int));
arr = (int *)realloc(arr, 10 * sizeof(int));
if (arr == NULL) {
    printf("Memory reallocation failed.\n");
} else {
    printf("Memory reallocation successful.\n");
}
```

---

### **4. free() (Memory Deallocation)**

- Frees a previously allocated memory block.
- Prevents memory leaks.
- Does not reset the pointer; setting the pointer to `NULL` afterward is a good practice.

#### **Syntax**:
```c
void free(void *ptr);
```

#### **Example**:
```c
free(arr);
arr = NULL; // Good practice to avoid dangling pointers
```
---

## **13.8 Summary**

- Dynamic memory allocation is a powerful feature in C that allows runtime memory management using `malloc()`, `calloc()`, `realloc()`, and `free()`.
- Linked lists are a versatile data structure that makes use of dynamic memory.
- The three main types of linked lists are:
  1. Singly Linked List.
  2. Doubly Linked List.
  3. Circular Linked List.
- Operations on linked lists include insertion, deletion, and traversal.

--- 