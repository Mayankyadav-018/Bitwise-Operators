# EXPERIMENT NO. 4

* Aim: To study and implement bitwise operators in C++ and understand how binary-level operations are performed.

* Tools used : IDE, Bitwise operators, arithmetic operators.
  
* Theory: Bitwise operators in C++ are used to perform operations on individual bits of integer data. These operators are particularly useful in low-level programming, optimization tasks, cryptography, hardware interfacing, and situations requiring direct binary manipulation. Bitwise operations are faster and more efficient compared to arithmetic operations, especially in system-level programming.

🔹 Bitwise Operators in C++ – Theory (Definition Style):

1. *& (Bitwise AND)*:
Performs a logical AND operation on each bit of the two operands. The result bit is 1 only if both corresponding bits are 1.
🔸 Example: c = a & b;

2. *| (Bitwise OR)*:
Performs a logical OR operation on each bit of the operands. The result bit is 1 if at least one of the corresponding bits is 1.
🔸 Example: c = a | b;

3. *^ (Bitwise XOR)*:
Performs a logical XOR (exclusive OR). The result bit is 1 only if the corresponding bits of the operands are different.
🔸 Example: c = a ^ b;

4. *~ (Bitwise NOT)*:
Performs a bitwise complement (1's complement), flipping each bit of the operand (i.e., 0 becomes 1, and 1 becomes 0).
🔸 Example: c = ~a;

5. *<< (Left Shift)*:
Shifts the bits of the operand to the left by the specified number of positions. Each left shift multiplies the number by 2.
🔸 Example: c = a << 1;

6. *>> (Right Shift)*:
Shifts the bits of the operand to the right by the specified number of positions. Each right shift divides the number by 2.
🔸 Example: c = a >> 2;



# Use of bitwise operators:

This C++ program demonstrates the use of bitwise operators such as AND, OR, NOT, XOR, left shift, and right shift using two predefined integers. It calculates and displays the result of each operation, helping students understand how data is manipulated at the binary level.



Algorithm: Set and Reset Specific Bits in an Integer
Start

Declare and initialize an integer variable:
2.1 a = 24

Declare variables:
3.1 bit_to_be_set (to store bit position to be set)
3.2 bit_to_be_reset (to store bit position to be reset)
3.3 set (to store result after setting bit)
3.4 reset (to store result after resetting bit)

Set a bit:
4.1 Prompt the user to enter the bit position to be set and store it in bit_to_be_set.
4.2 Compute: set = a | (1 << bit_to_be_set)

Reset a bit:
5.1 Prompt the user to enter the bit position to be reset and store it in bit_to_be_reset.
5.2 Compute: reset = a & (~(1 << bit_to_be_reset))

Display the results:
6.1 Print set as the number after setting the bit
6.2 Print reset as the number after resetting the bit

End



Conclusion:
In this experiment, we studied various bitwise operators in C++ such as AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>). We learned how these operators work at the binary level and how they manipulate individual bits of integers. By writing and executing simple programs, we understood their practical usage and importance in low-level programming and optimization. This experiment helped us strengthen our understanding of binary operations in C++.


