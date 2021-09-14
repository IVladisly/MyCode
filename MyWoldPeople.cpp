#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
short country;
long long Ukraine = 41588040, Russia = 146171015, USA = 331449281, Turkey = 83154997, China = 1449105365;
long long people ;
double persent, sum;

cout << "Введите текущее население Земли: ________\b\b\b\b\b\b\b\b";
	cin >> people ;
cout << "Введите страну: \n\n\t 1. Украина \t\t 2. Россия \t\t 3. США \n\t\t      4. Турция \t     5. Китай" << endl;
cout << "_____\b\b\b";
	cin >> country;

if (country == 1){
	sum = Ukraine * 100;
	persent = sum / people;

	cout << "\n Популяция заданной страны составляет: " << persent << "% от всего населения Земли" <<endl;

} 
	else if (country == 2)\
	{
		sum = Russia * 100;
		persent = sum / people;
	
		cout << "\n Популяция заданной страны составляет: " << persent << "% от всего населения Земли" <<endl;

}	else if (country == 3)
	{

		sum = USA * 100;
		persent = sum / people;

		cout << "\n Популяция заданной страны составляет: " << persent << "% от всего населения Земли" <<endl;

}	else if (country == 4)
	{

		sum =  Turkey * 100;
		persent = sum / people;

		cout << "\n Популяция заданной страны составляет: " << persent << "% от всего населения Земли" <<endl;

}	else if (country ==5)
	{

		sum = China * 100;
		persent = sum / people;

		cout << "\n Популяция заданной страны составляет: " << persent << "% от всего населения Земли" <<endl;

}
	else {
		cout << "\n\n\t    ////////////////////Error country//////////////////// ";
}		

return 0;
}