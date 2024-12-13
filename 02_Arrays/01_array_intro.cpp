#include <iostream>
using namespace std;

//* Pass by reference:
// void changeArr(int arr[], int size) {
//     cout<<"in function\n";
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2 * arr[i];
//     }
// }


//& Linear Search Algorithm

    // int linearSearch(int arr[], int sz, int target) {
    //     for (int i = 0; i < sz; i++)
    //     {
    //         if(arr[i] == target ) { //FOUND
    //             return i;
    //         }
    //     }
    //     return -1;
    // }


//& Reverse an Array

void reverseArray(int arr[], int sz) {
    int start = 0,  end = sz - 1;

    while (start < end) 
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}



int main() {
    // int marks[100];     // array of size 100

    // int marks[5] = {99, 45, 78, 90, 45};      // array of size 100 with initialization of 5 values

    // double price[] = {99.99, 105.67, 30.00};    // will automatically create the array of size 3.

    //* Accessing values:

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    //* Manipulating Values:

    // marks[0] = 50;
    // cout << marks[0] << endl;

    // 0 to size - 1
    // cout << marks[5] << endl;   // will throw an error
    

    //* Loops on Arrays

    // int sz = sizeof(marks);
    // cout << "Size of marks array in bytes: " << sz << endl;      // 4bytes * 5 (size_of_array) = 20 bytes
    
    // cout << "Size of marks array in places: " << sizeof(marks) / sizeof(int) << endl;      // size of array in terms of places


    //* Or you can define size explicitely:
    // int size = 5;

    //* Reading data using loops
    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    //* Taking inputs for arrays using loops

    // int marks[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }


    //! Ques1: Find smallest/largest in array.

        // int nums[] = {15, 5, 22, 1, -15, 24};
        // int size = 6;

        // int smallest = INT_MAX;
        // int largest = INT_MIN;

        // for (int i = 0; i < size; i++)
        // {
        //     if(nums[i] < smallest) {
        //         smallest = nums[i];
        //     }

        //     if(nums[i] > largest){
        //         largest = nums[i];
        //     }
        //     // OR
        //     // smallest = min(nums[i], smallest);
        //     // largest = min(nums[i], largest);
        // }
            // cout << "Smallest = " << smallest << endl;
            // cout << "Largest = " << largest << endl;



    //* Pass by reference:

    // int arr[] = {1, 2, 3};
    
    // changeArr(arr, 3);
    
    // cout<<"in main\n";
    // for (int i = 0; i < 3; i++)     // changed to 2 4 6
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    //& Linear Search Algorithm

    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int sz = 7;
    // int target = 50;

    // cout << linearSearch(arr, sz, target) << endl;


    //& Reverse an Array
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArray(arr, sz);

    // printing array after reverse
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}