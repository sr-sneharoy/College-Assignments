**3. Define data structures. Give some examples.**

Data structures are organized ways to store, manage, and manipulate data efficiently. They enable effective data handling, allowing faster access and modification. Examples include:

1. **Array**: Stores elements of the same type in contiguous memory locations.
   - Example: `int numbers[5] = {1, 2, 3, 4, 5};`

2. **Linked List**: Consists of nodes, each containing data and a reference to the next node.
   - Example: Singly or doubly linked lists for dynamic data handling.

3. **Stack**: Follows LIFO (Last In, First Out) order, with operations at one end (top).
   - Example: Function call stack.

4. **Queue**: Follows FIFO (First In, First Out) order, with operations at both ends.
   - Example: Printer job queue.

5. **Tree**: A hierarchical structure with nodes connected in parent-child relationships.
   - Example: Binary Tree, Binary Search Tree.

6. **Hash Table**: Stores data in key-value pairs, providing fast retrieval by hashing keys.
   - Example: Dictionary for quick lookups.

These structures serve different purposes, optimizing performance for specific operations like search, insert, or delete.

---

**4. Ways to Categorize Data Structures**

   - **Primitive vs. Non-Primitive**: 
     - *Primitive* data structures include basic types like integers, floats, and characters. They are directly operated upon by machine instructions.
     - *Non-Primitive* data structures are built using primitive types and include arrays, stacks, queues, linked lists, and trees.
     
   - **Linear vs. Non-Linear**: 
     - *Linear* structures, like arrays, linked lists, stacks, and queues, store data in a sequential manner. Each element has a specific position.
     - *Non-Linear* structures, such as trees and graphs, store data hierarchically. For example, in a tree, each node can connect to multiple children.

   - **Static vs. Dynamic**: 
     - *Static* data structures (e.g., arrays) have a fixed size. They are allocated at compile time.
     - *Dynamic* data structures (e.g., linked lists, dynamic arrays) can change in size during runtime, allowing for efficient use of memory.

   - **Homogeneous vs. Heterogeneous**: 
     - *Homogeneous* structures, like arrays, store data of the same type.
     - *Heterogeneous* structures, like records (structs in C), allow for different data types within a single structure.

---

**5. Applications of Data Structures**

   - **Arrays**: Used in image processing where pixels can be stored as arrays, mathematical operations on matrices, and databases to store structured data.
   - **Stacks**: Used in expression evaluation, parsing, function call management in programming languages, and undo operations in applications.
   - **Queues**: Used in job scheduling, handling requests in web servers, and managing tasks in multitasking operating systems.
   - **Trees**: File systems, database indexing (B-trees), and artificial intelligence (decision trees).
   - **Graphs**: Represent networks such as computer networks, social networks, and transportation routes.
   - **Hash Tables**: Used in databases for indexing, caching, and implementing associative arrays where quick lookups are required.

---

**6. Operations on Data Structures**

   - **Insertion**: Adding new elements to a data structure (e.g., appending to an array or inserting a node in a linked list).
   - **Deletion**: Removing elements (e.g., removing from a stack or deleting a node in a binary tree).
   - **Traversal**: Accessing each element (e.g., traversing a linked list or tree).
   - **Searching**: Finding a specific element (e.g., linear search in an array or binary search in a sorted array).
   - **Sorting**: Arranging elements in a particular order (e.g., bubble sort, quick sort).

---

**7. Comparison of Linked List and Array**

   - **Memory**: Arrays allocate a contiguous memory block; linked lists use non-contiguous memory with each node holding a pointer to the next node.
   - **Size**: Arrays are fixed in size once allocated. Linked lists are dynamic, allowing for growth or reduction in size.
   - **Access**: Arrays offer constant-time access to elements via indices. Linked lists require traversal from the head, making access time proportional to position.
   - **Insertion/Deletion**: Easier and faster in linked lists since there’s no need to shift elements. Arrays require shifting elements, which is slower.

---

**8. Abstract Data Type (ADT)**

   An **Abstract Data Type (ADT)** is a conceptual model of a data structure, defined by its operations and behavior rather than its implementation. For example, a stack ADT allows for push, pop, and peek operations, regardless of whether it’s implemented as an array or linked list.

---

**9. Types of Data Structures with Pros and Cons**

   - **Arrays**: 
     - *Pros*: Fast access using indices, easy to use.
     - *Cons*: Fixed size, inefficient insertion and deletion for large arrays.

   - **Linked Lists**: 
     - *Pros*: Dynamic size, easy insertion/deletion.
     - *Cons*: Slower access, more memory due to pointers.

   - **Stacks and Queues**: 
     - *Pros*: Efficient for LIFO and FIFO operations, ideal for controlled access.
     - *Cons*: Limited operations outside of push/pop or enqueue/dequeue.

   - **Trees**: 
     - *Pros*: Fast search and insertion in balanced trees, efficient for hierarchical data.
     - *Cons*: Complex to implement and maintain, especially balanced trees.

   - **Graphs**: 
     - *Pros*: Flexible connections between nodes, ideal for network representation.
     - *Cons*: High memory usage for large graphs, complex algorithms for traversal.

---

**10. Definition of an Algorithm and Its Features**

   An **algorithm** is a well-defined sequence of steps or instructions designed to perform a specific task. **Features**:
   - **Input** and **Output**: Takes an input and produces an output.
   - **Finiteness**: It terminates after a finite number of steps.
   - **Definiteness**: Clear and unambiguous instructions.
   - **Effectiveness**: Each step is achievable in finite time.

   *Example*: To find the largest element in an array, iterate through each element and compare it with the current largest value.

---

**11. Approaches to Algorithm Design**

   - **Divide and Conquer**: Breaks down a problem into smaller subproblems, solves each, and combines results. *Example*: Merge Sort.
   - **Greedy**: Makes locally optimal choices at each stage, aiming for a global optimum. *Example*: Dijkstra's algorithm.
   - **Dynamic Programming**: Stores intermediate results to solve overlapping subproblems efficiently. *Example*: Fibonacci calculation.
   - **Backtracking**: Attempts solutions incrementally and discards those that don’t fit. *Example*: N-Queens problem.

---

**12. Modularization**

   Divides a program into smaller, self-contained modules. **Advantages**:
   - Improves readability, simplifies debugging, allows for code reuse, and enhances maintainability.

---

**13. Trees as a Data Structure**

   Trees represent hierarchical structures. A **binary tree** is a common type with each node having at most two children. *Applications*: file systems, databases, game trees (e.g., in AI).

---

**14. Understanding a Graph**

   A **graph** consists of nodes (vertices) and edges connecting them, representing relationships. Types include **directed** and **undirected** graphs. *Applications*: Social networks, pathfinding algorithms, dependency graphs in tasks.

---

**15. Criteria for Choosing an Algorithm**

   - **Time Complexity**: Efficient for large inputs.
   - **Space Complexity**: Should not use excessive memory.
   - **Scalability**: Performance should scale with larger input sizes.
   - **Problem Constraints**: Should fit within the problem’s limits.

---

**16. Time-Space Trade-Off**

   Balances the memory used by an algorithm against its speed. For instance, dynamic programming saves time with extra memory to store intermediate results.

---

**17. Algorithm Efficiency**

   Efficiency measures how well an algorithm uses resources like time and memory. It’s evaluated based on time complexity (how runtime grows with input size) and space complexity (memory use).

---

**18. Expressing Time Complexity**

   Time complexity is expressed in Big O notation, showing the growth rate. Examples:
   - **Linear \( O(n) \)**: Grows proportionally with input (e.g., linear search).
   - **Logarithmic \( O(\log n) \)**: Grows logarithmically (e.g., binary search).

---

**19. Significance and Limitations of Big O Notation**

   **Big O** provides an upper limit on the growth rate, useful for worst-case analysis. However, it doesn’t provide details on best or average cases and ignores constant factors.

**Note By Me:**
   - **Big O** => Upper Bound =>The Worst Case of an algorithm time complexity
   - **Big Omega** => Lower Bound =>The Best Case of an algorithm time complexity
   - **Big Theta** => Tight Bound =>The Average Case of an algorithm time complexity

---

**20. Time Complexity Cases**

   - **Best Case**: Minimum time (e.g., finding an item at the start of a list).
   - **Worst Case**: Maximum time (e.g., item at end of list).
   - **Average Case**: Expected time over all inputs.
   - **Amortized Time**: Average over a sequence of operations.

---

**21. Categories Based on Running Time Complexity**

   - **Constant \( O(1) \)**, **Logarithmic \( O(\log n) \)**, **Linear \( O(n) \)**, **Polynomial \( O(n^k) \)**, **Exponential \( O(2^n) \)**.

---

**22. Big O Functions Examples**

   - Valid examples: \( O(n) \), \( O(n^2) \).
   - Invalid: exponential growth like \( 3^n \) is not typically analyzed in Big O.

---


**23. Little o Notation ( \( o(g(n)) \) ):**  
Describes an upper bound where \( f(n) \) grows strictly slower than \( g(n) \). If \( f(n) = n \log n \), it’s in \( o(n^2) \), since it grows slower than \( n^2 \).

---

**24. Examples of Little o Notation:**
- **In** \( o(n^2) \): \( n \log n \), \( \sqrt{n} \).
- **Not in** \( o(n^2) \): \( n^2 \), \( n^3 \) (they grow as fast or faster than \( n^2 \)).

---

**25. Big O vs. Little o Notations:**
- **Big O** gives an upper bound where \( f(n) \) can grow as fast as \( g(n) \).
- **Little o** provides a stricter bound, meaning \( f(n) \) grows strictly slower than \( g(n) \).

---

**26. Omega ( \( \Omega(g(n)) \) ):**  
Describes a lower bound; \( f(n) \) grows at least as fast as \( g(n) \). For linear search, the best-case time is \( \Omega(1) \).

---

**27. Examples of Omega Notation:**
- **In** \( \Omega(n) \): \( n \), \( n \log n \) (grow at least as fast as \( n \)).
- **Not in** \( \Omega(n) \): \( \log n \), constants (they grow slower than \( n \)).

---

**28. Theta ( \( \Theta(g(n)) \) ):**  
A tight bound indicating \( f(n) \) grows exactly as fast as \( g(n) \). For binary search, time complexity is \( \Theta(\log n) \).

---

**29. Examples of Theta Notation:**
- **In** \( \Theta(n^2) \): \( n^2 + 3n + 5 \), \( 6n^2 \) (both dominated by \( n^2 \)).
- **Not in** \( \Theta(n^2) \): \( n \) (grows slower), \( n^3 \) (grows faster).