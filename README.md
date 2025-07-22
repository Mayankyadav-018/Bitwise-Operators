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

1> Start

2> Declare and initialize two integer variables: a, b.

3> Perform bitwise operations:

  * bitwise_and = a & b

  * bitwise_or = a | b

  * bitwise_not = ~a

  * bitwise_xor = a ^ b

  * left_shift = a << 2

  * right_shift = a >> 1

4> Display the results of each operation using cout

5> End


# Set and Reset Specific Bit position in an integer




Conclusion:
In this experiment, we studied various bitwise operators in C++ such as AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>). We learned how these operators work at the binary level and how they manipulate individual bits of integers. By writing and executing simple programs, we understood their practical usage and importance in low-level programming and optimization. This experiment helped us strengthen our understanding of binary operations in C++.


