#include<stdio.h>


typedef  int BOOL;
#define TRUE 1
#define FALSE 0

BOOL cheak( int iNo)
{
      if(iNo%5 == 0)
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
}

int main()
{
    int iValue  = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

      bRet = cheak(iValue);

      if(bRet == TRUE)
      {
          printf("Divisible by 5");

      }
      else{
             printf("Divisible by 5");
      }

    



    return 0;
}