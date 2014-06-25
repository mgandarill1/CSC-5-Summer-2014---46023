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
    
    int fstnum, //First entered integer
        sndnum, //Second entered integer
        sumnum, //Sum of numbers
        prodnum; //Product of numbers
    
    cout <<"Hello, please enter a number between 1 and 500.\n";
    cin >> fstnum;
    cout <<"Thank you. Please enter another number between 1 and 500.\n";
    cin >> sndnum;
    sumnum = fstnum + sndnum;
    prodnum = fstnum * sndnum;
    cout <<"The sum of your numbers ";
    cout << sumnum;
    cout <<", and the product of your numbers is ";
    cout << prodnum << endl;
    cout <<"Good-bye.\n";
           
    
    return 0;
}

