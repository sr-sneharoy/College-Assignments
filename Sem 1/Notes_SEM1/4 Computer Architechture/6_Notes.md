# Chapter 6: Programming the Basic Computer  
**(Computer System Architecture by M. Morris Mano)**  

This chapter elaborates on how to program the Basic Computer, detailing machine and assembly language, addressing modes, subroutine usage, and debugging. It also provides examples of writing efficient programs.

---

## **6.1 Machine Language**
### Definition:
Machine language is a binary-coded set of instructions that the computer hardware can execute directly. Each instruction in machine language is represented as a combination of opcode and address field.

### **Instruction Structure**:
1. **Opcode**:
   - Specifies the operation to be performed.
   - Examples: `ADD`, `LDA`, `STA`.

2. **Address Field**:
   - Specifies where the data or operand is located in memory or other sources.
   - Can refer to registers, memory addresses, or I/O ports.

### **Types of Instructions**:
1. **Memory-Reference Instructions (MRI)**:
   - Instructions involving data stored in memory.
   - Examples:
     - **AND**: Logical AND operation.
     - **ADD**: Adds a memory operand to the accumulator.
     - **LDA**: Loads data from memory into the accumulator.
     - **STA**: Stores the accumulator’s value into memory.
     - **BUN**: Branch Unconditionally to a new memory location.
     - **BSA**: Branch and Save Return Address for subroutine calls.
     - **ISZ**: Increment memory value and skip the next instruction if zero.

2. **Register-Reference Instructions (RRI)**:
   - Perform operations directly on the processor's registers without accessing memory.
   - Examples:
     - **CLA**: Clears the accumulator.
     - **CMA**: Complements the accumulator.
     - **INC**: Increments the accumulator by one.
     - **SPA**: Skips the next instruction if the accumulator is positive.

3. **Input-Output Instructions (IOI)**:
   - Facilitate communication with peripheral devices.
   - Examples:
     - **INP**: Reads input from an external device into the accumulator.
     - **OUT**: Sends data from the accumulator to an output device.
     - **HLT**: Halts the processor operation.

---

## **6.2 Assembly Language**

### Definition:
Assembly language is a low-level symbolic language that uses mnemonics for instructions and labels for memory locations. It bridges human readability and machine-level execution.

### **Key Features**:
- **Mnemonics**:
  - Simplified codes representing machine instructions (e.g., `ADD` for addition, `LDA` for load accumulator).
  
- **Labels**:
  - Symbolic names used to represent memory addresses, enhancing program clarity and maintainability.

- **Pseudo-Instructions**:
  - Instructions used for program control but not executed by the hardware.
  - Examples:
    - `ORG` (Origin): Sets the starting address of the program.
    - `END`: Marks the end of the assembly program.

### **Assembler**:
- A software tool that converts assembly language instructions into machine language.
- Handles symbolic labels, pseudo-instructions, and memory allocation.

---

## **6.3 Programming the Basic Computer**

Programming the Basic Computer requires writing sequential instructions to perform specific tasks. Programs utilize loops, branching, subroutines, and I/O handling.

### **Key Programming Constructs**:
1. **Loops**:
   - Repeated execution of a set of instructions.
   - Example:
     - Use `ISZ` (Increment and Skip if Zero) to create a decrementing loop until a condition is met.

2. **Conditional Branching**:
   - Allows decisions to control program flow.
   - Examples:
     - `BUN` for unconditional jumps.
     - `ISZ` for conditional skips.

3. **Subroutines**:
   - Small reusable code segments for specific tasks.
   - Example:
     - Use `BSA` (Branch and Save Return Address) to call a subroutine and return using `BUN`.

4. **Input/Output Handling**:
   - Direct communication with external devices.
   - Use `INP` to read and `OUT` to send data.

---

## **6.4 Examples of Programs**

### **Example 1: Adding Two Numbers**
#### Objective:
Add two numbers stored in memory and store the result.

#### Steps:
1. Use `LDA` to load the first number into the accumulator.
2. Use `ADD` to add the second number.
3. Use `STA` to store the result in memory.

---

### **Example 2: Summation of Numbers**
#### Objective:
Calculate the sum of a series of numbers stored in consecutive memory locations.

#### Steps:
1. Use a loop to load each number into the accumulator using `LDA`.
2. Add the number to the running total using `ADD`.
3. Increment the memory pointer and continue until all numbers are processed.
4. Use `ISZ` to check the loop condition.

---

### **Example 3: Multiplication Using Repeated Addition**
#### Objective:
Multiply two numbers by adding one number repeatedly.

#### Steps:
1. Initialize the result to zero in the accumulator.
2. Use a loop to add one number to the accumulator.
3. Decrement a counter to keep track of the number of additions.
4. Exit the loop when the counter reaches zero.

---

## **6.5 Input-Output Programming**

### Definition:
Programming that allows communication between the computer and external devices, such as keyboards, displays, and printers.

### **Key Instructions**:
1. **Input**:
   - `INP`: Reads data from an input device into the accumulator.

2. **Output**:
   - `OUT`: Sends data from the accumulator to an output device.

3. **Interrupts**:
   - Handle asynchronous events, like external I/O requests.

---

## **6.6 Addressing Modes**

### Definition:
Addressing modes specify how operands are accessed during instruction execution.

### **Types**:
1. **Direct Addressing**:
   - The address field specifies the memory location of the operand.
   - Example: `ADD 100`.

2. **Indirect Addressing**:
   - The address field points to a location that contains the operand's address.
   - Example: `ADD @200`.

---

## **6.7 Symbolic Programming**

### Definition:
Symbolic programming uses labels, symbols, and mnemonics to make programs easier to write and understand.

### Features:
- **Labels**: Represent memory locations.
- **Constants**: Define fixed values.
- **Comments**: Provide explanations within the program for better understanding.

---

## **6.8 Debugging and Testing**

### Debugging:
- The process of identifying and correcting errors in a program.

### Testing:
- Verifying that the program behaves correctly under all conditions.

#### **Common Techniques**:
1. **Simulation**:
   - Use software tools to execute the program virtually.

2. **Step-by-Step Execution**:
   - Manually trace each instruction to verify register and memory states.

---

## **Key Takeaways**
1. The Basic Computer’s instruction set provides flexibility for programming.
2. Techniques like loops, branching, subroutines, and addressing modes are crucial for effective programming.
3. Input-output programming and debugging ensure robust software-hardware interaction.
