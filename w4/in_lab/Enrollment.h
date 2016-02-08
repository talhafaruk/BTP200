#ifndef SICT_ENROLLMENT_H_
#define SICT_ENROLLMENT_H_

#define MAX_NAME 30
#define MAX_CODE 10

namespace sict
{
    class Enrollment
    {
    private:
        // data members
        
    public:
        // missing constructors and member functions
        
        bool isValid() const;
        void setEmpty();
        bool isEnrolled() const;
        void display(bool = false) const;
    };
}

#endif
