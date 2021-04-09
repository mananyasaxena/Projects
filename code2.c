#include <stdio.h>
int main()
{
    printf("Enter Marks : ");
    
    int a=0;
    scanf("%d",&a);
    if (a>=85)
    {
    printf("Grade A\n");
    }
    else if (a>=70 && a<=84)
    {
    printf("Grade B\n");
    }
    else if (a>=55 && a<=69)
    {
    printf("Grade C\n");
    }
    else if (a>=40 && a<=54)
    {
    printf("Grade D\n");
    }
    else 
    {
    printf("Grade F\n");
    }
}
