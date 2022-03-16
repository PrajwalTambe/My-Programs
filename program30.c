#include<stdio.h>
    
int Display(int);


int main()
{
    int iValue=0 , iCnt=0;

    printf("enter number\n");    
    scanf("%d",&iValue);

   iCnt= Display(iValue);
   printf("total number of Digits is : %d\n",iCnt);

   return 0;
}
int Display(int iNo)
{

 int iDigit = 0, iCnt = 0;

if (iNo < 0)
{
 iNo = -iNo;
}
 
 while(iNo>0)
 {
 
  iDigit = iNo % 10;  
  iCnt = iCnt + iDigit; 
   iNo= iNo /10;
} 
 return iCnt;
}
