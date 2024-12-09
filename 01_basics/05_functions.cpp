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

    //  int sumOfDigits(int num) {
    //     int digitSum = 0;

    //     while (num > 0)
    //     {
    //         int lastDig = num % 10;
    //         num /= 10;

    //         digitSum += lastDig;
    //     }
    //     return digitSum;
    // }


     //! Ques4: C++ program to calculate nCr (binomial coefficient):

  // Function to calculate factorial
  //   long long factorial(int n) {
  //     long long result = 1;
  //     for (int i = 1; i <= n; i++) {
  //         result *= i;
  //     }
  //     return result;
  // }

  // // Function to calculate nCr
  //   long long nCr(int n, int r) {
  //       if (r > n || n < 0 || r < 0)
  //           return 0; // Invalid case
  //       return factorial(n) / (factorial(r) * factorial(n - r));
  // }


    //! Ques5: Write a function to check if a number is prime or not
//     bool isPrime(int num) {
//     if (num <= 1)
//         return false; // 0 and 1 are not prime numbers
//     if (num <= 3)
//         return true;  // 2 and 3 are prime numbers
//     if (num % 2 == 0 || num % 3 == 0)
//         return false; // Exclude multiples of 2 and 3

//     // Check for factors from 5 to √num
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }



  //! Ques6: Write a function to print all prime numbers from 2 to N.
//   bool isPrime(int num) {
//     if (num <= 1)
//         return false; // 0 and 1 are not prime numbers
//     if (num <= 3)
//         return true;  // 2 and 3 are prime numbers
//     if (num % 2 == 0 || num % 3 == 0)
//         return false; // Exclude multiples of 2 and 3

//     // Check for factors from 5 to √num
//     for (int i = 5; i * i <= num; i += 6) {
//         if (num % i == 0 || num % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }

// // Function to print all prime numbers from 2 to N
// void printPrimes(int N) {
//     for (int i = 2; i <= N; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }


  //! Ques7: Write a function to print nth Fibonacci Series.

  // Function to print the nth Fibonacci number
long long fibonacci(int n) {
    if (n <= 1)
        return n;  // Base cases: fibonacci(0) = 0, fibonacci(1) = 1

    long long a = 0, b = 1, c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b;  // Calculate the next Fibonacci number
        a = b;      // Move to the next term in the sequence
        b = c;      // Update b to the new value
    }
    return b;
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
    // cout << "sum = " << sumOfDigits(2356) << endl;

    //! Ques4: C++ program to calculate nCr (binomial coefficient):
    // int n, r;
    // cout << "Enter n: ";
    // cin >> n;
    // cout << "Enter r: ";
    // cin >> r;

    // long long result = nCr(n, r);
    // cout << "The value of " << n << "C" << r << " is " << result << endl;


    //! Ques5: Write a function to check if a number is prime or not

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // if (isPrime(n))
    //     cout << n << " is a prime number." << endl;
    // else
    //     cout << n << " is not a prime number." << endl;

    // return 0;



    //! Ques6: Write a function to print all prime numbers from 2 to N.

    // int N;
    // cout << "Enter N: ";
    // cin >> N;

    // cout << "Prime numbers from 2 to " << N << " are: ";
    // printPrimes(N);

    // return 0;


    //! Ques7: Write a function to print nth Fibonacci Series.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;



   


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