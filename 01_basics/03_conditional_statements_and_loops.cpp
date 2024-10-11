#include <iostream>
using namespace std;

int main() {
    //* if-else
    // int age;
    // cout<<"Enter Age: "<<endl;
    // cin>>age;

    // if(age>=18){
    //     cout<<"You are eligible for voting\n";
    // } else {
    //     cout<<"You are not eligible for voting\n";
    // }


    // Odd - Even
    // int n;
    // cout<<"Enter Number: "<<endl;
    // cin>>n;

    // if(n%2==0){
    //     cout<<"No is even\n";
    // } else {
    //     cout<<"No is odd\n";
    // }
    // return 0;


    // lowercase or Uppercase
    // char ch;
    // cout<<"Enter char: "<<endl;
    // cin>>ch;
    // if(ch>='a' && ch<='z') {
    //     cout<<"Lowercase\n";
    // } else {
    //     cout<<"Uppercase\n";
    // }
    // return 0;


     // lowercase or Uppercase using ASCII
    // char ch;
    // cout<<"Enter char: "<<endl;
    // cin>>ch;
    // if(ch>=65 && ch<=90) {
    //     cout<<"Uppercase\n";
    // } else {
    //     cout<<"Lowercase\n";
    // }
    

    //* else-if
    // int marks;
    // cout<<"Enter Marks: "<<endl;
    // cin>>marks;

    // if(marks>=90){
    //     cout<<"A\n";
    // } else if(marks>=80 && marks<90) {
    //     cout<<"B\n";
    // } else {
    //     cout<<"C\n";
    // }
    // return 0;

    //* Ternary Operator
    // int n = 45;
    // cout<<(n>=0 ? "Positive" : "Negative") <<endl;




    //? LOOPS

    //* while loop

    //! Ques1: Print 1 to 5 no.
    //int count = 1;

    // while (count<=5)
    // {
    //     cout<<count<<"\n";
    //     // count = count + 1
    //     // count += 1
    //     count++;
    // }

    //! Ques2: Print 1 to 'n'  numbers

    // int n;
    // int count = 1;
    // cout<<"Enter count: ";
    // cin>>n;
    // while (count<=n)
    // {
    //     cout<<count <<" ";
    //     // count = count + 1
    //     // count += 1
    //     count++;
    // }
    //! Note:- Avoid infinite loops

     //! Ques3: Sum of numbers from 1 to n.
    //  int n;
    //  int i = 1;
    //  int sum = 0;

    //  cout<<"Enter N: ";
    //  cin>>n;

    //  while (i<=n)
    //  {
    //      sum+=i;
    //      i++;
    //  }
    //  cout<<"Sum = "<<sum;


     //! Ques4: Sum of all Odd numbers from 1 to N.
    //   int n;
    //   int i = 1;
    //   int oddSum = 0;

    //   cout<<"Enter N: ";
    //   cin>>n;

    //   while (i<=n)
    //   {
    //       if(i%2 != 0)
    //       {
    //         oddSum+=i;
    //       }
    //       i++;
    //   }
    //   cout<<"Odd Sum = "<<oddSum;
    //   return 0;

    //* for loop
    // Syntax
    // for (initialization; condition; updation)
    // {
    //     /* Work */
    // }

    // int n = 10;
    // for(int i = 1; i <= n; i++)
    // {
    //     cout<< i <<" ";
    // }

    //! Ques1: Sum of numbers from 1 to n.
    // int n;
    // int i;
    // int sum = 0;

    // cout<<"Enter N: ";
    // cin>>n;
    
    // for (i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<"Sum: "<<sum;


    //* break Statement

    // int n;
    // int i;
    // int sum = 0;

    // cout<<"Enter N: ";
    // cin>>n;
    
    // for (i = 1; i <= n; i++)    // 1 + 2 + 3 + 4 + 5 => 15
    // {
    //     sum+=i;
    //     if(i==5){
    //         break;
    //     }
    // }
    // cout<<"Sum: "<<sum;



    //! Ques2: Sum of all Odd numbers from 1 to N.

    // int n;
    // int i;
    // int oddSum = 0;

    // cout<<"Enter N: ";
    // cin>>n;
    
    // for (i = 1; i <= n; i++) 
    // {
    //     if(i%2 != 0){
    //         oddSum+=i;
    //     }
    // }
    // cout<<"Odd Sum = "<<oddSum;


    //! Ques3: Sum of all Even numbers from 1 to N.
    // int n;
    // int i;
    // int evenSum = 0;

    // cout<<"Enter N: ";
    // cin>>n;
    
    // for (i = 1; i <= n; i++) 
    // {
    //     if(i%2 == 0){
    //         evenSum+=i;
    //     }
    // }
    // cout<<"Even Sum = "<<evenSum;
    // return 0;



    //* do while loop 
    // major difference is that it will atleast run one time for sure even if the condition is false.
    
    //! *while loop* mein condition pehle check hoti hai kaam baad mein hota hai
    //! *do while loop* mein kaam pehle hota hai condition baad mein check hoti hai

    //? example:

    // do
    // {
    //     cout<< "Hello World!\n";
    // } while (3 > 5);

    //! Ques1: Print no. 1 to N
    // int i = 1;
    // int n = 10;
    // do
    // {
    //     cout<< i <<" ";
    //     i++;
    // } while (i<=n);

    // cout<< endl;
    
    


    //! Ques: Check if number is prime or not

    // int n;
    // bool isPrime = true;

    // cout<<"Enter no to check if prime or not: ";
    // cin>>n;

    // for(int i=2; i<=n-1; i++){
    //     if(n%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout<<"Prime No";
    // } else {
    //     cout<<"Non Prime no";
    // }


    //! Ques: Check if number is prime or not ( Optimized )     // 2 to (n-1) -> X  // 2 to root(n) -> i*i <= n

    // int n;
    // bool isPrime = true;

    // cout<<"Enter no to check if prime or not: ";
    // cin>>n;

    // for(int i=2; i*i <= n; i++){
    //     if(n%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout<<"Prime No";
    // } else {
    //     cout<<"Non Prime no";
    // }



    //* Nested Loops => Loop inside loop
    // int x=10;
    // for(int i=1; i<=x; i++){
    //     cout<<"*";
    // }

    // int m = 10;
    // for(int i=1; i<=m; i++){
    //     cout<<"*";
    // }

    //? print 10 stars in 5 lines

     int n = 5;  // No. of lines
     for(int i=1; i<=n; i++){   // No. of Lines
        int m = 10;    // No. of stars
        for (int j = 1; j <= m; j++)
        {
            cout<<"*";    
        }
        cout<<endl;
        
     }




}