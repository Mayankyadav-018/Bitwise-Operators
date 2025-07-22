/* Name - Mayank Yadav
   PRN - 24070123060
   ENTC A3 */
#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 4;
    int bitwise_and = a&b;
    int bitwise_or = a|b;
    int bitwise_not = ~a;
    int bitwise_xor = a^b;
    int left_shift = a<<2;
    int right_shift = a>>1;
   
    cout << "AND:" << bitwise_and << endl;
    cout << "OR:" << bitwise_or << endl;
    cout << "NOT:" << bitwise_not << endl;
    cout << "XOR:" << bitwise_xor << endl;
    cout << "Left Shift:" << left_shift << endl;
    cout << "Right Shift:" << right_shift << endl;


    return 0;
}


/* OUTPUT 
AND:4
OR:7
NOT:-8
XOR:3
Left Shift:28
Right Shift:3 */
