#include <iostream>

double transform(double temperture)
{
	return temperture * 1.8 + 32;
}
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	double temperture = 0;
	cout << "please enter a Celsius value: ";
	cin >> temperture;
	cout << temperture << " degree Celsius is " << transform(temperture) << " degrees Fahrenheit." << endl;
	return 0;
}