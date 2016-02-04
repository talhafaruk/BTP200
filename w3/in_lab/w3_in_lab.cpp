// BTP200 Workshop 3: Dynamic Memory
// File: w3_in_lab.cpp
// Version 1.0
// Date
// Author
// Description
// This file is used to demonstrate dynamic memory in
// C++ and to process an array of objects of compound
// type where the user specifies the number of
// elements in the array at run-time.
/////////////////////////////////////////////////////

#include <iostream>
#include "Weather.h"
using namespace std;
using namespace sict;

int main()
{
    int i; // loop counter
    int n; // number of objects in Weather array
    
    // declare a pointer named weatherArray of type Weather here
    Weather* weatherArray = nullptr;

    cout << "Weather Data" << endl
    << "=====================" << endl
    << "Days of Weather: ";
    cin >> n;
    cin.ignore();
    
    // allocate dynamic memory for weatherArray here
    weatherArray = new Weather[n];
    for(i = 0; i < n; i++)
    {
        char dateDescription[7];
        double high;
        double low;
        
        // add code to accept the user input
        // for the weather array and set the data
        // for each object of weatherArray


				weatherArray[i].setData(dateDescription, low, high);

    }
    
    cout << endl
    << "Weather report:" << endl
    << "Date        high  low" << endl
    << "======================" << endl;
    
    for(i = 0; i < n; i++)
    {
       	weatherArray[i].display();
    }
    
    // deallocate dynamic memory here
	delete[] weatherArray;
	weatherArray = nullptr;
    return 0;
}
