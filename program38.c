#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int);


int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("enter number\n");    
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
   if(bRet == true)
   {
       printf("Number is Pallindrome\n");
   }
  else
  {
      printf("Number is not Pallindrome\n");
  }
   return 0;
}
bool CheckPallindrome(int iNo)
{
 int iDigit = 0, iRev=0;
 int iTemp = iNo;
 while(iNo != 0)
 
 {
     iDigit = iNo % 10;
    iRev = (iRev * 10 ) + iDigit;
    iNo = iNo / 10 ;
 }
 if (iRev == iTemp)
 {
     return true;
 }
 else
 {
     return false;
 }
}
