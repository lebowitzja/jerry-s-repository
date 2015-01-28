E// array2.cpp
// illustrates array operations
#include <iostream>
using namespace std; 
#define maximumCells 5
	void printArray(int array[], int numberOfCells) ;
	int main()
	{
	int firstArray[maximumCells];
	int secondArray[maximumCells];
	int index;

//to input array elements

//	cout << firstArray ;  invalid  (no aggregate operations)

	cout << "Please enter 5 numbers" << endl;
	for (index=0;index<maximumCells;index++)
	cin >> firstArray[index];
	printArray(firstArray,maximumCells);


// to copy arrays
// 	firstArray=secondArray;   invalid   (no aggregate operations)

	for (index=0;index<maximumCells;index++)
	secondArray[index]=firstArray[index];
	printArray(secondArray,maximumCells);

// to add array elements
//	firstArray=firstArray+secondArray;   invalid  (no aggregate operations)

	for (index=0;index<maximumCells;index++)
	firstArray[index]=firstArray[index]+ secondArray[index];
	printArray(firstArray,maximumCells);
	}

	 void printArray(int array[],int numberOfCells)
		{
		  int index;
		  cout << "The current array:" << endl;
		  for (index=0;index < numberOfCells ;index++)
		  cout << array[index] << endl;
		}
