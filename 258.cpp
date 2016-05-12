#include <iostream>

using namespace std;

int addDigits(int number) {
	int sum = 0;
	while(1) {
		if(number >= 1){//if number is still the multiple digits number keep dividing
			sum += number % 10;//get the digit number
			number = number / 10;//perpare for the next digit operation
		}else{
			if(sum > 9){//if sum is not the single digit number keeping dividing
				number = sum;//sum will be the new number
				sum = 0;//clear sum
			}else{
				return sum;//return sum when it is a single digit number
				break;
			}
		}
	}
}
int main() {
	int num = 199;
	cout << addDigits(num) << endl;
}