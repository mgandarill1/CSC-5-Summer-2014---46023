/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 9, 2014, 1:40 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    // Define Variables
    //Input
    char m,replay;
    int d;
    
    do{
        
    //Prompt the user for birthday
    cout<<"Enter your birth month, using numbers from 1 - 12."<<endl;
    cin>>m;
    cout<<"Enter your birth day using number 1-31."<<endl;
    cin>>d;
    
    //Determine Horoscope from Month and Day
   
       switch (m)
    {case '1':
        if ((d>=1)&&(d<=19))
        {
            cout<<"Your sign is Capricorn."<<endl;
        }
        else if ((d>=20)&&(d<=31))
        {
            cout<<"Your sign is Aquarius."<<endl;
        }
        else 
        {
            cout<<"Please enter a valid date.";
        };
        break;
     case '2':
        if ((d>=1)&&(d<=18))
        {
            cout<<"Your sign is Aquarius."<<endl;
        }
        else if ((d>=19)&&(d<=29))
        {
            cout<<"Your sign is Pisces."<<endl;
        }
              else 
        {
            cout<<"Please enter a valid date."<<endl;
        };
        break;
     case '3':
        if ((d>=1)&&(d<=20))
        {
            cout<<"Your sign is Pisces"<<endl;
        }
        else if ((d<=21)&(d<=31))
        {
            cout<<"Your sign is Aries."<<endl;
        }
        else
        {
            cout<<"Please enter a valid date."<<endl;
        };
        break;
     case '4':
         if ((d<=1)&&(d<=19))
         {
             cout<<"Your sign is Aries"<<endl;
         }
         else if ((d>=20)&&(d<30))
         {
             cout<<"Your sign is Taurus."<<endl;
         }
         else
         {
             cout<<"Please enter a valid date."<<endl;
         };
           default: 
            cout<<"default";
       };
       cout<<"Run again?"<<endl;
       cin>>replay;
   }while (replay=='Y');

    return 0;
}

