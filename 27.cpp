#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int value) {
	int pos = 0;
	for(int num:nums) {
		if(num !=value){
			nums[pos] = num;
			pos++;
		}
	}
	return pos;
}
int main() {
	vector<int> nums = {1,2,3,4,5,6,1,2,3,4,5,6,7,1,2,3,4,5};
	int value = 4;
	int pos = removeElement(nums, value);
	cout << "The length of the array is " << pos << endl;
	for(int i = 0; i < nums.size(); i++){
		cout << i << " : "<< nums[i] << endl;
	}
}