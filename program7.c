//Problem statement : Accepct  1 numbers from user abd tell is even or odd

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
// Function Name : Evenorodd
// Description : It is used to cheak number is even or odd
// Input = integer
// Output = Boolean
// Author = Parth Sushil Inamdar
// Date = 16/04/2024
//
/////////////////////////////////////////////////////////////////
bool Evenorodd( 
               unsigned int iNo //  First Input
             )
{  
       unsigned int iAns = 0;
       if(iNo %2 ==0)
       {
          return true;
       }
        else
        {
            return false;
        }
       
         return iAns;
}


int main()
{
   unsigned int iNum = 0; // Variable to store Number from user
   bool bret = false;

   printf("Enter a Number:\n");
   scanf("%d", &iNum);
   
   bret = Evenorodd(iNum);


if  (bret == true)
{
    printf("Number is Even");
}
else
{
    printf("Number is odd");
}

 return 0;
}