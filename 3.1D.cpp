#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int  num;
		int countodd=0;
		int counteven=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(num % 2 == 0)
			{
				counteven++;
			}
			else
			{
				countodd++;
			}
		}
		if(counteven > countodd)
		{
			printf("%s\n","NO");
		}
		else
			printf("%s\n","YES");
	}
	return 0;	
} 
