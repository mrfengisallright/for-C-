#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;
//	}
//
//
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{	
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//	reverse(arr,sz);
//
//	return 0;
//
//}