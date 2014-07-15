/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 3
 * Created on July 15, 2014, 1:13 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User defined libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Define Variables
    char day1, day2;
    int hour, min, call;
    
    //Prompt user for inputs
    cout<<"What day is the call being made?"<<endl;
    cout<<"Type Mo for Monday, Tu for Tuesday, We for Wednesday, Th for Thursday"<<endl;
    cout<<"Fr for Friday, Sa for Saturday, and Su for Sunday."<<endl;
    cin>>day1>>day2;
    cout<<"What time is the call being made? Enter time in 24-hour notation."<<endl;
    cin>>hour>>min;
    cout<<"How long was the call, in minutes?"<<endl;
    cin>>call;
    cout<<day1<<day2<<endl;
    cout<<hour<<min<<endl;
    cout<<call;
    
    
    return 0;
}

