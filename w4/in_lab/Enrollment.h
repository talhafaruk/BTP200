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
		char name[MAX_NAME+1];
		char code[MAX_CODE+1];
		int year;
		int semester;
		int timeSlot;
		bool enrolled;
    public:
        // missing constructors and member functions
		Enrollment();
		Enrollment(const char* n, const char* c, int y, int s, int ts, bool e = false);

		void set(const char* n, const char* c, int y, int s, int ts, bool e = false);
		bool hasConflict(const Enrollment &other) const;
		bool isValid() const;
        void setEmpty();
        bool isEnrolled() const;
        void display(bool = false) const;
    };
}

#endif
