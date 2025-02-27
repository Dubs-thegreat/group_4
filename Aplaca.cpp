#include <iostream>
using namespace std;

int main() {
    int num;

    
    cout << "Input an integer Number : ";
    if (!(cin >> num)) { //checks if the input was converted to an integer
        cout << "Invalid input." << endl; // if not the invalid output is printed
        return 1; // Indicate an error to program
    }


    // Checks the number if its even or odd.
    string evenOdd;
    if (num % 2 == 0) { // (%) modulo operator is used para ma check if even or odd yung number
        evenOdd = "even";
    } else {
        evenOdd = "odd";
    }

    // Checks if yung number ay positive, negative, or zero.
    string positiveNegativeZero; //  the if-else statements determine if yung number ay positive, negative, or zero.
    if (num > 0) { //pag yung number ay mas greater sa zero  its positive
        positiveNegativeZero = "positive";
    } else if (num < 0) { // pag naman yung number less than sya sa zero yun ay negative
        positiveNegativeZero = "negative";
    } else { //pag zero ang number na input matic zero din ang printed result
        positiveNegativeZero = "zero";
    }

    // Output the results
    cout << "The number " << num << " is " << evenOdd << " and " << positiveNegativeZero << "." << endl;

    return 0; 
}