/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga
 * Created on February 28, 2017, 11:20 PM
 * Purpose:  To calculate the employee's annual pay.
 * 
 *          
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double payAmount = 2200.0,
            payPeriods = 26,
            annualPay;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    annualPay = payAmount * payPeriods;
    //Output the transformed data
    cout << "The total annual pay is $" << annualPay << endl;
    //Exit stage right!
    return 0;
}

