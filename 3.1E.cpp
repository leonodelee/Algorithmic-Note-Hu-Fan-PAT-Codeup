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
			switch(num%5)//switch��������� 
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
	//********************************A2���	
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
		//��ĩ�����ж���ո� 
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
A1~A5����Щ�����ǿ����Ǳ����Ƿ�Ϊ��
���ǿ���������Ҫ��������Ƿ����
����A2���ǿ��Ƿ��б�5������1������,�����,��ô����A2���Ľ�����,�������A2�����ֵ������N

*/
