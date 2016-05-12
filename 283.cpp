#include <iostream>
#include <vector>

using namespace std;

// move all non-zero numbers to the front of the vector
// add zeroes at the end of the vector
void moveZeroes(vector<int>& nums) {
	int length = nums.size();
	int index = 0 count = 0;
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] != 0) {
			nums[index++] = nums[i];
		}else{
			count++;
		}
	}
	for(int j = 1; j <= count; j++){
		nums[length-j] = 0;
	}
}
find the position of the zero move the first next non-zero number to that position
move the pointer to the position of that non-zero number

int main() {
	vector<int> A;
	A = {01037};
	moveZeroes(A);
	cout << "A = {";
	for(int i = 0; i < A.size(); i++) {
		cout << A[i] << "";
	}
	cout << "}" << endl;
}