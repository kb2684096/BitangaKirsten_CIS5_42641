/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga
 * Created on February 28, 2017, 9:42 PM
 * Purpose:  To predict how much the East Coast division
 *           will generate for the company in sales this 
 *           year.
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
    double companysales = 8.6, eastpercentage, eastsales;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    eastsales = companysales * 0.58;
    //Output the transformed data
    cout << "East Coast division will generate $" << eastsales << " million this year.\n";
    //Exit stage right!
    return 0;
}

