/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Function: Assignment 2
 * Created on July 1, 2014, 11:07 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Define Variables
    unsigned short      maxrm,  // Maximum room capacity
                        nmppl,  // Number of people attending
                        ppla,   // Remaining number of people allowed to attend
                        pplov;  // Number of people surpassing room capacity
                        
   do{ // Inputs
    cout<<"Enter the maximum room capacity.\n";
    cin>>maxrm;
    cout<<"Enter the number of people attending the meeting.\n";
    cin>>nmppl;
    
    //Calculations & Comparisons
    if (nmppl <= maxrm)
    {ppla = maxrm - nmppl;
                cout<<endl<<"Your meeting is within fire regulation requirements.\n",
                cout<<"You may have "<<ppla<<" more member(s) attend.\n",
                cout<<"**************************************************"<<endl;}
    else 
    { pplov = nmppl - maxrm;
                cout<<endl<<"Your meeting violates fire regulations.\n",
                cout<<"Please exclude "<<pplov<<" member(s) from the meeting.\n",
                cout<<"***************************************************"<<endl;}
   }while (nmppl>0);
   
    
        
        
        
        return 0;
}

