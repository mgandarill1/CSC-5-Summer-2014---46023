/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 2
 * Created on July 2, 2014, 10:10 AM
 */

// System Level Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;


// User Defined Libraries

// Global Constants
const float CNVhr2m = 60.0f;    // Hours to minutes
const float CNVm2sc = CNVhr2m;  // Minutes to seconds

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    
   //Define Variables
    float   mph,        // Miles Per Hour
            fmin;       // Float Minutes
    int     inMin,      // Integer Minute
            inSec;      // Integer Seconds
    
    // Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Calculations
    mph=rand()%28+1;            // Speed of fastest human, range from 1 - 28
    fmin=CNVhr2m/mph;           // Floating point minutes to miles
    inMin=fmin;                 
    inSec=(fmin-inMin)*CNVm2sc;
    
    // Output Results
    cout<<"Speed is "<<mph<<"mph.\n";
    cout<<"Equal to 1 mile in "<<inMin<<" minutes and "<<inSec<<" seconds."<<endl;
    
    

    return 0;
}

