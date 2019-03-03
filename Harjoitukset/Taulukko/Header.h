#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAXSIZE 11

//INTERFACE FOR TEMPLATE  ARRAY FUNCTIONS

template<typename T>
bool Find(T* array,  int size, T input);

template<typename T>
void Insert(T* array, int size, T input, int index);

template<typename T>
void Remove(T* array, int size, int index);

template<typename T>
void PrintArray(T* array, int size);

//INTERFACE ENDS

//-------------------------------------------------------------------------------------------------

//EXECUTIONS FOR TEMPLATE FUNCTIONS

//Find the input value from array, returns true if able to find it.
template<typename T>
inline bool Find(T* array, int size, T input)
{
	//use for loop to linearly process through the array indexes
	for (size_t i = 0; i < size; i++)
	{
		//if array value is same as input, return true.
		if (array[i] == input) {
			return true;
		}
	}
	//if array value is not found, return false
	return false;
}

//Inserts value to desired index, moves the higher indexes forward.
template<typename T>
inline void Insert(T * array, int size, T input, int index)
{

	//use for loop to linearly process through the array indexes, starting from top
	for (size_t i = size-1; i >= index; i--)
	{
		
		array[i] = array[i - 1];

	}
	array[index] = input;

}

//Removes value from the desired index, then moves the higher indexes backwards.
template<typename T>
inline void Remove(T * array, int size, int index)
{
	//use for loop to linearly process through the array indexes, starting from the index input
	for (size_t i = index; i < size; i++)
	{
		//change  next index value to the current index value
		array[i] = array[i + 1];
	}
	array[size-1] = 0;
}

//Print Array index values
template<typename T>
inline void PrintArray(T * array, int size)
{

	cout << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

}

//EXECUTIONS FOR TEMPLATE FUNCTIONS ENDS