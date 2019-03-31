#include <iostream>
#include <stdlib.h>
using namespace std;
int tree[10005] = {0};

int main()
{
	int L,M;
	while(scanf("%d%d",&L, &M) != EOF)
	{
		if(L==0&&M==0)
			return 0;
		else
		{
			for(int i=0;i<=L;i++)
			{
				tree[i] = 1;
			}
			int sum = L+1;
			while(M--)
			{
				int left,right;
				scanf("%d%d",&left, &right);
				for(int i=left;i<=right;i++)
				{
					tree[i] = 0;
				}
			}
			for(int j=0;j<=L;j++)
			{
				if(tree[j] == 0)
					sum--;
			}
			printf("%d\n",sum);
		}
	}
	return 0;	
} 
