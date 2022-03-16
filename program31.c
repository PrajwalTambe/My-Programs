#include<stdio.h>
    
int ConutDigit(int);


int main()
{
    int iValue=0 , iRet=0;

    printf("enter number\n");    
    scanf("%d",&iValue);


   printf("Number of Digits are : %d\n",iRet);

   return 0;
}
int CountDigit(int iNo)
{

 int iDigit = 0;
  int iCnt = 0;
 if (iNo < 0)
{
 iNo = -iNo;
}
 
 while(iNo>0)
 {
 
  iDigit = iNo % 10;  
  iCnt++; 

} 
 return iCnt;
}
