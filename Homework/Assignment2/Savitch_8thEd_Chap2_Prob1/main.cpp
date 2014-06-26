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
const float OZ2TONS = 1/35273.92f;

// Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Define the Variables
    float oz,    // Ounces
          metct;  // Metric Tons

    //Ouput
    
    do{
        cout <<"Enter the weight of the breakfast cereal in ounces.\n";
        cin >> oz;
        metct = oz * OZ2TONS;
        cout <<"The weight of the cereal in metric tons is:\n";
        cout << metct <<endl;
    }while(oz!=0);
        
    return 0;
}

