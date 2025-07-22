/* Name - Mayank Yadav
   PRN - 24070123060
   ENTC A3 */
#include <iostream>
using namespace std;

int main() {
    int a = 24;
    int bit_to_be_set;
    int bit_to_be_reset;
    int set,reset;
   
    cout << "Enter the bit position to be set:";
    cin >> bit_to_be_set;
    set = a|(1<<bit_to_be_set);
   
    cout << "Enter the bit position to be reset:";
    cin >> bit_to_be_reset;
    reset = a&(~(1<<bit_to_be_reset));
    cout << "Your number after set:"<<set<<endl;
    cout << "Your number after reset:"<<reset<<endl;


    return 0;
}



/* OUTPUT 
Enter the bit position to be set:5
Enter the bit position to be reset:7
Your number after set:56
Your number after reset:24 */
