#include <iostream>
#include "ShopKeep.h"
#include "DynamicArray.h"

///Create a function that will sort an array of integers using bubble sort.
///Print the array before and after its been sorted.

void sortArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

template <typename T, typename B>
T add(T lhs, B rhs)
{
	return lhs + rhs;
}

int main()
{
	//Create a new array
	int test[5] = { 2,3,1,4,5 };
	//Print array
	printArray(test, 5);
	//Sort array
	sortArray(test, 5);
	//Print array
	printArray(test, 5);

	//auto sum = add<int, int>(3.565f, 3.6474f);

	ShopKeep<int, 5> potionSellah = ShopKeep<int,5>();

	system("pause");
}