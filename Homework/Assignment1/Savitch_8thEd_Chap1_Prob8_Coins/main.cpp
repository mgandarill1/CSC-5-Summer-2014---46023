/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Created on June 25, 2014, 11:39 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Define Variables
    unsigned short      
        qtr,   //Quarters
        dme,   //Dimes
        nckl,  //Nickels
        ttlq,  //Total Quarters
        ttld,  //Total Dimes
        ttln,  //Total Nickels
        ttlc;  //Total Coins
    
    cout << "Enter the amount of quarters.\n";
    cin >> qtr;
    cout << "Enter the amount of dimes.\n";
    cin >> dme;
    cout << "Enter the amount of nickels.\n";
    cin >> nckl;
    
    //Calculate the cent totals
    ttlq = 25 * qtr,
    ttld = 10 * dme,
    ttln = 5 * nckl,
    ttlc = ttlq + ttld + ttln;
    
    //Output the Results
    cout <<"Your quarters add up to ";
    cout << ttlq;
    cout <<" cents.\n";
    cout <<"Your dimes add up to ";
    cout << ttld;
    cout <<" cents.\n";
    cout <<"Your nickels add up to ";
    cout << ttln;
    cout <<" cents." << endl;
    cout <<"You have ";
    cout << ttlc;
    cout <<" cents in total." << endl;
    //Exit Stage Right!

    return 0;
}

