/*
Joshua Perez
SNHU-CS-210-T2585
Project One
*/

#include<iostream>

using namespace std;

class Clock {

		/// Variables listed (Private)
	private:
		int hours;
		int minutes;
		int seconds;


		/// Variables listed (Public)
	public:
		Clock();
		Clock(int hrs, int min, int sec);

		/// setter
		void setHours(int hrs);
		void setMinutes(int min);
		void setSeconds(int sec);

		/// getter
		int getHours();
		int getMinutes();
		int getSeconds();

		void display24format();
		void display12format();
		void incrementHrs();
		void incrementMin();
		void incrementSec();
};
