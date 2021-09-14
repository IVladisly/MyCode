#include <iostream>

using namespace std;

const int MINUTESorHOURS = 60;
const int DAYS = 24; 

int main(int argc, char const *argv[])
{

int seconds, minutes = 0, hours = 0, days = 0;
int remainder = 0;
cout << "\n\nВведите число в секундах и я скажу, сколько же это дней или чвсов" << endl;
cout << "\n\tТааак....Сколько же секунд ?:________\b\b\b\b\b\b\b\b";
	cin >> seconds;
	remainder = seconds;
minutes = seconds / MINUTESorHOURS;
	seconds = seconds - (minutes * MINUTESorHOURS);
hours = minutes / MINUTESorHOURS;
	minutes = minutes - (hours * MINUTESorHOURS);
days = hours / DAYS;
	hours = hours - (days * DAYS);










cout << "\n\n" << remainder << " секунд это: " << days << " дней, " << hours << " часов, " << minutes << " минут, " << seconds << " секунд\n\n" << endl;

return 0;
}