#include <iostream>
#include "sort.h"
using namespace std;

int main(){
	int n;
	int *input;
	cout << "Please input the length of the array: ";
	cin >> n;
	input = (int *)malloc(sizeof(int)* n);
	cout << "Please input the array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	mergeSort(input, 0, n - 1);
	cout << "The sorted array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << input[i] << " ";
	}
	cout << endl;
	return 0;
}