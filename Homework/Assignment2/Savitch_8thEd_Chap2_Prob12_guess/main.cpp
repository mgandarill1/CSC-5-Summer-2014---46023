/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 2
 * Created on July 2, 2014, 11:17 AM
 */

// System Level Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    
    // Define Variabels
    float n, guess, r;
    
    // Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Input number
    n=rand()%15+2;
    
    // First Pass Babylonian Approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    // Output First Pass Results
    cout<<"Finding sqaure root for: "<<n<<endl;
    cout<<"First pass guess = "<<guess<<endl;
    
    // Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    // Output Second Pass Results
    cout<<"Second pass guess = "<<guess<<endl;
    
    // Third Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    // Output Third Pass Results
    cout<<"Third pass guess = "<<guess<<endl;
    
    

    return 0;
}

