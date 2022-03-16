#include<stdio.h>

void  Dispaly( int iNo)
{
	int iCnt = 0;
	
	for(iCnt =1; iCnt<= iNo ; iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iValue =0;
	 printf("Enter Number \n");
	 scanf("%d",&iValue);
	 
	 Dispaly(iValue);
	 
	 return 0;
	 
	 
	 
	 
}
cl
































