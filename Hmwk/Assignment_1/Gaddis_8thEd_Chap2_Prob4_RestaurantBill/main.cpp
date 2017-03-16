/* 
 * File:   main.cpp
 * Author: Kirsten Bitanga  
 * Created on February 28, 2017, 10:49 PM
 * Purpose:  To compute the tax and tip on a restaurant
 *           bill.
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
    double meal = 88.67, tax, mealTax, tip, bill;
    //Initialize variables
    tax = meal * 0.0675;
    mealTax = meal + tax;
    tip = mealTax * 0.2;
    //Input data
    
    //Map inputs to outputs or process the data
    bill = meal + tax + tip;
    //Output the transformed data
    cout << "Meal cost: $" << meal << endl;
    cout << "Tax amount: $" << tax << endl;
    cout << "Tip amount: $" << tip << endl;
    cout << "Total bill: $" << bill << endl;
    //Exit stage right!
    return 0;
}

