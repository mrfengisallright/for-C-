#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//编程实现 两个int整数中的二进制表达中，有多少个位不同
//int count_bit_three(unsigned int n) //最高效，最经典
//{
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//
//}
//
//int get_diff_bit(int m, int n)
//{
//	int a = m^n;
//	return  count_bit_three(a);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("共有%d位不同\n", count);
//	return 0;
//
//}


//获取一个整数二进制所有的偶数位和奇数位，分别打印出二进制序列
//
//void print(int m)
//{
//	int i = 0;
//	print("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> 1) & 1);
//
//	}
//	printf("\n");
//	print("偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> 1) & 1);
//
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//
//	return 0;
//}
//

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

//递归实现
void reverse_string3(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr+1)>=2)
		reverse_string3(arr + 1);
	arr[len - 1] = tmp;
}

void reverse_string2()
{

}

//字符串逆序
int main(){
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}