# Chapter 10: Computer Arithmetic  
**(Computer System Architecture by M. Morris Mano)**  

This chapter focuses on arithmetic operations and their implementation in digital computers. It covers the representation of numbers, algorithms for basic arithmetic operations, floating-point arithmetic, and hardware implementation of arithmetic units. Emphasis is given to the efficiency and accuracy of computations.

---

## **10.1 Introduction to Computer Arithmetic**

- **Computer Arithmetic** refers to performing arithmetic operations using digital logic circuits.
- Computers primarily handle two types of arithmetic:
  - **Fixed-Point Arithmetic**: Numbers are represented with a fixed number of digits.
  - **Floating-Point Arithmetic**: Numbers are represented in scientific notation for a wide range of values.

---

## **10.2 Number Representation**

### **Fixed-Point Representation**:
1. **Unsigned Numbers**:
   - Positive integers only.
   - Range: \( 0 \) to \( 2^n - 1 \), where \( n \) is the number of bits.

2. **Signed Numbers**:
   - Includes positive and negative integers.
   - Methods:
     1. **Sign-Magnitude**: The most significant bit (MSB) represents the sign.
     2. **1's Complement**: Invert all bits to represent the negative.
     3. **2's Complement**: Add 1 to the 1's complement of the number.
        - Most widely used due to simplicity in arithmetic operations.

3. **Arithmetic Range**:
   - \( -2^{n-1} \) to \( 2^{n-1} - 1 \) for 2's complement representation.

### **Floating-Point Representation**:
- Used for real numbers (fractional or very large/small).
- Format:  
  \[ (-1)^S \times M \times 2^E \]  
  Where:
  - \( S \): Sign bit.
  - \( M \): Mantissa or significand.
  - \( E \): Exponent.

---

## **10.3 Addition and Subtraction**

### **Binary Addition**:
- Four possible cases:
  - \( 0 + 0 = 0 \)
  - \( 0 + 1 = 1 \)
  - \( 1 + 0 = 1 \)
  - \( 1 + 1 = 10 \) (result is 0 with a carry of 1).

### **Binary Subtraction**:
- Performed using 2's complement.
  - Example:  
    To subtract \( A - B \), compute \( A + (-B) \).

### **Hardware Implementation**:
1. **Half Adder**:
   - Performs addition of two bits.
   - Outputs: Sum and Carry.

2. **Full Adder**:
   - Adds three bits (two inputs and a carry-in).
   - Used in multi-bit addition.

3. **Ripple Carry Adder**:
   - Cascades full adders for multi-bit addition.
   - Slower due to carry propagation.

4. **Carry-Lookahead Adder**:
   - Reduces delay by computing carries in advance.

---

## **10.4 Multiplication**

### **Unsigned Binary Multiplication**:
- Similar to decimal multiplication, involves successive shifts and additions.

### **Signed Binary Multiplication**:
- Uses 2's complement representation.
- Example Algorithm:
  - Booth's Algorithm optimizes signed multiplication by reducing the number of additions/subtractions.

### **Hardware Implementation**:
- **Array Multiplier**: Implements multiplication using an array of adders for partial products.
- **Sequential Multiplier**: Operates in steps to save hardware.

---

## **10.5 Division**

### **Unsigned Binary Division**:
- Similar to long division in decimal:
  1. Compare divisor with the dividend.
  2. Subtract if the divisor fits.
  3. Shift and repeat.

### **Signed Division**:
- Uses 2's complement for signed numbers.

### **Restoring Division**:
- Restores the original value of the remainder if subtraction overshoots.

### **Non-Restoring Division**:
- Avoids restoring the remainder, speeding up the process.

### **Hardware Implementation**:
- Sequential circuits with subtractors and shift registers.

---

## **10.6 Floating-Point Arithmetic**

### **IEEE 754 Standard**:
1. **Single Precision** (32-bit):
   - 1-bit sign, 8-bit exponent, 23-bit mantissa.
2. **Double Precision** (64-bit):
   - 1-bit sign, 11-bit exponent, 52-bit mantissa.

### **Operations**:
1. **Addition and Subtraction**:
   - Align exponents by shifting mantissas.
   - Perform operation and normalize the result.

2. **Multiplication**:
   - Add exponents, multiply mantissas, and normalize.

3. **Division**:
   - Subtract exponents, divide mantissas, and normalize.

### **Precision and Rounding**:
- Rounding methods include truncation, rounding to nearest, and round up/down.

---

## **10.7 Arithmetic Logic Unit (ALU)**

### **Definition**:
- The ALU is the hardware unit that performs arithmetic and logical operations.

### **Functions**:
1. **Arithmetic Operations**:
   - Addition, subtraction, multiplication, and division.
2. **Logical Operations**:
   - AND, OR, XOR, NOT, and shifts.
3. **Comparison**:
   - Equality, greater-than, less-than checks.

### **Design**:
- Uses multiplexers, adders, and shifters for versatile operations.

---

## **10.8 High-Speed Arithmetic**

### **Techniques**:
1. **Carry-Lookahead**:
   - Reduces delay in multi-bit addition.
2. **Carry-Save Adders**:
   - Speeds up addition in multiplication and division.
3. **Wallace Tree Multipliers**:
   - Reduces the number of sequential additions in multiplication.

### **Pipelining in Arithmetic Units**:
- Breaks operations into stages for parallel processing, enhancing throughput.

---

## **10.9 Error Detection and Correction**

### **Error Types**:
- **Overflow**: Result exceeds representable range.
- **Underflow**: Result is too small to represent.

### **Techniques**:
1. **Parity Bit**:
   - Adds a bit to detect single-bit errors.
2. **Hamming Code**:
   - Corrects single-bit errors and detects double-bit errors.

---

## **Key Takeaways**:
1. Arithmetic operations are fundamental to computer systems, with efficient algorithms and hardware implementations playing a critical role.
2. Floating-point arithmetic extends the range of representable values but requires careful handling of precision and rounding.
3. High-speed techniques like carry-lookahead and pipelining are essential for modern processors.
4. Error detection and correction ensure reliability in arithmetic computations.

---

This detailed summary provides an exhaustive view of the topics covered in Chapter 10. Let me know if you need further clarification or additional details!
 