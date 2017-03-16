/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga
 * Created on February 28, 2017, 11:01 PM
 * Purpose:  To calculate the average of a series
 *           of values. 
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
    double number1 = 28, 
            number2 = 32, 
            number3 = 37, 
            number4 = 24, 
            number5 = 33,
            sum,
            average;
    //Initialize variables

    //Input data
    
    //Map inputs to outputs or process the data
    sum = number1 + number2 + number3 + number4 + number5;
    average = sum / 5;
    //Output the transformed data
    cout << "The average is " << average << endl;
    //Exit stage right!
    return 0;
}

