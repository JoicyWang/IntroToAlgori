#include <iostream>
using namespace std;

void merge(int a[], int p, int q, int r)
{
	//creat two arrays and assign them
	int n1, n2;
	int *left = NULL, *right = NULL;
	n1 = q - p + 1;
	n2 = r - q;
	left = (int *)malloc(sizeof(int)* n1);
	right = (int *)malloc(sizeof(int)* n2);
	for (int i = 0; i < n1; i++)
	{
		left[i] = a[p + i];
	}
	for (int i = 0; i < n2; i++)
	{
		right[i] = a[q + i + 1];
	}
	//merge the two arrays
	int j = 0, j1 = 0, j2 = 0;
	while (j1 < n1 && j2 < n2)
	{
		if (left[j1] < right[j2])
			a[j++] = left[j1++];
		else
			a[j++] = right[j2++];
	}
	//merge the remain elements
	if (j1 < n1)
	{
		for (; j1 < n1; j1++)
			a[j++] = left[j1];
	}
	else if (j2 < n2)
	{
		for (; j2 < n2; j2++)
			a[j++] = right[j2];
	}
}

void mergeSort(int a[], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		mergeSort(a, p, q);
		mergeSort(a, q+1, r);
		merge(a, p, q, r);
	}
}