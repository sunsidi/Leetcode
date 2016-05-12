#include <iostream>
#include <vector>
using namespace std;

int findMajority(vector<int>&nums) {
	int major, count = 0;
	for(int num: nums){
		if(count){
			if(major == num) {
				++count;
				cout << "Count ++: " << count << endl;
			}
			else {
				--count;
				cout << "Count --: " << count << endl;
			}
		}else{
			major = num;
			cout << "Major is: " << major << endl;
			++count;
			cout << "Count initial: " << count << endl;
		}
		if(count > nums.size()/2)
			break;
	}
	return major;
} 

int main() {
	vector<int>nums = {1,2,2,3,4,5,5,5,5,5};
	int major = findMajority(nums);
	cout << "The majority number is: " << major << endl;
}