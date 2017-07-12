#include <iostream>
#include "stdio.h"
#include "assert.h"
using namespace std;

#if 0 
//全排列
//单独交换 a b值正确
void swap(int &a, int &b)//为何不正确,不能用于交换相同的值,如a,a结果为0
{
	a ^=  b;
	b ^= a;
	a ^= b;
}
void swap3(int &a, int &b)//同样不适用于同一个值进行交换,因为a,b是同一个内存块
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
//打印顺序 123 132 213 231 321 312
int main()
{
	int ar[] = {1,2,3};
	int n = sizeof(ar)/sizeof(ar[0]);
	FullRange(ar, 0, n-1);
	//Perm(ar, 0, n-1);
	return 0;
}
#endif

//求最大子集

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