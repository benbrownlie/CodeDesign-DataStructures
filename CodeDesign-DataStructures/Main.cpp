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
	DynamicArray<int> test = DynamicArray<int>();
	test.addItem(5);
	test.addItem(3);
	test.addItem(2);
	test.addItem(4);
	test.addItem(1);
	test.sortItems();
	test.print();
	system("pause");
}