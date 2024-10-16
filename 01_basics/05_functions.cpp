#include <iostream>
using namespace std;

//* Function definition
// int printHello() {
//     cout<<"hello\n";
//     return 3;
// }


 //* Parameters:


  // sum of two numbers
//   int sum(int a, int b) {
//         int s = a + b;
//         return s;
//   }

  // min of two nums
//   int minOfTwo(int a, int b) {
//     if(a < b) {
//         return a;
//     } else {
//         return b;
//     }
//   }


  //! Ques1:  Calculate sum of numbers from 1 to N
//   int sumN(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum+= i;
//     }
//     return sum;
    
//   }


  //! Ques2:  Calculate N factorial
//    int factorialN(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
    
//   }


  //* Pass by value --> copy of arguement is passed to function

//     int sum(int a, int b) {
//         a = a + 10;    // 15
//         b = b + 10;   // 14
//         return a+b;   // 29
//   }


//   void changeX(int x) {
//     x = 2*x;
//     cout << "x = " << x << endl;
//   }


    //! Ques3:  Calculate sum of digits of a number

     int sumOfDigits(int num) {
        int digitSum = 0;

        while (num > 0)
        {
            int lastDig = num % 10;
            num /= 10;

            digitSum += lastDig;
        }
        return digitSum;
    }



int main() {
    //* Function call / invoke
    //int val = printHello();
    //cout << "val = " << val <<endl;

    // or

    // cout << printHello() << endl;


    // int Sum = sum(10, 5);
    // cout << "sum = " << Sum <<endl;
    // cout << sum(40, 5) <<endl;


    // cout << "min = " << minOfTwo(5, 3) <<endl;  // arguement


    //! Ques1:  Calculate sum of numbers from 1 to N
    // cout << sumN(5) <<endl;
    // cout << sumN(10) <<endl;


    //! Ques2:  Calculate N factorial
    // cout << factorialN(4) <<endl;


    //! Ques3:  Calculate sum of digits of a number
    cout << "sum = " << sumOfDigits(2356) << endl;
   


    //* Pass by value --> copy of arguement is passed to function
    // int a = 5, b = 4;
    // cout << sum(a, b) <<endl ;
   
    // cout<< a << endl;
    // cout<< b << endl;

    // int x = 5;
    // changeX(x);
    // cout << "x = " << x << endl;



    //* Pass by reference --> we pass the original thing (this comes under pointers)


    return 0;
}