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
    //Inputs
    short m, d;
    char replay;
    
    do{
        
    //Prompt the user for birthday
    cout<<"Enter your birth month, using numbers from 1 - 12."<<endl;
    cin>>m;
    cout<<"Enter your birth day using number 1-31."<<endl;
    cin>>d;
    
           //Determine Horoscope from Month and Day with switch statement.
           switch (m)
           {case 1: m=1;
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
            case 2: m=2;
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
            case 3: m=3;
                if ((d>=1)&&(d<=20))
                {
                    cout<<"Your sign is Pisces"<<endl;
                }
                else if ((d>=21)&(d<=31))
                {
                    cout<<"Your sign is Aries."<<endl;
                }
                else
                {
                    cout<<"Please enter a valid date."<<endl;
                };
                break;
            case 4: m=4;
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
                break;
            case 5: m=5;
                if ((d>=1)&&(d<=20))
                {
                    cout<<"Your sign is Taurus."<<endl;
                }
                else if ((d>=21)&&(d<=31))
                {
                    cout<<"Your sign is Gemini."<<endl;
                }
                else
                {
                    cout<<"Please enter a valid date.";
                };
                break;
            case 6: m=6;    
                if ((d>=1)&&(d<=21))
                {
                    cout<<"Your sign is Gemini."<<endl;
                }
                else if ((d>=21)&&(d<=30))
                {
                    cout<<"Your sign is Cancer."<<endl;
                }
                else
                {
                    cout<<"Please enter a valid date."<<endl;
                };
                break;
            case 7: m=7;
                if ((d>=1)&&(d<=22))
                {
                    cout<<"Your sign is Cancer."<<endl;
                }
                else if ((d>=23)&&(d<=31))
                {
                    cout<<"Your sign is Leo."<<endl;
                }
                else 
                {
                    cout<<"Please enter a valid date."<<endl;
                };
                break;
            case 8: m=8;
                if ((d>=1)&&(d<=22))
                {
                    cout<<"Your sign is Leo."<<endl;
                }
                else if ((d>=23)&&(d<=30))
                {
                    cout<<"Your sign is Virgo."<<endl;
                }
                else
                {
                    cout<<"Please enter a valid date."<<endl;
                };
                break;
           case 9: m=9;
                if ((d>=1)&&(d<=22))
                {
                    cout<<"Your sign is Virgo."<<endl;
                }
                else if ((d>=23)&&(d<=30))
                {
                    cout<<"Your sign is Libra."<<endl;
                }
                else
                {
                    cout<<"Please enter a valid date."<<endl;
                };
                break;
           case 10: m=10;
                if ((d>=1)&&(d<=22))
                {
                    cout<<"Your sign is Libra."<<endl;
                }
                else if ((d>=23)&&(d<=31))
                {
                    cout<<"Your sign is Scorpio."<<endl;
                };
                break;
            case 11: m=11;
               if ((d>=1)&&(d<=21))
               {
                   cout<<"Your sign is Scorpio."<<endl;
               }
               else if ((d>=22)&&(d<=30))
               {
                   cout<<"Your sign is Sagittarius."<<endl;
               }
               else
               {
                   cout<<"Please enter a valid date."<<endl;
               };
               break;
            case 12: m=12;
               if ((d>=1)&&(d<=21))
               {
                   cout<<"Your sign is Sagittarius."<<endl;
               }
               else if ((d>=22)&&(d<=31))
               {
                   cout<<"Your sign is Capricorn."<<endl;
               }
               else
               {
                   cout<<"Please enter a valid date."<<endl;
               };
               break;
            default: 
               cout<<"default"<<endl;
       };
       
       
       //Calculate the cusp 
       switch (m)
           {case 1: m=1;
           if ((d>=17)&&(d<=19))
           {
               cout<<"You are on the cusp of Aquarius."<<endl;
           }
           else 
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 2: m=2;
           if ((d>=16)&&(d>=18))
           {
               cout<<"You are on the cusp of Pisces."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 3: m=3;
           if ((d>=18)&(d<=20))
           {
               cout<<"You are on the cusp of Aries."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 4: m=4;
           if ((d>=17)&(d<=19))
           {
               cout<<"You are on the cusp of Taurus."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
               break;
           
           case 5: m=5;
           if ((d>=18)&&(d<=20))
           {
               cout<<"You are on the cusp of Gemini."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 6: m=6;
           if ((d>=19)&&(d<=21))
           {
               cout<<"You are on the cusp of Cancer."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 7: m=7;
           if ((d>=20)&&(d<=22))
           {
               cout<<"You are on the cusp of Leo."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           }
           break;
           
           case 8: m=8;
           if ((d>=20)&&(d<=22))
           {
               cout<<"You are on the cusp of Virgo."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           }
           break;
           
           case 9: m=9;
           if ((d>=20)&&(d<=22))
           {
               cout<<"You are on the cusp of Libra."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 10: m=10;
           if((d>=20)&&(d<=22))
           {
               cout<<"You are on the cusp of Scorpio."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 11: m=11;
           if ((d>=19)&&(d<=21))
           {
               cout<<"You are on the cusp of Sagittarius."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           
           case 12: m=12;
           if((d>=19)&&(d<=21))
           {
               cout<<"You are on the cusp of Capricorn."<<endl;
           }
           else
           {
               cout<<"Have a nice day."<<endl;
           };
           break;
           default:
               cout<<"default"<<endl;
           
       };
       cout<<"Run again? Press Y for yes"<<endl;
       cin>>replay; }while (replay=='Y'||'y');

    return 0;
}

