//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Bitwise Operators

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Bitwise Operations"<<endl;
    cout << "Enter the number1:";
    cin >> a;
    cout << "Enter the number2:";
    cin >> b;
    cout << "AND:"<< (a & b)<< endl;
    cout << "OR:" << (a|b)<< endl;
    cout << "NOT:" << (~a)<< endl;
    cout << "XOR:" << (a^b)<< endl;
    cout << "Left Shift:" << (a<<1)<< endl;
    cout << "Right Shift:" << (a>>2)<< endl;

    return 0;
}


/*Output:
Bitwise Operations
Enter the number1:1
Enter the number2:2
AND:0
OR:3
NOT:-2
XOR:3
Left Shift:2
Right Shift:0*/
