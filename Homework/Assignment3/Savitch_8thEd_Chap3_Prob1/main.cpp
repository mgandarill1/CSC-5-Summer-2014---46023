/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Assignment 3
 * Created on July 3, 2014, 11:04 AM
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    //Define Variables
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int sumpos, sumneg;
   
    //Acquire inputs
    cout<<"enter 10 numbers, positive or negative, seperated by spaces"<<endl;
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
    
    //Calculations
    if ((n1>=0)&&(n2>=0)&&(n3>=0)&&(n4>=0)&&(n5>=0)&&(n6>=0)&&(n7>=0)&&(n8>=0)&&(n9>=0)&&(n10>=0))
    {sumpos=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;}
    else if((n1<0)&&(n2<0)&&(n3<0)&&(n4<0)&&(n5<0)&&(n6<0)&&(n7<0)&&(n8<0)&&(n9<0)&&(n10<0))
    {sumneg=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;}
    cout<<sumpos<<" "<<sumneg;
    
    
   
    
    return 0;
}

