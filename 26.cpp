#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	if(nums.size() == 0) {//check if the vector is null
		return 0;
	}
	int size = 0;//this will be the first pointer
	for(int i = 0; i < nums.size(); i++){//i is the second pointer
		if(nums[i] != nums[size]) {//loop until it reaches the first different element
			nums[++size] = nums[i];//save that different element in the new address nums[++size]
		}
	}
	return size+1;//size start at 0 thus plus 1 will return the size of the vector
}

int main() {
	vector<int> A;
	A = {11223455};
	cout << removeDuplicates(A)<< endl;
	cout << "A = {";
	for(int i = 0; i < A.size(); i++) {
		cout << A[i] << "";
	}
	cout << "}" << endl;
}