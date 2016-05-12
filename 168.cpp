#include <iostream>
#include <string>

using namespace std;

string convertToTitles(int n) {

    string letters[26] = {"A", "B", "C", "D", "E", "F" , "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};  
    string result = "";
	if(n > 0) {
		int digit;
		while(1) {
			digit = n % 26;//produce the digit from left to right
			if(digit == 0) {
				digit = 26;
				n = n / 26 - 1;
			}else {
				n = n / 26;
			}
			result = letters[digit - 1] + result;
			if(n == 0)//divide 26 until n hits 0
				break;
		}
		return result;
	}
}

string convertToTitle(int n) {  
    string array[26] = {"A", "B", "C", "D", "E", "F" , "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};  
    string result = "";  
    string each_digit = "";  
    while (n > 0) {  
        int digit = n%26;  
        if (digit == 0) digit = 26;  
        each_digit = array[digit - 1];
        result = each_digit + result;  
        n = (n - 1)/26;  //n需要减去1， 否则输入26，输出就会错为AZ.  
    }  
    return result;  
 }  

int main() {
	int number = 2080;
	cout << convertToTitle(number) << endl;
	cout << convertToTitles(number) << endl;
}