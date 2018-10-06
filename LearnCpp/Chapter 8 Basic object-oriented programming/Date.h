#ifndef DATE_H
#define DATE_H

class Date {
private:
	int m_year;
	int m_month;
	int m_day;

public:
	Date(int year, int month, int day);
	void SetDate(int year, int month, int day);
 
    int getYear() { return m_year; } // NOTE: the following 3 functions kept their implementation, they are trivial member functions
    int getMonth() { return m_month; }
    int getDay()  { return m_day; }
};


#endif