#include <iostream>
#include <cstring>
#include "Enrollment.h"
using namespace std;

namespace sict
{

    // missing constructors and member functions
    
	Enrollment::Enrollment()
	{
		setEmpty();
	}

	Enrollment::Enrollment(const char * n, const char * c, int y, int s, int ts, bool e)
	{
		set(n,c,y,s,ts,e);
	}

	void Enrollment::set(const char * n, const char * c, int y, int s, int ts, bool e)
	{
	}

	bool Enrollment::hasConflict(const Enrollment & other) const
	{
		return false;
	}

	bool Enrollment::isValid() const
    {
        return name[0];
    }
    
    void Enrollment::setEmpty()
    {
        name[0] = '\0';
        code[0] = '\0';
        year = 0;
        semester = 0;
        timeSlot = 0;
        enrolled = false;
    }
    
    bool Enrollment::isEnrolled() const
    {
        return enrolled;
    }
    
    void Enrollment::display(bool nameOnly) const
    {
        if (isValid())
        {
            cout << name;
            if(!nameOnly)
            {
                cout << endl << code << ", Year: " << year << " semester: " << semester << " Slot: " << timeSlot << endl;
                cout << "Status: " << (isEnrolled() ? "E" : "Not e") << "nrolled." << endl;
            }
        }
        else
        {
            cout << "Invalid enrollment!" << endl;
        }
    }
}



