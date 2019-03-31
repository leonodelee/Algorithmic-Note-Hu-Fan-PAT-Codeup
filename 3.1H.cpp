#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
char A[15],B[15];
/* 
int main()
{
	char a,b;
	while(scanf("%s%s%s%s",&A, &a, &B, &b) != EOF)
	{
		int lena = strlen(A);
		int lenb = strlen(B);
		int numa=0,numb=0;
		int weight = 1,weightb = 1;
		for(int i=0;i<lena;i++)
		{
			if(A[i] == a)
			{
				numa = numa * 10 + (a - '0');
			}
		}
		for(int j=0;j<lenb;j++)
		{
			if(B[j] == b)
			{
				numb = numb * 10 + (b - '0'); 
			}
		}
		printf("%d\n",numa+numb);
	}
	return 0;	
} 
*/

int main()
{
	int a,b;
	while(scanf("%s%d%s%d",&A, &a, &B, &b) != EOF)
	{
		int lena = strlen(A);
		int lenb = strlen(B);
		int numa=0,numb=0;
		int weight = 1,weightb = 1;
		for(int i=0;i<lena;i++)
		{
			if((A[i]-'0') == a)
			{
				numa = numa * 10 + a;
			}
		}
		for(int j=0;j<lenb;j++)
		{
			if((B[j]-'0') == b)
			{
				numb = numb * 10 + b; 
			}
		}
		printf("%d\n",numa+numb);
	}
	return 0;	
}  
