//0013
#include<iostream>
using namespace std;

int main() {

	int nums[9], realNums[7];
	int sum = 0;
	int remain;

	for (int i = 0; i < 9; i++) {
		cin >> nums[i];
	}

	for (int i = 0; i < 9; i++) {
		sum = sum + nums[i];
	}

	remain = sum - 100;

	int a = 0;
	int b = 0;
	while (a + b != remain) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (nums[i] + nums[j] == remain) {
					a = nums[i];
					b = nums[j];
				}
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (nums[i] != a && nums[i] != b) {
			cout << nums[i] << endl;
		}
	}

	return 0;
}