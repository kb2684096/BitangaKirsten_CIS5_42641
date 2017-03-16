/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga  
 * Created on February 28, 2017, 7:28 PM
 * Purpose:  A program that stores the sum of two 
 *           integers, 50 and 100, as variables. 
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
    int first;
    int second;
    int total;
    //Initialize variables
    first = 50;
    second = 100;
    total = 150;
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "The first number is " << first << endl;
    cout << "The second number is " << second << endl;
    //Output the transformed data
    // Calculate the sum of the two variables.
    total = first + second;
    // Display the total.
    cout << "The sum of these two numbers is " << total << endl;
            
    //Exit stage right!
    return 0;
}

