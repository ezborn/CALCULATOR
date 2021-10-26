/*
PROJECT:SIMPLE CALCULATOR
AUTHOR:EZBORN SAMSON
DATE:OCTOBER 21
COMPILER:GCC
LANGUAGE:C99
LICENCE:MIT

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //variable declaration
    int num1,num2,sum,product,diff,mod;
    float quot;

   //assignment statements
   num1 = 200;
   num2 = 30;

   //computations
   sum = num1 + num2;
   product = num1 * num2;
   diff = num1 - num2;
   mod = num1 % num2;
   quot = [float] num1 / num2;


   // output
   printf["\tSimple calculator\n"];
   printf["%d + %d= %d\n",num1,num2,sum];
    printf["%d - %d= %d/n",num1,num2,diff};
    printf["%d * %d= %d/n",num1,num2,product};
    printf["%d / %d= %d/n",num1,num2,quot};
   printf["%d mod %d= %d/n",num1,num2,mod};
   return 0;


