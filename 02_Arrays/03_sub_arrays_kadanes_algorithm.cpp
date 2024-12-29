#include <iostream>
using namespace std;

int kadaneAlgo(int arr[], int sz) {
    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < sz; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {

    //! Maximum Sub-Array Sum:

    // int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};

    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //        for (int i = st; i <= end; i++)
    //        {
    //             cout << arr[i]; 
    //        }
    //        cout << " ";
    //     }
    //     cout << endl;
    // }


    //! Maximum Sub-Array Sum Brute Force Approach:
    // int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};

    // int maxSum = INT_MIN;

    // for (int st = 0; st < n; st++)
    // {   
    //     int currSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }

    // cout << "max subarray sum = " << maxSum << endl;



    //! Kadane's Algorithm for finding Max Sub Array Sum:
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    int maxSum = kadaneAlgo(arr, n);
    cout << "Maximum Subarray Sum: " << maxSum << endl;





    return 0;
}