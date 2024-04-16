//Problem statement : Accepct  1 numbers from user abd tell is even or odd

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
// Function Name :  CheakDivisible
// Description : It is used to cheak number divisible by 3 and  5 
// Input = integer
// Output = Boolean
// Author = Parth Sushil Inamdar
// Date = 16/04/2024
//
/////////////////////////////////////////////////////////////////
bool CheakDivisible( 
               unsigned int iNo1 //  First Input
            
             )
{  
       unsigned int iAns = 0;
       if(  (iNo1 %3 ==0)      &&     (iNo1 %5==0) ) 
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
   
   bret = CheakDivisible(iNum);


if  (bret == true)
{
    printf("Number is  Divisible by 3 and 5");
}
else
{
    printf("Number is not Divisible either 3 or 5 ");
}

 return 0;
}