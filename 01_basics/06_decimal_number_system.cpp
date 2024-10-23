#include <iostream>
using namespace std;


int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // binary form
}


int binToDecimal(int binNum){
    int ans = 0, pow = 1;

    while (binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans; // decimal form
}

int main() {
    //* Decimal to Binary:
    // int decNum = 10;
    // // cout<< decToBinary(decNum) << endl;

    // //* from 1 to 10 all binary numbers
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<< decToBinary(i) << endl;
    // }


    //* Binary to Decimal:

    cout << binToDecimal(100100) << endl;
    
    return 0;
}