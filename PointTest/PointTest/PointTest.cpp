#include <iostream>
using namespace std;

void test(int * arr ,int len) 
{
	for (int i = 0; i < len - 1; i++) {

		for (int j = 0; j < len - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print(int* arr, int len) {
	for (int i = 0; i <= len - 1; i++) {
		cout << arr[i] << endl;
	}
}



int main() 
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	
	int len = sizeof(arr) / sizeof(arr[0]);

	test(arr,len);

	print(arr,len);

	system("pause");

}