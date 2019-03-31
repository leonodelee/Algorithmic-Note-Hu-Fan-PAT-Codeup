#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

char A[15],B[15];
long trans(char *arr,int length)
{
	long num=0,j=1;
	for(int i=length-1;i>=0;i--)
	{
		if(arr[i]>='0' && arr[i]<='9')
		{
			num = num + (arr[i] - '0')*j;
			j*=10;
		}
	}
	if(arr[0]=='-')
		num = -num;
	return num;
}
int main()
{
	long a,b;
	while(scanf("%s%s",A, B) != EOF)
	{
		int lenA = strlen(A);
		int lenB = strlen(B);
		a = trans(A,lenA);
		b = trans(B,lenB);
		printf("%ld\n",a+b);
	}
	return 0;	
} 
