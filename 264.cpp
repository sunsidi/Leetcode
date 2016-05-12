#include <iostream>

using namespace std;

int nthUglyNumber(int n) {
	long number = 1;
	int index = 1;

	while(index < n) {
		long copy = number;
		while(number % 2 == 0)
			number /= 2;
		while(number % 3 == 0)
			number /= 3;
		while(number % 5 == 0)
			number /= 5;
		if(number == 1) {
			index++;
			number = copy;
			number++;
		}else{
			number = copy;
			number++;
		}
	}
	return number;
}

int main() {
	int n = 1352;
	cout << "The " << n <<"th ugly number is: " << nthUglyNumber(n) <<endl;
	// cout << sizeof(int) << endl;
}