/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla    
 * Purpose: Assignment 3
 * Created on July 8, 2014, 11:00 AM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declare Variables
    // Inputs
    float crudwt;       // Crud weight in pounds
    float ndays;        // Number of days allowed for growth
    const char seqwth = 5;    // 5 days to growth
    
    // Terms for Fibonacci
    unsigned char n, counter;
    int fi, fiM1, fiM2;
    
    // Initialize sequence members
    fiM2=1;
    fiM1=1;
    
    // Calculate first term in sequence
    fi=fiM1+fiM2;
 
    // Input specs
    cout<<"What is the initial crud weight in libs?"<<endl;
    cin>> crudwt;
    cout<<"How many days is the growth allowed?"<<endl;
    cin>> ndays;
    
    // Start Fibonacci Sequence
    n=ndays/seqwth+1;
    counter=3;
    
    while (counter<n){
        fiM2=fiM1;
        fiM1=fi;
        fi=fiM1+fiM2;
        counter++;}
    
    // Output Results
    crudwt*=fi;
    cout<< "Total crud weight = "<< crudwt <<"lbs"<<endl;
    
    // Exit Stage Right!
    
    
    
    return 0;
}

