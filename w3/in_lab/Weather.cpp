#include <iostream>
#include <iomanip>
#include <cstring>
#include "Weather.h"
using namespace std;

namespace sict
{
    // setData function implementation
    
	void Weather::setData(const char* date, double low, double high)
	{
	     strncpy(name, date, MAX_DATE);
		highTemp = high;
		lowTemp = low;
	}

	// display function implementation
	
	void Weather::display() const
	{
		cout.width(10);
		cout.fill('_');
		cout.setf(ios::left);
		cout << name;
		cout.setf(ios::right);
		cout.fill('_'); // Resets padding
		cout.width(6);
		cout.precision(2);
		cout << highTemp;
		cout.width(6);
		cout << lowTemp;
	}
}
