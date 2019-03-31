#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
char a[15],b[15];
int num1[15],num2[15];
void trans(char *arr,int *num)
{
	int len = strlen(arr);
	for(int i=0;i<len;i++)
	{
		num[i] = arr[i] - '0';
	}
}
int main()
{
	while(scanf("%s%s",a, b) != EOF)
	{
		int mul=0;
		trans(a,num1);
		trans(b,num2);
		int lena = strlen(a);
		int lenb = strlen(b);
		for(int i=0;i<lena;i++)
		for(int j=0;j<lenb;j++)
		{
			mul += (num1[i]*num2[j]);
		}
		printf("%d\n",mul);
	}
	return 0;	
} 
