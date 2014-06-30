/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Created on June 26, 2014, 1:50 PM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Conversions
const float ATSWT = .001;

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
   float 
        msdeth, // Mouse Death
        mswt,   // Mouse Weight
        uswt,   // User Weiht
        usdeth; // User Death
   do {
    cout<<"Please enter the amount in ounces of artificial sweetener needed to kill a mouse.\n";
    cin>>msdeth;
    cout<<"Please enter the weight of the mouse in lbs.\n";
    cin>>mswt;
    cout<<"Please enter the user's desired weight in lbs.\n";
    cin>>uswt;
    msdeth = mswt * ATSWT, usdeth = uswt * ATSWT;
    cout<<msdeth<<" is required to kill a mouse and "<<usdeth<<" is required to kill user."<<endl;
   } while (msdeth=!0);       
    
            
    return 0;
}

