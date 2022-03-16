#include<stdio.h>

int Factorial(int);

int main()
{
    int iNo= 0, iRet = 0;

    printf("enter number\n");
    scanf("%d",&iNo);
    
    iRet= Factorial(iNo);

    printf("Factorial is : %d\n",iRet);

    return 0;


}

int Factorial(int iValue)
{
    int iFact= 1;
    int iCnt= 0;

    for(iCnt= 1; iCnt <= iValue; iCnt++)
    {
        iFact= iFact * iCnt;
    }
        return iFact;    
}