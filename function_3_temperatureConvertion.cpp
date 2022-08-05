#include <iostream>
#include <cmath>
using namespace std;

float celsiusToFarenheit(float celsius) {

	celsius = (celsius*1.8) + 32;
	return celsius;

}

float farenheitToCelsius(float farenheit) {

	farenheit = (farenheit-32) * 0.55;
	return farenheit;

}

int main() {

	int celsius, farenheit;

	cout << "Enter temperature in Celsius" << endl;
	cin >> celsius;
	cout << "In Farenheit it will be " << celsiusToFarenheit(celsius) << endl;
	cout << "Now, enter temperature in Farenheit" << endl;
	cin >> farenheit;
	cout << "In celsius it will be " << farenheitToCelsius(farenheit) << endl;

	return 0;

}