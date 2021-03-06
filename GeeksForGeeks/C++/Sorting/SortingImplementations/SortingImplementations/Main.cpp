// SortingImplementations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

// C program for implementation of selection sort 
#include <stdio.h> 

#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions 
int main()
{
	int arr[] = { 43,12,8,26,78,35,4,59,91,83,60,16 };
	//int arr[] = { 548, 185, 256, 350, 439, 930, 875, 872, 852, 817, 315, 273, 957, 298, 246, 406, 844, 707, 821, 577, 389, 218, 9, 34, 288, 435, 70, 95, 938, 734, 207, 53, 26, 510, 458, 835, 236, 922, 58, 355, 574, 946, 883, 488, 503, 277, 19, 22, 69, 690, 204, 634, 317, 331, 177, 222, 62, 5, 860, 781, 933, 118, 610, 262, 247, 448, 838, 409, 171, 920, 650, 467, 3, 441, 333, 519, 963, 784, 159, 52, 73, 870, 499, 516, 847, 391, 194, 128, 659, 14, 861, 54, 493, 792, 13, 766, 876, 806 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//selectionSort(arr, n);
	bubbleSort(arr, n);
	//insertionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}




//
//#include <iostream>
//#include <vector>
//#include <chrono> 
//using namespace std;
//
//void swap(int *xp, int *yp)
//{
//	int temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//
//void selectionSort(int arr[], int n)
//{
//	int i, j, min_idx;
//
//	// One by one move boundary of unsorted subarray 
//	for (i = 0; i < n - 1; i++)
//	{
//		// Find the minimum element in unsorted array 
//		min_idx = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[min_idx])
//			{
//				min_idx = j;
//			}
//		}
//
//		// Swap the found minimum element with the first element 
//		swap(&arr[min_idx], &arr[i]);
//	}
//}
//
//int main() {
//	auto start = chrono::high_resolution_clock::now();
//	int t;
//	int *a;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//
//		selectionSort(a, n);
//
//		for (int i = 0; i < n; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//	auto finish = chrono::high_resolution_clock::now();
//	chrono::duration<double> elapsed = finish - start;
//	cout << elapsed.count() << endl;
//	return 0;
//}
