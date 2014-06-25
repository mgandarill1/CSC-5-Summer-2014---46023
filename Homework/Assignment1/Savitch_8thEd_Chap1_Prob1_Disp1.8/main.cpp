/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Homework Project
 * Created on June 24, 2014, 5:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Conversions

//Function Prototypes

//Execution Begins Here!
int main( ) 
{
    
    int numpods=10, peaspod=9, ttalps;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cout << numpods << endl;
    cout << "Enter the number of peas in a pod:\n";
    cout << peaspod << endl;
    ttalps = numpods * peaspod;
    cout << "If you have ";
    cout << numpods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peaspod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << ttalps;
    cout << " peas in all the pods.\n";
    

    return 0;
}

