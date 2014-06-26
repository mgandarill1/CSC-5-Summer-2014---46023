/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Created on June 26, 2014, 12:03 AM
 */

// System Level Libraries
#include <iostream>
using namespace std;

 // User Defined Libraries

// Global Constants

// Function Prototype

// Execution Begines Here!

int main(int argc, char** argv) {
    int     tmesec, // Time in Seconds
            accprod, // Product of Acceleration and Speed
            objds;  // Object Distance
    
    cout <<"Enter a time in seconds.\n";
    cin >> tmesec;
    accprod = 32 * tmesec, objds = accprod / 2;
    cout <<"The distance the object fell in ";
    cout << tmesec;
    cout <<" seconds is ";
    cout << objds;
    cout <<" feet.";
    
    //Exit Stage Right!

    return 0;
}

