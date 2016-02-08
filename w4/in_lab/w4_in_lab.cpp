// BTP200 Workshop 4: Constructors
// File: w4_in_lab.cpp
// Version: 1.0
// Date: 2015/10/4
// Author: Fardad Soleimanloo
// Description:
// This file tests in-lab section of your workshop
//////////////////////////////////////////////////

#include <iostream>
#include "Enrollment.h"

#define BAD_DATA_ARRAY 9

using namespace std;
using namespace sict;

void displayEnrollments(const Enrollment& e1, const Enrollment& e2);

int main()
{
    // constructors
    Enrollment e1("College English", "EAC150", 2015, 1, 5);
    Enrollment e2, e3;
    Enrollment badData[BAD_DATA_ARRAY] = {
        Enrollment("Intro to Programming in C", "BTP100", 2015, 1, 5),
        Enrollment(nullptr, "BTP100", 2015, 1, 5),
        Enrollment("Intro to Programming in C", nullptr, 2015, 1, 5),
        Enrollment("", "BTP100", 2015, 1, 5),
        Enrollment("Intro to Programming in C", "", 2015, 1, 5),
        Enrollment("Intro to Programming in C", "BTP100", 2014, 1, 5),
        Enrollment("Intro to Programming in C", "BTP100", 2015, 0, 5),
        Enrollment("Intro to Programming in C", "BTP100", 2015, 4, 5),
        Enrollment("Intro to Programming in C", "BTP100", 2015, 1, 0)
    };
    
    cout << "Testing Enrollment objects" << endl << endl;
    
    // testing two invalid Enrollments
    displayEnrollments(e3, e2);
    
    // testing valid and invalid Enrollments
    displayEnrollments(e1, e2);
    
    // setting the second one to BTP200
    e2.set("Object Oriented Programming", "BTP200", 2015, 1, 5);
    
    displayEnrollments(e1, e2);
    
    // setting the enrollment to true;
    e2.set("Object Oriented Programming", "BTP200", 2015, 1, 5, true);
    
    displayEnrollments(e1, e2);
    
    // removing conflict;
    e2.set("Object Oriented Programming", "BTP200", 2015, 1, 6);
    
    displayEnrollments(e1, e2);
    
    // making sure all the conditions are met for an invalid Enrollment.
    cout << endl << "Only index 0 should be valid:" << endl;
    for(int i = 0; i < BAD_DATA_ARRAY; i++)
    {
        cout <<"index: " << i << " - "<< (badData[i].isValid() ? "V" : "Not v") << "alid." << endl;
    }
    
    return 0;
}

void displayEnrollments(const Enrollment& e1, const Enrollment& e2)
{
    cout << "----------------------------------------------" << endl;
    e1.display();
    cout << (e1.isEnrolled() ? "E" : "Not e") << "nrolled" << endl;
    e2.display();
    cout << endl<<  "There is " << (e1.hasConflict(e2)? "" : "not ") << "a conflict!" << endl;
}
