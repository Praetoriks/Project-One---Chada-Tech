/*
Joshua Perez
SNHU-CS-210-T2585
Project One
*/

#include "Clock.h"

using namespace std;

/// Default construction of class
Clock::Clock() {
	
	hours = minutes = seconds = 0;

}


Clock::Clock(int hrs, int min, int sec) {
	
	setHours(hrs);
	setMinutes(min);
	setSeconds(sec);

}

/// <summary>
/// Parameters will be set and adjusted below
/// </summary>
void Clock::setHours(int hrs) {
	
	if (hrs > 23) {
		hours = 0;
	}	
	else {
		hours = hrs;
	}

};

void Clock::setMinutes(int min) {
	
	if (min > 59) {
		minutes = min;
		seconds += 1;
			
		if (seconds > 59) {
			seconds = seconds - 60;
			minutes += 1;
		}

		if (minutes > 59) {
			minutes = minutes - 60;
			hours += 1;
		}

		if (hours > 23) {
			hours = 0;
		}
	}	
	else {
			minutes = min;
	}

}

void Clock::setSeconds(int sec) {
	
	if (sec > 59) {
		seconds = sec - 60;
		minutes += 1;

		if (minutes > 59) {
			hours += 1;
			minutes = minutes - 60;
		}

		if (hours > 23) {
			hours = 0;
		}
	}	
	else {
			seconds = sec;
	}

}


/// <summary>
/// Parameters will be gotten below
/// </summary>

int Clock::getHours() {

	return hours;

}

int Clock::getMinutes() {

	return minutes;

}

int Clock::getSeconds() {

	return seconds;

}

/// Display 24 format
void Clock::display24format() {

	if (hours < 10 || minutes < 10 || seconds < 10) {
		
		if (hours < 10) {
			cout << "0" << hours;
		}	else {
				cout << hours;
		}

		if (minutes < 10) {
			cout << ":0" << minutes;
		}	else {
				cout << ":" << minutes;
		}

		if (seconds < 10) {
			cout << ":0" << seconds;
		}	else {
				cout << ":" << seconds;
		}
	}	
	else {
			cout << hours << ":" << minutes << ":" << seconds;
	}

}

/// Display 12 format
void Clock::display12format() {

	if (hours > 12) {
		hours = hours - 12;

		if (hours < 10 || minutes < 10 || seconds < 10) {

			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}

			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}

			if (seconds < 10) {
				cout << ":0" << seconds << " PM";
			}
			else {
				cout << ":" << seconds << " PM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " PM";
		}
	}


	else if (hours == 12) {
		hours = 12;

		if (hours < 10 || minutes < 10 || seconds < 10) {
			
			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}

			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}

			if (seconds < 10) {
				cout << ":0" << seconds << " PM";
			}
			else {
				cout << ":" << seconds << " PM";
			}
		}
	}

	else if (hours == 0) {
		hours = 12;

		if (hours < 10 || minutes < 10 || seconds < 10) {

			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}

			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}

			if (seconds < 10) {
				cout << ":0" << seconds << " AM";
			}
			else {
				cout << ":" << seconds << " AM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
	}

	else {
		if (hours < 10 || minutes < 10 || seconds < 10) {

			if (hours < 10) {
				cout << "0" << hours;
			}
			else {
				cout << hours;
			}

			if (minutes < 10) {
				cout << ":0" << minutes;
			}
			else {
				cout << ":" << minutes;
			}

			if (seconds < 10) {
				cout << ":0" << seconds << " AM";
			}
			else {
				cout << ":" << seconds << " AM";
			}
		}
		else {
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
	}

}

/// Incrementing by an hour
void Clock::incrementHrs() {
	
	hours += 1;
	setHours(hours);

}

/// Incrementing by a minute
void Clock::incrementMin() {

	minutes += 1;
	setMinutes(minutes);

}


/// Incrementing by a second
void Clock::incrementSec() {

	seconds += 1;
	setSeconds(seconds);

}

