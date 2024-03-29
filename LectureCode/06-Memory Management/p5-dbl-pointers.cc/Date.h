
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date {
		
	public:
		//constructor
		
		Date(int = 1901, int = 1, int = 1);
		Date(Date&);

		~Date();
		
		//setters
		void setDay( int);
		void setMonth(int);
		void setYear(int);
		void setDate(int, int, int);
		void setDate(Date&);
		
		//getters
		int getDay();
		int getMonth();
		int getYear();
		string getMonthName();

		//comparison operators
		bool lessThan(Date&);
		bool equals(Date&);
		
		//other
		void print();
	
	private:
		//functions
		int getMaxDay();	
	
		//variables
		int day;
		int month;
		int year;

};
#endif
