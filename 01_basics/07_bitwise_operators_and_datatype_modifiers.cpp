#include <iostream>
using namespace std;

// int x = 10;

// void fun() {
//     // int x = 10;
//     cout << x << endl;
// }

//! Quest 1: Figure out if a number is power of 2. (With loop)

//  int isPowerOfTwo(int n) {
//   if (n <= 0) return false;
//   while (n > 1) {
//     if (n % 2 != 0) return false;
//     n = n / 2;
//   }
//   return true;
// }

//! Quest 2: Figure out if a number is power of 2. (Without loop)
// bool isPowerOfTwo(int n) {
//     return n > 0 && (n & (n - 1)) == 0;
// }


//! Quest 3: Figure out if a number is power of 2. (With Right shit operator)

bool isPowerOfTwo(int n) {
    if (n <= 0) return false; // Only positive numbers can be powers of 2
    while (n > 1) {
        if (n & 1) // Check if the last bit is 1 (indicating odd number)
            return false;
        n = n >> 1; // Right shift to divide by 2
    }
    return true; // If it reduces to 1, it's a power of 2
}


//! Quest 4: Write a function to reverse an Integer N (Part 1)

//     void reverseInteger(int n) {
//     if (n == 0) {
//         cout << 0 << endl; // Handle the case when n is 0
//         return;
//     }

//     if (n < 0) { // Handle negative numbers
//         cout << "-";
//         n = -n;
//     }

//     while (n > 0) {
//         cout << (n % 10); // Print the last digit
//         n /= 10;          // Remove the last digit
//     }

//     cout << endl; // End with a new line
// }
        

//! Quest 4: Write a function to reverse an Integer N (Part 2)


    void reverseInteger(int n) {
    int reversed = 0;
    
    if (n == 0) {
        cout << 0 << endl; // Handle the case when n is 0
        return;
    }
    
    bool isNegative = n < 0; // Check if the number is negative
    if (isNegative) {
        n = -n; // Make the number positive for processing
    }

    while (n > 0) {
        reversed = reversed * 10 + (n % 10); // Extract last digit and build the reversed number
        n /= 10; // Remove the last digit
    }

    if (isNegative) {
        reversed = -reversed; // Restore the negative sign if needed
    }

    cout << reversed << endl; // Print the reversed number
}
    


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

    // unsigned int x = 10;
    // unsigned int y = -10;

    // cout << x << endl;
    // cout << y << endl;


    //! Homework:
    
    //! Quest 1: Figure out if a number is power of 2. (With loop)

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (isPowerOfTwo(num))
    //     cout << num << " is a power of 2." << endl;
    // else
    //     cout << num << " is not a power of 2." << endl;


    //! Quest 2: Figure out if a number is power of 2. (Without loop)
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (isPowerOfTwo(num))
    //     cout << num << " is a power of 2." << endl;
    // else
    //     cout << num << " is not a power of 2." << endl;


    //! Quest 3: Figure out if a number is power of 2. (With Right Shift Operator)

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (isPowerOfTwo(num))
    //     cout << num << " is a power of 2." << endl;
    // else
    //     cout << num << " is not a power of 2." << endl;



    //! Quest 4: Write a function to reverse an Integer N (Part 1)

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    reverseInteger(num);

    return 0;

}