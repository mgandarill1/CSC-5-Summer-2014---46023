/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 2
 * Created on July 1, 2014, 9:54 AM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants
const float CNVMyrs = 1.0f/12.0f; // Conversion of Months to Years

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declare Variables
    // Inputs
    float   salary,             // Old Salary
            pyinc;              // Pay Increase Percentage
    unsigned short rtomths;     // Retroactive Months
    // Outputs
    float       oldsal,         // Old Salary
                nwsal,          // New Salary 
                rtopay,         // Retroactive Paycheck
                mthpay;         // New Monthly Pay
    
   // Input Values
    pyinc = 7.6e-2f; // 7.6 percent
    cout<<"Old Salary in dollars?"<<endl;
    cin>>oldsal;
    cout<<"Number of months for retroactive pay?"<<endl;
    cin>>rtomths;
    
    //Calculations
    nwsal = oldsal * (1 + pyinc);
    rtopay = oldsal * pyinc * rtomths * CNVMyrs;
    mthpay = nwsal * CNVMyrs;
    
    // Output the results.
    cout<<"New Salary = $"<<nwsal<<endl;
    cout<<"Retroactive Pay = $"<<rtopay<<endl;
    cout<<"New Paycheck = $"<<mthpay<<endl;
    
    //Exit Stage Right!
            
            
            
            
    

    return 0;
}

