### **Chapter 6: Decision Making and Branching**  
(*Programming with Java* by E. Balagurusamy, 3rd Edition)  

---

## **6.1 Introduction to Decision Making**  
Decision-making structures allow a program to execute different code based on conditions. Java provides several branching statements:

1. **if statement**  
2. **if-else statement**  
3. **nested if statement**  
4. **if-else-if ladder**  
5. **switch statement**  

These statements enable Java programs to make logical choices during execution.

---

## **6.2 The if Statement**  
The `if` statement executes a block of code only if a given condition is true.  

### **Syntax:**  
```java
if (condition) {
    // Code to execute if condition is true
}
```
### **Example:**
```java
int age = 18;
if (age >= 18) {
    System.out.println("You are eligible to vote.");
}
```
If `age` is 18 or more, the message is printed.

---

## **6.3 The if-else Statement**  
The `if-else` statement provides an alternative block of code if the condition is false.

### **Syntax:**
```java
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

### **Example:**
```java
int number = 10;
if (number % 2 == 0) {
    System.out.println("Even number");
} else {
    System.out.println("Odd number");
}
```
Since `10 % 2 == 0`, it prints "Even number."

---

## **6.4 Nested if Statements**  
An `if` statement inside another `if` statement is called **nested if**.

### **Syntax:**
```java
if (condition1) {
    if (condition2) {
        // Code to execute if both conditions are true
    }
}
```

### **Example:**
```java
int age = 25;
boolean hasVoterID = true;
if (age >= 18) {
    if (hasVoterID) {
        System.out.println("You can vote.");
    }
}
```
Since both conditions are true, "You can vote." is printed.

---

## **6.5 The if-else-if Ladder**  
Used when there are multiple conditions to check sequentially.

### **Syntax:**
```java
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
} else if (condition3) {
    // Code if condition3 is true
} else {
    // Code if all conditions are false
}
```

### **Example:**
```java
int marks = 85;
if (marks >= 90) {
    System.out.println("Grade A");
} else if (marks >= 80) {
    System.out.println("Grade B");
} else if (marks >= 70) {
    System.out.println("Grade C");
} else {
    System.out.println("Fail");
}
```
Since `marks = 85`, it prints "Grade B."

---

## **6.6 The switch Statement**  
The `switch` statement is used when multiple values need to be compared against a variable.

### **Syntax:**
```java
switch (expression) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code if none of the cases match
}
```

### **Example:**
```java
int day = 3;
switch (day) {
    case 1:
        System.out.println("Monday");
        break;
    case 2:
        System.out.println("Tuesday");
        break;
    case 3:
        System.out.println("Wednesday");
        break;
    default:
        System.out.println("Invalid day");
}
```
Since `day = 3`, it prints "Wednesday."

---

## **6.7 Conditional (Ternary) Operator**  
An alternative to simple `if-else` statements.

### **Syntax:**
```java
variable = (condition) ? value_if_true : value_if_false;
```

### **Example:**
```java
int a = 10, b = 5;
int min = (a < b) ? a : b;
System.out.println("Minimum: " + min);
```
Since `10 < 5` is false, it prints "Minimum: 5."

---

## **6.8 The goto Statement (Not Used in Java)**  
- Java does not support `goto` because it makes code harder to read.  
- Instead, **break**, **continue**, and **return** are used.

---

## **Conclusion**  
- Decision-making statements allow **conditional execution** of code.  
- The **if-else-if ladder** and **switch** statements handle multiple conditions.  
- **Ternary operator** provides a compact alternative for `if-else`.  
- Java avoids **goto** for better readability.  

---

### **Chapter 7: Decision Making and Looping**  
(*Programming with Java* by E. Balagurusamy, 3rd Edition)  

---

## **7.1 Introduction to Looping**  
Looping allows a program to execute a block of code multiple times until a certain condition is met. Java provides three primary types of loops:

1. **while loop**  
2. **do-while loop**  
3. **for loop**  

Each loop has a specific use case, and Java also includes **break** and **continue** statements to control loop execution.

---

## **7.2 The while Loop**  
The `while` loop executes a block of code as long as the given condition is true.

### **Syntax:**  
```java
while (condition) {
    // Code to execute while condition is true
}
```

### **Example:**
```java
int i = 1;
while (i <= 5) {
    System.out.println("Iteration: " + i);
    i++;
}
```
**Output:**  
```
Iteration: 1  
Iteration: 2  
Iteration: 3  
Iteration: 4  
Iteration: 5  
```
The loop stops when `i > 5`.

---

## **7.3 The do-while Loop**  
The `do-while` loop ensures that the block of code runs **at least once**, even if the condition is false initially.

### **Syntax:**
```java
do {
    // Code to execute
} while (condition);
```

### **Example:**
```java
int i = 6;
do {
    System.out.println("Iteration: " + i);
    i++;
} while (i <= 5);
```
**Output:**  
```
Iteration: 6  
```
Even though `i` starts at 6, the loop executes **once** before checking the condition.

---

## **7.4 The for Loop**  
The `for` loop is used when the number of iterations is known in advance.

### **Syntax:**
```java
for (initialization; condition; increment/decrement) {
    // Code to execute
}
```

### **Example:**
```java
for (int i = 1; i <= 5; i++) {
    System.out.println("Iteration: " + i);
}
```
**Output:**  
```
Iteration: 1  
Iteration: 2  
Iteration: 3  
Iteration: 4  
Iteration: 5  
```

---

## **7.5 The for-each Loop** *(Enhanced for Loop)*  
Used for iterating over arrays and collections.

### **Syntax:**
```java
for (dataType variable : collection) {
    // Code to execute
}
```

### **Example:**
```java
int[] numbers = {10, 20, 30, 40};
for (int num : numbers) {
    System.out.println(num);
}
```
**Output:**  
```
10  
20  
30  
40  
```

---

## **7.6 Jump Statements: break and continue**  
### **The break Statement**  
- Used to **exit a loop** immediately when a condition is met.  

### **Example:**
```java
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;
    }
    System.out.println(i);
}
```
**Output:**  
```
1  
2  
3  
4  
```
Loop exits when `i == 5`.

### **The continue Statement**  
- Skips the current iteration and proceeds with the next cycle.

### **Example:**
```java
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }
    System.out.println(i);
}
```
**Output:**  
```
1  
2  
4  
5  
```
When `i == 3`, it skips printing and moves to the next iteration.

---

## **7.7 Nested Loops**  
A loop inside another loop.

### **Example:**
```java
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        System.out.println("i = " + i + ", j = " + j);
    }
}
```
**Output:**  
```
i = 1, j = 1  
i = 1, j = 2  
i = 2, j = 1  
i = 2, j = 2  
i = 3, j = 1  
i = 3, j = 2  
```

---

## **7.8 Infinite Loops**  
If the loop condition is always `true`, it becomes an **infinite loop**.

### **Example:**
```java
while (true) {
    System.out.println("This runs forever!");
}
```
Use **break** to avoid infinite execution.

---

## **Conclusion**  
- **while**, **do-while**, and **for** loops help in executing repetitive tasks.  
- **break** exits a loop, while **continue** skips an iteration.  
- **Nested loops** handle complex scenarios.  
- Avoid **infinite loops** by ensuring conditions change within the loop.  

---

### **Chapter 8: Classes, Objects, and Methods**  
(*Programming with Java* by E. Balagurusamy, 3rd Edition)  

---

## **8.1 Introduction to Object-Oriented Programming (OOP)**  
- Java follows the **object-oriented programming (OOP)** paradigm, which is based on **real-world entities** like objects and classes.  
- OOP provides key concepts such as **encapsulation, inheritance, polymorphism, and abstraction** to build scalable and reusable code.  

---

## **8.2 Defining a Class**  
A **class** is a **blueprint** for creating objects. It contains **fields (variables)** and **methods (functions)** to define behavior.

### **Syntax:**
```java
class ClassName {
    // Fields (variables)
    // Methods (functions)
}
```

### **Example:**
```java
class Car {
    String brand;
    int speed;

    void displayInfo() {
        System.out.println("Brand: " + brand + ", Speed: " + speed);
    }
}
```

---

## **8.3 Creating Objects**  
An **object** is an instance of a class, created using the `new` keyword.

### **Syntax:**
```java
ClassName objectName = new ClassName();
```

### **Example:**
```java
public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();  // Creating an object
        myCar.brand = "Toyota";
        myCar.speed = 120;
        myCar.displayInfo();
    }
}
```
**Output:**  
```
Brand: Toyota, Speed: 120
```

---

## **8.4 Methods in Java**  
A **method** is a function inside a class that defines behavior.

### **Syntax:**
```java
returnType methodName(parameters) {
    // Method body
}
```

### **Example:**
```java
class Calculator {
    int add(int a, int b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        int result = calc.add(5, 10);
        System.out.println("Sum: " + result);
    }
}
```
**Output:**  
```
Sum: 15
```

---

## **8.5 Constructors**  
A **constructor** initializes an object when it is created. It has the same name as the class and no return type.

### **Example:**
```java
class Person {
    String name;

    // Constructor
    Person(String personName) {
        name = personName;
    }

    void display() {
        System.out.println("Name: " + name);
    }
}

public class Main {
    public static void main(String[] args) {
        Person p = new Person("John");
        p.display();
    }
}
```
**Output:**  
```
Name: John
```

---

## **8.6 Method Overloading**  
- **Method overloading** allows multiple methods with the **same name but different parameters**.  
- Helps improve **code readability and reusability**.

### **Example:**
```java
class MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        MathOperations obj = new MathOperations();
        System.out.println(obj.add(5, 10));       // Calls int version
        System.out.println(obj.add(3.5, 2.5));   // Calls double version
    }
}
```
**Output:**  
```
15
6.0
```

---

## **8.7 Static Members**  
- **Static variables and methods** belong to the **class, not to individual objects**.  
- They can be accessed **without creating an object**.

### **Example:**
```java
class Counter {
    static int count = 0;

    Counter() {
        count++;
        System.out.println("Count: " + count);
    }
}

public class Main {
    public static void main(String[] args) {
        Counter c1 = new Counter();
        Counter c2 = new Counter();
    }
}
```
**Output:**  
```
Count: 1
Count: 2
```

---

## **8.8 Access Specifiers (Modifiers)**  
Access specifiers **control the visibility** of class members.

| Modifier | Scope |
|----------|-------|
| `public` | Accessible from anywhere |
| `private` | Accessible only within the class |
| `protected` | Accessible within the same package and subclasses |
| *No modifier* (default) | Accessible within the same package |

### **Example:**
```java
class Example {
    private int data = 40;

    private void showData() {
        System.out.println("Data: " + data);
    }
}

public class Main {
    public static void main(String[] args) {
        Example obj = new Example();
        // obj.data = 50;  // Error (private access)
        // obj.showData();  // Error (private access)
    }
}
```

---

## **8.9 The `this` Keyword**  
- Refers to the **current instance of the class**.
- Used to differentiate between **instance variables and parameters**.

### **Example:**
```java
class Student {
    String name;

    Student(String name) {
        this.name = name;  // Using 'this' to refer to the instance variable
    }

    void display() {
        System.out.println("Student Name: " + name);
    }
}

public class Main {
    public static void main(String[] args) {
        Student s1 = new Student("Alice");
        s1.display();
    }
}
```
**Output:**  
```
Student Name: Alice
```

---

## **8.10 Garbage Collection**  
- Java has **automatic memory management**.
- The **Garbage Collector (GC)** removes unused objects.
- `System.gc();` can be used to suggest garbage collection.

### **Example:**
```java
class Demo {
    protected void finalize() {
        System.out.println("Object is garbage collected");
    }
}

public class Main {
    public static void main(String[] args) {
        Demo d1 = new Demo();
        d1 = null;
        System.gc();  // Suggest garbage collection
    }
}
```

---

## **Conclusion**  
- **Classes and objects** are fundamental in Java.  
- **Methods and constructors** define the behavior of objects.  
- **Method overloading, static members, and access specifiers** enhance flexibility.  
- **Garbage collection** handles memory management automatically.  

---

### **Chapter 9: Arrays, Strings, and Vectors**  
(*Programming with Java* by E. Balagurusamy, 3rd Edition)  

---

## **9.1 Introduction**  
Java provides built-in support for handling **arrays, strings, and vectors**, which are essential for storing and manipulating collections of data efficiently.

---

## **9.2 Arrays in Java**  
An **array** is a collection of elements of the **same data type**, stored in contiguous memory locations.

### **Declaring and Initializing an Array**  
```java
int[] numbers = new int[5];  // Declaring an array of size 5
numbers[0] = 10;  // Assigning values
```

OR

```java
int[] numbers = {10, 20, 30, 40, 50};  // Direct initialization
```

### **Accessing Array Elements**  
```java
System.out.println(numbers[2]);  // Output: 30
```

### **Looping through an Array**  
```java
for (int i = 0; i < numbers.length; i++) {
    System.out.println(numbers[i]);
}
```

---

## **9.3 Types of Arrays in Java**  

### **1. One-Dimensional Array**
```java
int[] arr = {1, 2, 3, 4, 5};
for (int num : arr) {
    System.out.println(num);
}
```

### **2. Two-Dimensional Array (Matrix)**
```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6}
};

// Accessing elements
System.out.println(matrix[0][1]);  // Output: 2
```

### **3. Jagged Arrays (Irregular Arrays)**
```java
int[][] jaggedArray = new int[3][];
jaggedArray[0] = new int[2];  // First row has 2 elements
jaggedArray[1] = new int[3];  // Second row has 3 elements
jaggedArray[2] = new int[1];  // Third row has 1 element
```

---

## **9.4 Strings in Java**  
A **string** is a sequence of characters. Java provides the `String` class for handling text data.

### **Creating a String**
```java
String str1 = "Hello";
String str2 = new String("World");
```

### **Common String Methods**
```java
String str = "Java Programming";

System.out.println(str.length());         // Output: 16
System.out.println(str.toUpperCase());    // Output: JAVA PROGRAMMING
System.out.println(str.toLowerCase());    // Output: java programming
System.out.println(str.charAt(5));        // Output: P
System.out.println(str.substring(5, 11)); // Output: Progra
System.out.println(str.contains("Java")); // Output: true
```

### **String Concatenation**
```java
String s1 = "Hello ";
String s2 = "World";
String s3 = s1 + s2;
System.out.println(s3);  // Output: Hello World
```

### **Comparing Strings**
```java
String s1 = "Java";
String s2 = "Java";
String s3 = "Python";

System.out.println(s1.equals(s2));  // true
System.out.println(s1.equals(s3));  // false
System.out.println(s1.compareTo(s3)); // Negative value (since 'J' < 'P')
```

### **String Immutability**
- Strings in Java are **immutable** (cannot be changed after creation).
- To modify strings efficiently, use **StringBuilder** or **StringBuffer**.

```java
StringBuilder sb = new StringBuilder("Hello");
sb.append(" World");
System.out.println(sb);  // Output: Hello World
```

---

## **9.5 The `StringBuffer` and `StringBuilder` Classes**  
Unlike `String`, `StringBuffer` and `StringBuilder` are **mutable** (modifiable).

| Feature           | StringBuffer | StringBuilder |
|------------------|-------------|--------------|
| Thread-Safe     | Yes         | No           |
| Performance     | Slower      | Faster       |

### **Example Using `StringBuffer`**
```java
StringBuffer sb = new StringBuffer("Java");
sb.append(" Programming");
System.out.println(sb);  // Output: Java Programming
```

### **Example Using `StringBuilder`**
```java
StringBuilder sb = new StringBuilder("Fast");
sb.append(" Execution");
System.out.println(sb);  // Output: Fast Execution
```

---

## **9.6 Vectors in Java**  
A **Vector** is a **dynamic array** that can grow or shrink in size. It is part of `java.util` package.

### **Declaring a Vector**
```java
import java.util.Vector;

Vector<Integer> vec = new Vector<>();
```

### **Adding Elements**
```java
vec.add(10);
vec.add(20);
vec.add(30);
System.out.println(vec);  // Output: [10, 20, 30]
```

### **Accessing Elements**
```java
System.out.println(vec.get(1));  // Output: 20
```

### **Removing Elements**
```java
vec.remove(1);  // Removes element at index 1 (20)
System.out.println(vec);  // Output: [10, 30]
```

### **Iterating Over a Vector**
```java
for (int num : vec) {
    System.out.println(num);
}
```

---

## **9.7 Differences Between Arrays, Strings, and Vectors**  

| Feature       | Arrays | Strings | Vectors |
|--------------|--------|---------|---------|
| Size         | Fixed  | Immutable | Dynamic |
| Modification | Not Resizable | Cannot Modify | Can Grow/Shrink |
| Performance  | Fastest | Moderate | Slower (Thread-safe) |
| Use Case     | Homogeneous Data | Text Data | Dynamic Lists |

---

## **9.8 Conclusion**  
- **Arrays** store multiple values of the same type.  
- **Strings** are immutable sequences of characters.  
- **StringBuffer & StringBuilder** provide efficient string manipulation.  
- **Vectors** are dynamic arrays that support resizing.  

---

### **Chapter 10: Interfaces – Multiple Inheritance**  
(*Programming with Java* by E. Balagurusamy, 3rd Edition)  

---

## **10.1 Introduction to Interfaces**  
- Java **does not support multiple inheritance** using classes to avoid ambiguity.  
- Instead, Java provides **interfaces**, which allow a class to inherit multiple behaviors.  
- An **interface** is like a blueprint that contains **only abstract methods** (before Java 8) and **static/final variables**.  

---

## **10.2 Defining an Interface**  
An **interface** is declared using the `interface` keyword.

```java
interface Animal {
    void eat();  // Abstract method (no body)
}
```

---

## **10.3 Implementing an Interface**  
A class implements an interface using the `implements` keyword.

```java
class Dog implements Animal {
    public void eat() {
        System.out.println("Dog is eating");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat();  // Output: Dog is eating
    }
}
```
### **Key Points:**  
- The **implementing class must provide the body** for all methods.  
- Methods in interfaces are **public and abstract by default**.

---

## **10.4 Multiple Inheritance Using Interfaces**  
Java allows a class to implement multiple interfaces, achieving multiple inheritance.

```java
interface Animal {
    void eat();
}

interface Bird {
    void fly();
}

class Eagle implements Animal, Bird {
    public void eat() {
        System.out.println("Eagle eats meat");
    }

    public void fly() {
        System.out.println("Eagle flies high");
    }
}

public class Main {
    public static void main(String[] args) {
        Eagle e = new Eagle();
        e.eat();
        e.fly();
    }
}
```
### **Key Points:**  
- A class can **implement multiple interfaces**.  
- This resolves **diamond problem** faced in multiple inheritance with classes.  

---

## **10.5 Extending Interfaces**  
An interface can **extend another interface** using `extends`.

```java
interface Animal {
    void eat();
}

interface WildAnimal extends Animal {
    void hunt();
}

class Tiger implements WildAnimal {
    public void eat() {
        System.out.println("Tiger eats flesh");
    }

    public void hunt() {
        System.out.println("Tiger hunts in the jungle");
    }
}
```
### **Key Points:**  
- An interface can **inherit from another interface**.  
- The implementing class must **override all inherited methods**.  

---

## **10.6 Default and Static Methods in Interfaces (Java 8+)**  
From Java 8, interfaces can have **default** and **static methods** with implementations.

### **Default Methods**  
```java
interface Animal {
    default void sleep() {
        System.out.println("Animal is sleeping");
    }
}

class Dog implements Animal {
    public void bark() {
        System.out.println("Dog barks");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sleep();  // Output: Animal is sleeping
        d.bark();   // Output: Dog barks
    }
}
```
- **Default methods** allow adding new functionalities to interfaces without breaking existing code.  

### **Static Methods**  
```java
interface MathUtils {
    static int add(int a, int b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println(MathUtils.add(5, 3));  // Output: 8
    }
}
```
- **Static methods** are called using the interface name, not an instance.  

---

## **10.7 Interfaces vs Abstract Classes**  

| Feature          | Interface | Abstract Class |
|-----------------|-----------|---------------|
| Inheritance     | Multiple  | Single        |
| Methods        | Only abstract (until Java 8) | Can have both abstract & concrete methods |
| Variables       | `public static final` by default | Can have normal variables |
| Constructor     | Not allowed | Allowed |
| Performance     | Slower | Faster |

---

## **10.8 Applications of Interfaces**  
- **Multiple Inheritance**: Allows a class to inherit multiple behaviors.  
- **Loose Coupling**: Promotes separation between implementation and usage.  
- **Java Collections Framework**: Uses interfaces like `List`, `Set`, and `Map`.  
- **Functional Interfaces**: Supports lambda expressions (Java 8).  

---

## **10.9 Conclusion**  
- **Interfaces** help achieve **multiple inheritance** in Java.  
- **Default & static methods** in Java 8 provide additional flexibility.  
- They are heavily used in **Java frameworks, APIs, and design patterns**.  

---


### Full Answers to All Questions:

---

#### **8.1: What is a class? How does it accomplish data hiding?**
A **class** is a blueprint for creating objects. It encapsulates data (fields) and methods.  
**Data hiding** is achieved by:  
1. Declaring fields as `private` so they are not directly accessible outside the class.  
2. Using `public` getter and setter methods to control and validate access to these fields.

---

#### **8.2: How do classes help us organize our programs?**
Classes provide a modular structure by grouping related data and methods.  
- **Benefits**:
  - Improves code organization.
  - Enhances code reuse.
  - Makes programs easier to debug and maintain.

---

#### **8.3: What are the three parts of a simple, empty class?**
1. **Class declaration**: Example: `class ClassName { }`.  
2. **Fields (optional)**: Variables defined in the class.  
3. **Methods (optional)**: Functions defined in the class to perform operations.

---

#### **8.4: What are objects? How are they created from a class?**
- **Objects** are instances of a class that store data and invoke methods.  
- **Creation**:  
```java
ClassName obj = new ClassName();
```

---

#### **8.5: How is a method defined?**
A method is defined with:  
1. Access modifier (`public`, `private`, etc.).  
2. Return type (`void`, `int`, etc.).  
3. Name.  
4. Parameters.  
5. Body.  
**Example**:  
```java
public int add(int a, int b) {
   return a + b;
}
```

---

#### **8.6: When do we declare a member of a class static?**
We declare a member `static` when it belongs to the **class itself** rather than any instance of the class.  
**Example**:  
```java
class MyClass {
   static int count; // Shared by all objects
}
```

---

#### **8.7: What is a constructor? What are its special properties?**
A **constructor** is a special method used to initialize objects of a class.  
**Properties**:  
1. It has the same name as the class.  
2. It has no return type.  
3. It is called automatically during object creation.  
**Example**:  
```java
class MyClass {
   MyClass() {
       System.out.println("Constructor called!");
   }
}
```

---

#### **8.8: How do we invoke a constructor?**
Constructors are invoked automatically when creating an object using the `new` keyword.  
Example:  
```java
MyClass obj = new MyClass(); // Constructor invoked
```

---

#### **8.9: What is inheritance and how does it help us create new classes quickly?**
Inheritance allows a class to inherit fields and methods from another class. It helps create new classes quickly by reusing code from existing classes.  
**Example**:  
```java
class Parent { }
class Child extends Parent { }
```

---

#### **8.10: Describe different forms of inheritance with examples.**
1. **Single Inheritance**:  
   A class inherits from one class.  
   Example: `class B extends A { }`  
2. **Multilevel Inheritance**:  
   A class inherits from another derived class.  
   Example: `class C extends B { }`  
3. **Hierarchical Inheritance**:  
   Multiple classes inherit from a single base class.  
   Example: `class B extends A { }` and `class C extends A { }`  
4. **Java does not support multiple inheritance directly (to avoid ambiguity).**

---

#### **8.11: Describe the syntax of single inheritance in Java.**
```java
class Parent {
   void show() {
       System.out.println("Parent");
   }
}
class Child extends Parent {
   void display() {
       System.out.println("Child");
   }
}
```

---

#### **8.12: Compare and contrast overloading and overriding.**
- **Overloading**:  
  - Same method name, different parameters.  
  - Happens in the same class.  
  - Compile-time polymorphism.  
- **Overriding**:  
  - Same method signature in parent and child classes.  
  - Runtime polymorphism.

---

#### **8.13: When do we declare a method or class `final`?**
- A `final` **method** cannot be overridden.  
- A `final` **class** cannot be extended.

---

#### **8.14: When do we declare a method or class abstract?**
- A class is declared `abstract` when it contains abstract methods or is meant to be a base class.  
- A method is declared `abstract` when it has no body and must be implemented in derived classes.  
Example:  
```java
abstract class A {
   abstract void method();
}
```

---

#### **8.15: Discuss the different levels of access protection available in Java.**
1. **Private**: Accessible only within the class.  
2. **Default**: Accessible within the package.  
3. **Protected**: Accessible within the package and subclasses.  
4. **Public**: Accessible from anywhere.

---

#### **8.16: Design a class to represent a bank account.**
```java
class BankAccount {
   String name;
   int accountNumber;
   String type;
   double balance;

   // Method to assign initial values
   void assignValues(String name, int accountNumber, String type, double balance) {
       this.name = name;
       this.accountNumber = accountNumber;
       this.type = type;
       this.balance = balance;
   }

   // Method to deposit
   void deposit(double amount) {
       balance += amount;
   }

   // Method to withdraw
   void withdraw(double amount) {
       if (balance >= amount) {
           balance -= amount;
       } else {
           System.out.println("Insufficient balance.");
       }
   }

   // Method to display balance
   void displayBalance() {
       System.out.println("Balance: " + balance);
   }
}
```

---

#### **8.17: Modify the above class to include a constructor to provide initial values.**
```java
class BankAccount {
   String name;
   int accountNumber;
   String type;
   double balance;

   // Constructor
   BankAccount(String name, int accountNumber, String type, double balance) {
       this.name = name;
       this.accountNumber = accountNumber;
       this.type = type;
       this.balance = balance;
   }

   // Same methods as above
}
```

---

#### **8.18: Assume a bank maintains two kinds of accounts: Current and Savings.**
You can create subclasses for `CurrentAccount` and `SavingsAccount` inheriting from `BankAccount`. Define additional methods as needed.

---

#### **8.19: Modify Question 8.18 to include constructors.**
```java
class CurrentAccount extends BankAccount {
   CurrentAccount(String name, int accountNumber, double balance) {
       super(name, accountNumber, "Current", balance);
   }
}
class SavingsAccount extends BankAccount {
   SavingsAccount(String name, int accountNumber, double balance) {
       super(name, accountNumber, "Savings", balance);
   }
}
```

---

#### **8.20: Educational institution hierarchical classes.**
The diagram suggests a hierarchical structure.  
Write separate classes like `Staff`, `Teacher`, etc., and define appropriate methods for each. Let me know if you'd like detailed code for this!

--- 

Answering all questions in the provided images would require a significant amount of time and effort. I'll break it into sections to provide detailed and precise answers for each. Let me start answering them sequentially.

### **Image: 9_1.jpg**

#### **Q9.1 What is an array?**
An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow you to store multiple values under a single variable name and access them using an index.

#### **Q9.2 Why are arrays easier to use compared to a bunch of related variables?**
- Arrays reduce the need for multiple variable declarations.
- They provide easier manipulation of data using loops.
- Arrays simplify operations like sorting and searching due to indexed access.
- Arrays improve code readability and maintainability.

#### **Q9.3 Write a statement to declare and instantiate an array to hold marks obtained by students in different subjects.**
Assume there are 60 students in a class, and each student has 8 subjects.  

**Code:**
```java
int[][] marks = new int[60][8];
```

#### **Q9.4 Find errors, if any, in the following code segment:**
**Code given:**
```java
int m;
int x[ ] = int[10];
int[ ] y = int[11];
for(m=0; m<10; ++m)
    x[m] = y[m] = m;
x = y = new int[20];
for(m=0; m<10; ++m)
    System.out.println(x[m]);
```

**Errors and Fixes:**
1. `int x[] = int[10];` and `int[] y = int[11];` are invalid. Use `new int[size]` for array initialization.
   - Correct: `int x[] = new int[10];` and `int[] y = new int[11];`

2. `x = y = new int[20];` is invalid because array sizes cannot be changed after declaration.
   - Fix: Avoid reassigning arrays to new sizes without reinitialization.

**Correct Code:**
```java
int m;
int x[] = new int[10];
int[] y = new int[11];
for (m = 0; m < 10; ++m)
    x[m] = y[m] = m;
// x = y = new int[20]; // Invalid. Commented out.
for (m = 0; m < 10; ++m)
    System.out.println(x[m]);
```

#### **Q9.5 Write a program for fitting a straight line through a set of points.**
The equation is \( y = mx + c \), where:
\[ m = \frac{n \sum x_i y_i - (\sum x_i)(\sum y_i)}{n \sum x_i^2 - (\sum x_i)^2} \]
\[ c = \frac{\sum y_i - m \sum x_i}{n} \]

**Code:**
```java
import java.util.Scanner;

public class StraightLineFit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of points: ");
        int n = sc.nextInt();

        double[] x = new double[n];
        double[] y = new double[n];
        double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

        System.out.println("Enter the points (x y): ");
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextDouble();
            y[i] = sc.nextDouble();
            sumX += x[i];
            sumY += y[i];
            sumXY += x[i] * y[i];
            sumX2 += x[i] * x[i];
        }

        double m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
        double c = (sumY - m * sumX) / n;

        System.out.println("The line equation is: y = " + m + "x + " + c);
    }
}
```

---

### **Image: 9_2.jpg**

#### **Q9.6: Write a program to read the table elements into a two-dimensional array `temperature`, and find the day and city corresponding to:**
(a) The highest temperature  
(b) The lowest temperature  

**Code:**
```java
import java.util.Scanner;

public class TemperatureAnalysis {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int days = 31, cities = 10;
        double[][] temperature = new double[days][cities];
        double maxTemp = Double.MIN_VALUE, minTemp = Double.MAX_VALUE;
        int maxDay = 0, maxCity = 0, minDay = 0, minCity = 0;

        System.out.println("Enter temperatures for 31 days and 10 cities:");
        for (int i = 0; i < days; i++) {
            for (int j = 0; j < cities; j++) {
                temperature[i][j] = sc.nextDouble();
                if (temperature[i][j] > maxTemp) {
                    maxTemp = temperature[i][j];
                    maxDay = i + 1;
                    maxCity = j + 1;
                }
                if (temperature[i][j] < minTemp) {
                    minTemp = temperature[i][j];
                    minDay = i + 1;
                    minCity = j + 1;
                }
            }
        }

        System.out.println("Highest temperature: " + maxTemp + " on Day " + maxDay + " in City " + maxCity);
        System.out.println("Lowest temperature: " + minTemp + " on Day " + minDay + " in City " + minCity);
    }
}
```

---

#### **Q9.7: Write a program to read ballots and count votes cast for each candidate using an array variable.**
- Assume candidates are numbered from 1 to 5.
- Treat invalid votes (numbers outside the range 1 to 5) as "spoiled ballots."

**Code:**
```java
import java.util.Scanner;

public class VotingSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of votes: ");
        int totalVotes = sc.nextInt();

        int[] votes = new int[6]; // Index 1-5 for candidates, index 0 for spoiled ballots

        System.out.println("Enter votes (candidate numbers 1 to 5):");
        for (int i = 0; i < totalVotes; i++) {
            int vote = sc.nextInt();
            if (vote >= 1 && vote <= 5) {
                votes[vote]++;
            } else {
                votes[0]++; // Spoiled ballot
            }
        }

        System.out.println("Vote count:");
        for (int i = 1; i <= 5; i++) {
            System.out.println("Candidate " + i + ": " + votes[i]);
        }
        System.out.println("Spoiled ballots: " + votes[0]);
    }
}
```

---

#### **Q9.8: Write a program to read exam results of 100 students (3 subjects each) and determine:**
(a) Total marks obtained by each student  
(b) The highest marks in each subject and the roll number of the student who secured it  
(c) The student who obtained the highest total marks  

**Code:**
```java
import java.util.Scanner;

public class ExamResults {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int students = 100, subjects = 3;
        int[][] marks = new int[students][subjects];
        int[] totalMarks = new int[students];
        int[] highestSubjectMarks = new int[subjects];
        int[] highestSubjectRoll = new int[subjects];
        int highestTotal = 0, highestTotalRoll = 0;

        System.out.println("Enter marks for 100 students in 3 subjects:");
        for (int i = 0; i < students; i++) {
            int total = 0;
            for (int j = 0; j < subjects; j++) {
                marks[i][j] = sc.nextInt();
                total += marks[i][j];
                if (marks[i][j] > highestSubjectMarks[j]) {
                    highestSubjectMarks[j] = marks[i][j];
                    highestSubjectRoll[j] = i + 1;
                }
            }
            totalMarks[i] = total;
            if (total > highestTotal) {
                highestTotal = total;
                highestTotalRoll = i + 1;
            }
        }

        System.out.println("Total marks of each student:");
        for (int i = 0; i < students; i++) {
            System.out.println("Student " + (i + 1) + ": " + totalMarks[i]);
        }

        System.out.println("Highest marks in each subject:");
        for (int j = 0; j < subjects; j++) {
            System.out.println("Subject " + (j + 1) + ": " + highestSubjectMarks[j] + " by Student " + highestSubjectRoll[j]);
        }

        System.out.println("Student with the highest total marks: Student " + highestTotalRoll + " with " + highestTotal + " marks.");
    }
}
```

---

### **Answers to Questions in the Image**

#### **Q10.1: What is an interface?**
An **interface** in Java is a reference type that contains only abstract methods (methods without a body) and constants (static final variables). It is used to achieve abstraction and define a contract that implementing classes must adhere to. An interface can be thought of as a blueprint for a class.

Example:
```java
interface Vehicle {
    void start();
    void stop();
}
```

---

#### **Q10.2: How do we tell Java that the class we are creating implements a particular interface?**
In Java, we use the `implements` keyword to specify that a class implements an interface. The class must provide concrete implementations of all the abstract methods defined in the interface.

Example:
```java
class Car implements Vehicle {
    @Override
    public void start() {
        System.out.println("Car is starting.");
    }

    @Override
    public void stop() {
        System.out.println("Car is stopping.");
    }
}
```

---

#### **Q10.3: What is the major difference between an interface and a class?**
| **Aspect**           | **Interface**                                            | **Class**                                   |
|-----------------------|----------------------------------------------------------|--------------------------------------------|
| **Method Implementation** | Only abstract methods (default methods allowed in Java 8). | Can have concrete (implemented) methods.   |
| **Multiple Inheritance**  | Supports multiple inheritance.                        | Does not support multiple inheritance.     |
| **Variables**            | Only `public static final` (constants).                | Can have instance and static variables.    |
| **Inheritance**         | Use `implements` keyword to implement.                 | Use `extends` keyword for inheritance.     |

---

#### **Q10.4: What are the similarities between interfaces and classes?**
1. Both can be used as reference types.
2. Both can define methods, though interfaces only define abstract methods.
3. Both support inheritance mechanisms (`implements` for interfaces and `extends` for classes).
4. Both are used to create reusable code structures.

---

#### **Q10.5: Describe the various forms of implementing interfaces.**
1. **Single Interface Implementation**  
   A single class implements one interface.  
   Example:
   ```java
   interface Animal {
       void eat();
   }

   class Dog implements Animal {
       @Override
       public void eat() {
           System.out.println("Dog is eating.");
       }
   }
   ```

2. **Multiple Interface Implementation**  
   A class can implement multiple interfaces.  
   Example:
   ```java
   interface Flyable {
       void fly();
   }

   interface Swimmable {
       void swim();
   }

   class Duck implements Flyable, Swimmable {
       @Override
       public void fly() {
           System.out.println("Duck is flying.");
       }

       @Override
       public void swim() {
           System.out.println("Duck is swimming.");
       }
   }
   ```

3. **Interface Inheritance**  
   An interface can extend another interface.  
   Example:
   ```java
   interface Animal {
       void eat();
   }

   interface Mammal extends Animal {
       void walk();
   }

   class Human implements Mammal {
       @Override
       public void eat() {
           System.out.println("Human is eating.");
       }

       @Override
       public void walk() {
           System.out.println("Human is walking.");
       }
   }
   ```

---

#### **Q10.6: Given an example where an interface can be used to support multiple inheritance.**
In Java, multiple inheritance can be achieved using interfaces. A class can implement multiple interfaces to inherit their behavior.

**Code Example:**
```java
interface Printable {
    void print();
}

interface Showable {
    void show();
}

class Document implements Printable, Showable {
    @Override
    public void print() {
        System.out.println("Printing the document.");
    }

    @Override
    public void show() {
        System.out.println("Showing the document.");
    }
}

public class MultipleInheritanceExample {
    public static void main(String[] args) {
        Document doc = new Document();
        doc.print();
        doc.show();
    }
}
```

In this example, the `Document` class inherits behavior from both `Printable` and `Showable` interfaces, demonstrating multiple inheritance.

---

