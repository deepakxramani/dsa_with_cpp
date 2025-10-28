#include <iostream>
using namespace std;

int main(){
    int age;
    char grade = 'A';       // ascii of 'A' => 65
    float PI = 3.14f;       // 'f' for defining that its a float not double
    bool isSafe = true;     // will store true = 1, false = 0 in background!
    double price  = 100.99;

    int value = grade;

    int newPrice = (int)price;   // typecasting => Big data type to Small

    //cout<<newPrice;

    //cout<<"Enter Age: ";
    //cin>>age;               // input data using 'cin'       // 'cin' and 'cout' are global objects
    //cout<<"your age is: "<<age;


    //! OPERATORS

    //* Arithmetic

    int a = 10, b = 5, c = 11;
    int sum = a + b;
    //cout<<sum;
    cout<<"sum = "<<(a+b) << endl;
    cout<<"difference = "<<(b-a) << endl;
    cout<<"product = "<<(a*b) << endl;
    cout<<"division = "<<(a/b) << endl; // 2
    cout<<"modulo = "<<(c % b) << endl; // 1

    // type cast
    // cout<<(5 / (double)2)<<endl;     // output: 2.5

    int ans = (5 / (double)2);
    cout<< ans << endl;                 // output: 2


    //* Relational:

    cout<< (3 < 5) << endl;     // true -> 1
    cout<< (3 > 5) << endl;     // false -> 0
    cout<< (3 <= 3) << endl;     // true -> 1
    cout<< (3 >= 3) << endl;     // true -> 1
    cout<< (3 == 3) << endl;     // true -> 1
    cout<< (3 != 3) << endl;     // false -> 0
    cout<< (3 != 5) << endl;     // true -> 1


    //* Logical

    //! NOT
    cout<< !(3 > 1) << endl;    // false -> 0


    //! OR
    cout<<( (3 > 1) || (3 < 1) ) << endl;    // true -> 1


    // &&
    cout<<( (3 > 1) && (3 < 1) ) << endl;    // false -> 0



    //* Unary Operator

    //? i++ (Post Increment Operator)
    //int z = a++;                            // first kaam; then update
    //cout << "z = " << z << endl; // 10      // this will get (a's) previous value
    //cout << "a = " << a << endl; // 11      // then update the value


    //? ++i (Pre Increment Operator)
    //int z = ++a;                            // first update; then kaam
    //cout << "z = " << z << endl; // 11      // this will get (a's) updated value
    //cout << "a = " << a << endl; // 11      // here also updated value


    //? --i (Post Deccrement Operator)
    //int z = a--;                           // first kaam; then update
    //cout << "z = " << z << endl; // 10     // this will get (a's) previous value which is = 10
    //cout << "a = " << a << endl; // 9      // then we get (a's) updated value which is now = 9


    //? --i (Pre Decrement Operator)
    int z = --a;                           // first update; then kaam
    cout << "z = " << z << endl; // 9      // this will get (a's) updated value
    cout << "a = " << a << endl; // 9      // here also updated value

    return 0;
}

