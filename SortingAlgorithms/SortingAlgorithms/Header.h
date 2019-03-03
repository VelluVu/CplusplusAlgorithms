#pragma once
#include <iostream>
using namespace std;

//PRINT FUNCTION <INTEGER>
void PrintArray(int* arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

}

//SWAP FUNCTION <INTEGER>
void SwapInts(int& x, int& y)
{

	int temp = x;
	x = y;
	y = temp;

}

//SELECTION SORT <INTEGER>
void SelectionSort(int* arr, int size) 
{
	int i , j, indexMin = 0;

	for ( i = 0; i < size; i++)
	{
		indexMin = i;

		for ( j = i+1; j < size; j++)
		{
			
			if (arr[j] < arr[indexMin])
			{

				indexMin = j;
				
			}

			//if (indexMin != i) 
			//{

				SwapInts(arr[indexMin], arr[i]);

			//}
		}

	}
	SwapInts(arr[size - 2], arr[size - 3]);
}

//QUICK SORT <INTEGER>
/*

//Partition
1. Choose highset index as pivot
2. Take two variables to point left and right of the list excluding pivot
3. Left points to the low index
4. Right points to the high
5. if value at the left is less than pivot move right
6. if the value at the right is less than pivot move left
7. if both step 5 and 6 does not match swap left and right
8. if left >= right, the point where they met is new pivot

//Sort
1. Make the right-most index value pivot
2. Partition the array using pivot value
3. Quicksort left partition recursively
4. Quicksort right partition recursively

*/

int Partition(int* arr, int low, int high) 
{

	int p = low;
	int j = high;
	int pivot = arr[low];

	for (int i = low + 1; i <= high; i++)
	{
		
		if (arr[i] <= pivot)
		{
			p++;
			SwapInts(arr[i], arr[p]);
		}
	}

	SwapInts(arr[p], arr[low]);

	return p;

}

void QuickSort(int* arr, int low, int high)
{

	if (low >= high)
	{
		return;
	}

	int partitionPoint = Partition(arr, low, high);

	QuickSort(arr, low, partitionPoint - 1);
	QuickSort(arr, partitionPoint + 1, high);

}