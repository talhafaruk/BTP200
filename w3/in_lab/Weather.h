#ifndef SICT_WEATHER_H_
#define SICT_WEATHER_H_

#define MAX_DATE 7



namespace sict
{
    // Define Weather class here
	class Weather {
	private:
		char name[MAX_DATE + 1];
		double highTemp;
		double lowTemp;

	public:
		void setData(const char* date, double low, double high);
		void display() const;

	};
}

#endif
