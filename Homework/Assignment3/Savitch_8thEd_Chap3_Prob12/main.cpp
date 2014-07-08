/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 3
 * Created on July 8, 2014, 1:18 PM
 */

// System Level Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Part 1 Declare Variables
    float aprxPi1=1;
    int nTerms=10000; 
    // Loop to approximate pi with infinite sequence
    for (int i=3;i<=nTerms/2;i+=4){
        aprxPi1+=(-1.0f/i+1.0f/(i+2));
    }
    aprxPi1*=4;
    
    // Output the results
    cout<<"Approx PI utilizing infinite sequence = "
            <<aprxPi1<<" with "<<nTerms<<" terms."<<endl;
 
    
    // Declare Part 2 Mark's Stochastic Inegration
    float aprxPi2;
    float maxRand=pow(2,31)-1;
    int nDarts=nTerms, inCircle=0;
    srand(static_cast<unsigned int>(time(0)));
    
    //Throw Darts
    for (int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRand;
        float y=rand()/maxRand;
        if(x*x+y*y<1)inCircle++;
        
    }
    aprxPi2=4.0f*inCircle/nDarts;
    
    // Ouput the results
    cout<<"Approx PI utilizing Darts = "
            <<aprxPi2<<" with "<<nTerms<<endl;
    
    
    // Exit Stage Right!
    
    
    
    
    
    
    
    return 0;
}

