#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���ʵ�� ����int�����еĶ����Ʊ���У��ж��ٸ�λ��ͬ
//int count_bit_three(unsigned int n) //���Ч�����
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
//	printf("����%dλ��ͬ\n", count);
//	return 0;
//
//}


//��ȡһ���������������е�ż��λ������λ���ֱ��ӡ������������
//
//void print(int m)
//{
//	int i = 0;
//	print("����λ\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> 1) & 1);
//
//	}
//	printf("\n");
//	print("ż��λ\n");
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

//�ݹ�ʵ��
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

//�ַ�������
int main(){
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}