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
/*
int main()
{
	int a = 1;
	//int b = 2;
	swap(a, a);
	cout<<"a:"<<a<<" ";
	//cout<<"b:"<<b<<endl;
}
*/
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
#endif

//������Ӽ�

int n=0;
int k=0;
int add(int a, int b)
{
	for(int i=1; i; i<<=1)
	{
		n++;
		if(i & b)
		{
			for(int j=i; j; j<<=1)
			{
				k++;
				if(j & a)
				{
					a &= (~j);
				}
				else
				{
					a |= j;
					break;
				}
			}
			cout<<n<<" "<<k<<"-----";
		}
	}
	//cout<<n<<endl;
	return a;
}

int main()
{
	int sum1 = add(2,3);
	cout<<sum1<<endl;
	return 0;
}