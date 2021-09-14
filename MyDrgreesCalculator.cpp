#include <iostream>

using namespace std;

const int MINUTESorDEGREES = 60;


int main(int argc, char const *argv[])
{

double degrees, minutes, seconds;
double sum;

cout << "\nВведите значение широты в градусах, минутах и секундах:" << endl;
cout << "\n\tСначала широта в градусах:______\b\b\b\b\b\b";
	cin >> degrees;
cout << "\tтеперь значение в минутах:______\b\b\b\b\b\b";
	cin >> minutes;
cout << "\tИ последние, в секундах:______\b\b\b\b\b\b";
	cin >> seconds;
cout << "\n" << degrees << " градусов широты " << minutes << " минут " << seconds << " секунд = ";
minutes += seconds / MINUTESorDEGREES;
sum = degrees + (minutes / MINUTESorDEGREES);
cout << sum << " градусов в десятичном формате\n\n" << endl;

	return 0;
}