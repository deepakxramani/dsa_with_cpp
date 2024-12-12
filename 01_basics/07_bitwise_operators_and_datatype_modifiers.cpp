#include <iostream>
using namespace std;

// int x = 10;

// void fun() {
//     // int x = 10;
//     cout << x << endl;
// }

int main() {
    //! See Notes:- (Handwritten)
    // int a = 3, b = 7;

    // bitwise AND
    // cout<< (a & b) << endl;

    // bitwise OR
    // cout<< (a | b) << endl;

    // bitwise XOR
    // cout<< (a ^ b) << endl;

    // bitwise << Left shit operator Ex.1
    // cout<< (4 << 1) << endl;
    // bitwise << Left shit operator Ex.2
    // cout<< (10 << 2) << endl;

    // bitwise >> Right shit operator Ex.1
    // cout<< (10 >> 1) << endl;
    // bitwise >> Right shit operator Ex.2
    // cout<< (8 >> 2) << endl;


    //& Operator Precedence: (Check table for operator precedence in notes.)
    // cout<< (5 - 2 * 6) << endl;

    //& Want to override precedence ? use parantheses ()!
    // cout<< ( (5 - 2) * 6 ) << endl;

    //& Operation with same priority of operators - then Rule of Associativity will be followed (See Table):-
    // cout<< ( 4 * 5 % 2 ) << endl;



    //* Scopes:

    // if(3 > 1) {
    //     int x = 10;     // local scope
    // } else {
    //     int y = 20;
    // }

    // for (int i = 0; i < 10; i++)    // local scope
    // {
    //     int x = 10;                 // local scope
    // }

    // {
    //     int d = 10;
    // }

    // fun();
    // cout << x << y << endl;

    // fun();
    // cout << x << endl;



    //* Data Type Modifiers

    // cout << sizeof(int) << " Bytes" << endl;
    // cout << sizeof(long long int) << " Bytes" << endl;
    // cout << sizeof(short int) << " Bytes" << endl;

    // signed int x = -10;
    // signed int y = 10;

    unsigned int x = 10;
    unsigned int y = -10;

    cout << x << endl;
    cout << y << endl;


    return 0;
}