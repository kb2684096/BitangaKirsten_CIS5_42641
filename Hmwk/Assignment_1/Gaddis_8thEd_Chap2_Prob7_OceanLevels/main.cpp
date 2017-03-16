/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga
 * Created on February 28, 2017, 11:29 PM
 * Purpose:  To calculate predictions of the ocean's
 *           levels by years.
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
    double levelRise = 1.5,
            fiveYears,
            sevenYears,
            tenYears;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    fiveYears = levelRise * 5;
    sevenYears = levelRise * 7;
    tenYears = levelRise * 10;
    
    //Output the transformed data
    cout << "In 5 years the ocean's level will be " << fiveYears << " millimeters higher.\n";
    cout << "In 7 years the ocean's level will be " << sevenYears << " millimeters higher.\n";
    cout << "In 10 years the ocean's level will be " << tenYears << " millimeters higher.\n";
    
    //Exit stage right!
    return 0;
}

