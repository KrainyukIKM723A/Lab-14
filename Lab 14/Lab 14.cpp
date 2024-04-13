#include <iostream> 
using namespace std;

void interpolationSearch(int array[], int array_size, int search_num) {
	int mid, left = 0, right = array_size - 1;

	while (array[left] <= search_num && array[right] >= search_num) {
		mid = left + ((search_num - array[left]) * (right - left)) / (array[right] - array[left]);

		if (array[mid] < search_num) {
			left = mid + 1;
		}
		else if (array[mid] > search_num) {
			right = mid - 1;
		}
		else {
			cout << "Element " << search_num << " found at index " << mid << endl;
			return;
		}
	}

	cout << "Element " << search_num << " not found in the array" << endl;
}

int main() {
	int arr[] = { 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int search_num;

	cout << "Enter the number to search for: ";
	cin >> search_num;

	interpolationSearch(arr, size, search_num);

	return 0;
}
