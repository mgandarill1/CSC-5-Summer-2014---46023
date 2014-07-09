/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 3
 * Created on July 9, 2014, 11:23 AM
 */

// System Level Libraries
#include <iostream>
#include <string>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

//  Execution Begins Here!
int main(int argc, char** argv) {

    // Define Variables
    // Inputs
    char input1, input2;
    char replay;
    
    // Prompt for choices
    cout<<"Enter R for Rock, P for Paper, or S for Scissors.\n";
    cout<<"Player 1's turn: "<<endl;
    cin>>input1;
    cout<<"Player 2's turn: "<<endl;
    cin>>input2;
    
    // Calculate the results of the game
    if ((input1=='R'||input1=='r')&&(input2=='R'||input2=='r'))
    {
        cout<<"Rock vs. Rock = Game is Tied\n";
    }
    else if ((input1=='R'||input1=='r')&&(input2=='P'||input2=='p'))
    {
        cout<<"Rock vs Paper = Player 2 Wins.\n";
    }
    else if ((input1=='R'||input1=='r')&&(input2=='S'||input2=='s'))
    {
        cout<<"Rock vs Scissors = Player 1 Wins.\n";
    }
    else if ((input1=='P'||input1=='p')&&(input2=='R'||input2=='r'))
    {
        cout<<"Paper vs. Rock = Player 1 Wins\n";
    }
    else if ((input1=='P'||'p')&&(input2=='P'||input2=='p'))
    {
        cout<<"Paper vs. Paper = Game is tied\n";
    }
    else if ((input1=='P'||input1=='p')&&(input2=='S'||input2=='s'))
    {
        cout<<"Paper vs. Scissors = Player 2 Wins\n";
    }
    else if ((input1=='S'||input1=='s')&&(input2=='R'||input2=='r'))
    {
        cout<<"Scissors vs. Rock = Player 2 Wins\n";
    }
    else if ((input1=='S'||input1=='s')&&(input2=='P'||input1=='p'))
    {
        cout<<"Scissors vs. Paper = Player 1 Wins\n";
    }
    else if ((input1=='S'||input1=='s')&&(input2=='S'||input2=='s'))
    {
        cout<<"Scissors vs. Scissors = Game is tied\n";
    }
    else 
    {
        cout<<"One or more invalid entry.\n";
    }
        
        
    return 0;
}

