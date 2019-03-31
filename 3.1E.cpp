#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cmath>
using namespace std;

int A[5][1005];
int num[1005];
int main()
{
	int N;
	while(scanf("%d",&N) != EOF)
	{
		int A1_even=0,A2_jiaocuo=0,A3_count=0,A4_count=0,A5_max=0;
	//	int A3_count = 0,A4_count = 0;
		float A4_avg = 0;
		float A4_sum = 0;
		int flag=0;
		int A2_exist = 0;
		for(int i=0;i<N;i++)
		{
			int num;
			cin>>num;
			switch(num%5)//switch语句正合适 
			{
				case 0:
					if(num % 2==0)
					{
						A1_even += num;
					}
					break;
				case 1:
					A2_jiaocuo+=(num * pow((double)(-1),flag));
					flag++;
					A2_exist = 1;
					break;
				case 2:
					A3_count++;
					break;
				case 3:
					A4_count++;
					A4_sum += num;
					break;
				case 4:
					if(A5_max < num)
						A5_max = num;
					break;
				default:
					break;	
			}
		//	cout<<flag<<endl;
		}
		A4_avg = A4_sum / A4_count;
		
		if(A1_even != 0)
			printf("%d ",A1_even);
		else
		{
			printf("N ");
		}
	//********************************A2大坑	
		if(A2_exist ==1)
		{
			printf("%d ",A2_jiaocuo);
		}	
		else
		{
			printf("N ");
		}
		
		if(A3_count != 0)
			printf("%d ",A3_count);
		else
		{
			printf("N ");
		}
		
		if(A4_count != 0)
			printf("%0.1lf ",A4_avg);
		else
		{
			printf("N ");
		}
		//行末不得有多余空格 
		if(A5_max != 0)
			printf("%d",A5_max);
		else
		{
			printf("N");
		}
		//cout<<endl;
		printf("\n");
	}
	return 0;	
} 
/*
A1~A5里有些并不是看他们本身是否为零
而是看符合他们要求的数字是否存在
比如A2就是看是否有被5除后余1的数字,如果有,那么无论A2最后的结果如何,都是输出A2本身的值而不是N

*/
