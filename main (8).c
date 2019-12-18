/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int week;
 printf("enter week number(1-7):");
 scanf("%d",&week);
 
 switch(week)
 {
     case 1:
     printf("sunday");
     break;
     case 2:
     printf("monday");
     break;
     case 3:
     printf("tuesday");
     break;
     case 4:
     printf("wednesday");
     break;
     case 5:
     printf("thursday");
     break;
     case 6:
     printf("friday");
     break;
     case 7:
     printf("satday");
     break;
     default:
     printf("invalid");
 }
 return 0;
}
