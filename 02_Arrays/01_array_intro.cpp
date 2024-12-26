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


//! Homework:

//! Ques1: WAF to calculate Sum and Product of all numbers in an array.

void sumAndProductOfArray(int arr[], int sz) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < sz ; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}


//! Ques2: WAF to swap the Max and Min number of an array.

void swapMaxMin(int arr[], int size) {
    if (size < 2) return; // No swapping needed for arrays with less than 2 elements

    int maxIndex = 0, minIndex = 0;

    // Find the indices of the max and min elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the max and min elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

//! Ques3: WAF to print all the unique elements of an array.
void printUnique(int arr[], int size) {
    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if the current element is a duplicate
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break; // No need to check further
            }
        }

        // Print the element if it's unique
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


//! Ques4: WAF to print intersection of 2 arrays.

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection of the arrays: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            // If element is found in both arrays
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN; // Mark as visited to avoid duplicate intersections
                break; // Move to the next element of arr1
            }
        }
    }
    cout << endl;
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


    //! Ques1: Find smallest/largest in array with index of it.

        // int nums[] = {15, 5, 22, 1, -15, 24};
        // int size = 6;

        // int smallest = INT_MAX;
        // int largest = INT_MIN;
        // int smallestIndex = -1; // To store the index of the smallest value
        // int largestIndex = -1;  // To store the index of the largest value

        // for (int i = 0; i < size; i++)
        // {
        //     if(nums[i] < smallest) {
        //         smallest = nums[i];
        //         smallestIndex = i; // Update the index of the smallest value
        //     }

        //     if(nums[i] > largest){
        //         largest = nums[i];
        //         largestIndex = i; // Update the index of the largest value

        //     }
        //     // OR
        //     // smallest = min(nums[i], smallest);
        //     // largest = min(nums[i], largest);
        // }
        // cout << "Smallest = " << smallest << " at index " << smallestIndex << endl;
        // cout << "Largest = " << largest << " at index " << largestIndex << endl;


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
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int sz = 7;

    // reverseArray(arr, sz);

    // // printing array after reverse
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    //! Homework:    
    //! Ques1: WAF to calculate Sum and Product of all numbers in an array.

    // int arr[] = {5, 8, 10, 3, 7, 2, 8};
    // int size = sizeof(arr) / sizeof(int);
    
    // sumAndProductOfArray(arr, size);


    //! Ques2: WAF to swap the Max and Min number of an array.

    // int numbers[] = {3, 5, 1, 9, 7};
    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // cout << "Original array: ";
    // for (int i = 0; i < size; i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;

    // swapMaxMin(numbers, size);

    // cout << "Array after swapping max and min: ";
    // for (int i = 0; i < size; i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;



    //! Ques3: WAF to print all the unique elements of an array.

    // int numbers[] = {4, 5, 6, 7, 4, 5, 8, 1, 2, 1};
    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // printUnique(numbers, size);


        
    //! Ques4: WAF to print intersection of 2 arrays.

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, size1, arr2, size2);


    return 0;

}