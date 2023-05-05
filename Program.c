// A year is entered through the keyboard,
// write a program to determine whether the year is leap or not.
// Use the logical operators &amp;&amp; and ||.


#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("\n Enter Any Year : ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 100 == 0 && year % 4 == 0)
        printf("Leap Year \n");
    else
        printf("Not Leap Year \n");
    return 0;
}
