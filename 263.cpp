#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
	for(int i = 2; i < sqrt(number); i++) {
		if(number%i == 0) return false;
	}
	return true;
}

bool isugly(int number) {
	if(number < 1)//stupid oj needs this line
		return false;

	while(number % 2 == 0)
		number /= 2;
	while(number % 3 == 0)
		number /= 3;
	while(number % 5 == 0)
		number /= 5;
	return (number == 1) ? true : false;
}

bool isUgly(int num) {
	if(num < 1)//stupid oj need this line
		return false;

	for(int i = 2; i <= 5; i++)
	{
		while(num%i == 0)
			num /= i;
	}

	if(num != 1)
		return false;
	return true;
}

int main() {
	int n = 21342345;
	if(isUgly(n))
		cout << "The number is ugly" << endl;
	else
		cout << "The number is not ugly" << endl;

}