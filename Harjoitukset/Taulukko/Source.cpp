#include "Header.h"

int main() {

	//make two different type arrays with 10 inserted values and 11 index
	int table1[MAXSIZE] = { 2 , 3 , 5  ,2 , 6 , 7 , 10 , 15 , 20 , 9 };
	float table2[MAXSIZE] = { 2.5 , 3.1 , 5.2 , 2.6 , 6.2 , 7.6 , 7.8 , 2.1 , 10.2 , 15.9 };

	int inputOperation = 0;
	int inputType = 0;
	int inputValue = 0;
	int indexValue = 0;
	float inputfValue = 0;
	
	cout << "Select operation , Find<1>, Insert<2>, Remove<3>" << endl;
	cin >> inputOperation;
	
	switch (inputOperation)
	{

	case 1:

		cout << "Select array type, Int<1>, Float <2>" << endl;
		cin >> inputType;

		if (inputType ==1) 
		{

			cout << "Chose Find Operation, now give Integer value to find." << endl;
			cin >> inputValue;

			if (Find(table1, MAXSIZE, inputValue)) 
			{
				cout << "Found the input!" << endl;
			}
			else 
			{
				cout << "Error, input not found!" << endl;
			}

		}
		else if (inputType == 2) 
		{

			cout << "Chose Find Operation, now give Float value to find." << endl;
			cin >> inputfValue;

			if (Find(table2, MAXSIZE, inputfValue))
			{
				cout << "Found the input!" << endl;
			}
			else
			{
				cout << "Error, input not found!" << endl;
			}
		}

		break;

	case 2:

		cout << "Select array type, Int<1>, Float <2>" << endl;
		cin >> inputType;

		if (inputType == 1)
		{

			cout << "Chose Insert Operation, now give Integer value to Insert, and index." << endl;
			cin >> inputValue;
			cin >> indexValue;

			PrintArray(table1, MAXSIZE);
			Insert(table1, MAXSIZE, inputValue, indexValue);
			PrintArray(table1, MAXSIZE);
		}
		else if (inputType == 2)
		{
			cout << "Chose Insert Operation, now give Float value to Insert, and Integer for index." << endl;
			cin >> inputfValue;
			cin >> indexValue;

			PrintArray(table2, MAXSIZE);
			Insert(table2, MAXSIZE, inputfValue, indexValue);
			PrintArray(table2, MAXSIZE);
		}

		break;

	case 3:

		cout << "Select array type, Int<1>, Float <2>" << endl;
		cin >> inputType;

		if (inputType == 1)
		{
			cout << "Chose Remove Operation, now give index to remove." << endl;
			cin >> indexValue;

			PrintArray(table1, MAXSIZE);
			Remove(table1, MAXSIZE, indexValue);
			PrintArray(table1, MAXSIZE);
		}
		else if (inputType == 2)
		{

			cout << "Chose Remove Operation, now give index to remove." << endl;
			cin >> indexValue;

			PrintArray(table2, MAXSIZE);
			Remove(table2, MAXSIZE, indexValue);
			PrintArray(table2, MAXSIZE);

		}

		break;

	default:
		break;
	}

	system("Pause");

	return 0;

};