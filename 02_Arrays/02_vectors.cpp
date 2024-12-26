#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector<int> vec;    // by default size 0 as no element stored as of now.
    //cout<< vec[0];      // segmentation fault error as vector is empty currently.

    //vector<int> vec1 = {1, 2, 3};   //  vector of size 3
    //cout <<vec1[0] <<endl;
    
    
    // vector<int> vec (5, 0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;


    //! for each loop

    // vector<int> vec (5, 0);
    
    // for(int value: vec) {
    //     cout << value << endl;
    // }
    

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // for(char val: vec) {
    //     cout << val << endl;
    // }


    //* Vector Functions

    //& 1. size()
    // cout << "size = " << vec.size() << endl;


    //& 2. push_back()
    // vector<int> vec;

    // cout << "size = " << vec.size() << endl;

    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);

    // cout << "after push back size = " << vec.size() << endl;
    
    // for(int value: vec) {
    //     cout << "Value after push back = " << value << endl;
    // }


     //& 3. pop_back()    // delete from last index

    // // before pop back
    // for(int value: vec) {
    //     cout << "Value before pop back = " << value << endl;
    // }
    
    // vec.pop_back();    // 45

    // // after pop back
    // for(int value: vec) {
    //     cout << "Value after pop back = " << value << endl;
    // }



    //& 4. front()  - returns the first value

    // cout << vec.front() << endl;

    //& 5. back()  - returns the last value

    // cout << vec.back() << endl;

    
    
    //& 6. at()  - to get the value at the particular index
    //& vec[i]  OR  vec.at(i)

    // cout << vec[0] << endl;
    // //& OR
    // cout << vec.at(0) << endl;


    //* How vectors are created in the memory:

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);       
    vec.push_back(4);       // now size will be 5 and capacity will be 8   

    cout << "Size = " << vec.size() << endl;         
    cout << "Capacity = " << vec.capacity() << endl;   


    
    return 0;
}