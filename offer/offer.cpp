#include <iostream>
#include "stdio.h"
#include "assert.h"
using namespace std;

#if 0 
//ȫ����
//�������� a bֵ��ȷ
void swap(int &a, int &b)//Ϊ�β���ȷ,�������ڽ�����ͬ��ֵ,��a,a���Ϊ0
{
	a ^=  b;
	b ^= a;
	a ^= b;
}
void swap3(int &a, int &b)//ͬ����������ͬһ��ֵ���н���,��Ϊa,b��ͬһ���ڴ��
{
	a = a+b;
	b = a-b;
	a = a-b;
}

void swap2(int &a, int &b)//&
{
	int c = a;
	a = b;
	b = c;
}

void FullRange(int *arr, int start, int end)
{
	assert(NULL != arr);
	
	if(start == end)
	{
		for(int i=0; i<=end; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	else 
	{
		for(int i=start; i<=end; ++i)
		{
			swap2(arr[start], arr[i]);
			FullRange(arr, start+1, end);
			swap2(arr[start], arr[i]);
		}
	}
}
//��ӡ˳�� 123 132 213 231 321 312
int main()
{
	int ar[] = {1,2,3};
	int n = sizeof(ar)/sizeof(ar[0]);
	FullRange(ar, 0, n-1);
	//Perm(ar, 0, n-1);
	return 0;
}

//��λ�������
int n=0;
int k=0;      13-1101��a��   11-1011(b)
int add(int a, int b)
{
	for(int i=1; i; i<<=1)//b�д�λΪ1,��������Ϊi,ѭ��32��ֱ������Ϊ0
	{
		n++;
		if(i & b)
		{
			for(int j=i; j; j<<=1)//2�����ƣ�׼����λ
			{
				k++;
				if(j & a)//ͬΪ1
				{
					a &= (~j);//1������λ��0
				}
				else
				{
					a |= j;//3����λ
					break;
				}
			}
		}
	}
	cout<<n<<endl;
	return a;
}

int main()
{
	int sum1 = add(2,3);
	cout<<sum1<<endl;
	return 0;
}
#endif



