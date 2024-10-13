#include <iostream>
using namespace std;

// * Square Pattern  n=4    ( n = total no of lines) 
/* 
     Column
     1 2 3 4
Row  1 2 3 4
     1 2 3 4
     1 2 3 4

*/

int main(){
    //* 1. Numbers:

    //int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    //* 2. Stars:
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //* 3. ABCD:
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {   char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }



    //* 4.

    //*  1 2 3
    //*  4 5 6
    //*  7 8 9

    // int n = 3;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // cout << "After pattern: " << num << endl;



    
    //* 5.

    //*  A B C
    //*  D E F
    //*  G H I

    // int n = 3;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // cout << "After pattern: " << ch << endl;


    //* 6. Triangle Pattern:

    //*  *
    //*  * *
    //*  * * *

    // int n = 8;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    //* 7. Triangle Pattern (with number):

    //*  1
    //*  2 2
    //*  3 3 3
    //*  4 4 4 4

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }


    //* 8. Triangle Pattern (with alphabets):

    //*  A
    //*  B B
    //*  C C C
    //*  D D D D
    //*  E E E E E

    // int n = 5;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }



    //* 9. Triangle Pattern (with number):

    //*  1
    //*  1 2
    //*  1 2 3
    //*  1 2 3 4
    //*  1 2 3 4 5


    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i+1; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    //* 10. Reverse Triangle Pattern (with number):

    //*  1
    //*  2 1
    //*  3 2 1
    //*  4 3 2 1
    //*  5 4 3 2 1

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    //* 11. Reverse Triangle Pattern (with alphabets):

    //*  A
    //*  B A
    //*  C B A
    //*  D C B A

    // int n = 4; // Number of rows

    // for (int i = 0; i < n; i++) {
    //     char ch = 'A' + i; // Determine starting character for the row
    //     for (int j = 0; j <= i; j++) {
    //         cout << ch << " ";
    //         ch--; // Decrease the character to print the previous letter
    //     }
    //     cout << endl;
    // }



    //* 12. Floyd's Triangle Pattern (with numbers):

    //*  1
    //*  2 3
    //*  4 5 6
    //*  7 8 9 10

    // int n = 4;
    // int num = 1;        // When we don't want to repeat the number, we declare it outside of the loop.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    //* 13. Floyd's Triangle Pattern (with alphabets):

    //*  A
    //*  B C
    //*  D E F
    //*  G H I J

    // int n = 4;
    // char ch = 'A';        // When we don't want to repeat the number/alphabet, we declare it outside of the loop.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }



     //* 14. Inverted Triangle Pattern (Reverse Numbers):

    //*  1111
    //*   222
    //*    33
    //*     4

    // int n = 4;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }

    //     // nums
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }
    
    

    //* 15. Inverted Triangle Pattern (Reverse Characters):
    
    //*  AAAA
    //*   BBB
    //*    CC
    //*     D

    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }

    //     // nums
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }




    //* 16. Pyramid Pattern:
    
    //*         1 
    //*       1 2 1
    //*     1 2 3 2 1
    //*   1 2 3 4 3 2 1


    // int n = 8;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces: n-i-1
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
        

    //     // nums 1: i+1 (times)
    //     for (int j = 1; j<=i+1; j++)
    //     {
    //         cout<< j;
    //     }
        

    //     // nums 2: 
    //     for (int j = i; j >= 1 ; j--)
    //     {
    //         cout<<j;
    //     }

    //     cout<<endl;
        
    // }




    //* 17. Hollow Diamond Pattern:
    
    //*         *          
    //*      *      *       // Top
    //*   *           *         
    //* *               *
    //* - - - - - - - - - -
    //*   *            *
    //*      *     *        // Bottom
    //*         *


    int n = 4;

    // Top
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";

        if(i!=0) {
            // spaces
            for (int j = 0; j < 2*i-1; j++)
            {
                cout<<" ";
            }

            cout << "*";
        }
        cout<<endl;
    }

    // Bottom
    for (int i = 0; i < n-1; i++)       // 0 to n-2
    {
        // spaces
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        
        cout<<"*";

        if(i != n-2){
            //spaces
            for (int j = 0; j < 2*(n-i)-5; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
