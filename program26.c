#include<stdio.h>
  
  //function declaration
void Display();

//entry point function
int main()
{
   Display(); // function call

   return 0;
}


//function declaration
void Display()
{

    //local variables
 int iNo = 7521;
 int iDigit = 0;
 
  iDigit = iNo % 10;  //1
  printf("%d\n",iDigit); //1
   iNo= iNo /10;

iDigit= iNo% 10; 
 printf("%d\n",iDigit);
  iNo = iNo/10;

iDigit=iNo % 10;
printf("%d\n",iDigit);
iNo= iNo /10;

iDigit = iNo % 10;
printf("%d\n",iDigit);
iNo= iNo /10;





}
