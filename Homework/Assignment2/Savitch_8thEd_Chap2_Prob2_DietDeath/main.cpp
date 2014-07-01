/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Created on June 26, 2014, 1:50 PM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Conversions
const float CONV = .1f*.01f; //Amount of sweetener in soda

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Define Variables
    // Inputs
    float 
            mdeth,     // Amount of soda killing mouse in ounces
            wtms,      // Weight of mouse in pounds
            dswt;      // Desired weight of user in pounds
      
    // Outputs
    float   sfsda;     // Maximum amount of soda user can drink
    
    do {
        cout<<"Enter the number of ounces of artificial sweetener required to kill a mouse.\n";
    cin>>mdeth;
    cout<<"Enter the weight of the mouse in oz.\n";
    cin>>wtms;
    cout<<"Enter the desired weight of user.\n";
    cin>>dswt;
    
    // Calculations
    sfsda = mdeth * (1 + CONV) * wtms * dswt;
    
    // Output the results
    cout<<"Drink less than "<<sfsda<<" oz of soda to stay alive."<<endl;}
    while (mdeth!=0);
    
    
    
            
    return 0;
}

