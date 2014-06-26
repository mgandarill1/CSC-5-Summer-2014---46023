/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Created on June 26, 2014, 12:53 PM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Conversions

// Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Define the Variables
    float oz,    // Ounces
          mett;  // Metric Tons

    //Ouput
    cout <<"Enter the weight of the breakfast cereal in ounces.\n";
    cin >> oz;
    mett = oz / 35273.92f;
    cout <<"The weight of the cereal in metric tons is:\n";
    cout << mett;
            
            return 0;
}

