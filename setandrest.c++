//Name:prabhat
//PRN:23070123040
//Aim:Implemention of Bitwise Operators Set and Reset

#include <iostream>
using namespace std;

int main() { 
    int a,i,set,reset;
    cout << "Enter the number";
    cin >> a;
    cout << "Enter the places to shift";
    cin >> i;
    set = a|(1<<i);
    reset = a&(~(1<<i));
    cout << reset<< endl;
    cout << set;
    
    return 0;
} 


/*Output:
Enter the number1
Enter the places to shift1
1
3*/
