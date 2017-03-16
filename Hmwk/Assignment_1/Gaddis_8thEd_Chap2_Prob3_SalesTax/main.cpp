/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga
 * Created on February 28, 2017, 10:31 PM
 * Purpose:  To compute the total sales tax on a purchase.
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
    double purchase = 95.00, stateTax, countyTax, totalTax;
    //Initialize variables
    
    //Input data
    stateTax = purchase * 0.04;
    countyTax = purchase * 0.02;
    //Map inputs to outputs or process the data
            totalTax = stateTax + countyTax;
    //Output the transformed data
    cout << "State tax: $" << stateTax << endl;
    cout << "County tax: $" << countyTax << endl;
    cout << "totalTax: $" << totalTax << endl;
    //Exit stage right!
    return 0;
}

