// 1119 bubble_sort
// 1차원 배열을 입력 받으면 bubble sort로 비교할 것임

#include <iostream>


using namespace std;

int main()
{
	int arr[] = { 1, 5, 7, 4, 8, 9 };
	
	int length = sizeof(arr) / sizeof(int);

	cout << length << endl;

	for (int i = 0; i < length - 1; i++)  // n-1번 만큼 수행
	{
		for (int j = 0; j < length - i; j++) // 
		{
			int temp;
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}

	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}

	return 0;



}
