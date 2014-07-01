/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 2
 * Created on July 1, 2014, 12:51 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

// Global Constants

//Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    //Define Variables
    //Inputs
    char sex;                   // Sex M or F
    unsigned short wt;          // Weight
    unsigned short ht, age;     // Height, Age
    unsigned short chocbar=230; // Number of calories in a chocolate bar
    //Outputs
    float bmr;                  // Basal Metabolic Rate
    float chbars;               // Number of chocolate bars you can eat
    
    // Prompt for inputs
    cout<<"How many chocolate bars can you consume to maintain your weight?\n";
    cout<<"Enter your weight in lbs: ";
    cin>>wt;
    cout<<endl<<"Enter your height in inches: ";
    cin>>ht;
    cout<<endl<<"Enter your age: ";
    cin>>age;
    cout<<endl<<"Sex: M or F? ";
    cin>>sex;
    
    // Calculate BMR
    if (sex=='F'||sex=='f'){
    bmr=655+(4.3*wt)+(4.7*ht)-(4.7*age);
        }
    else if (sex=='M'||sex=='m'){
        bmr=66+(6.3*wt)+(12.9*ht)-(6.8*age);
    }
    else {
        cout<<"One of your entries was invalid.";
    }
    cout<<endl<<"Your BMR is "<<bmr<<endl;
    chbars=bmr/chocbar;
    cout<<"The amount of candy bars you can eat to maintain your weight: ";
    cout<<chbars;
    
//Exit Stage Right!        
    
    
    return 0;
}

