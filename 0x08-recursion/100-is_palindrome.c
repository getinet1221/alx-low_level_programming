#include <stdio.h>
#include "main.h"
void main()
{
    char str[100],rstr[100];
    int i,j,lenstr,f=0,k;

    printf("\nEnter a string \t:");
    scanf("%s",str);

    for(i=0;str[i]!='\0' ;i++);
    lenstr=i;

    for(j=lenstr-1,k=0;j!=-1;j--,k++)
    {
        rstr[k]=str[j];
    }

    rstr[k]='\0';


    for(i=0,j=0;str[j]!='\0'&&str[j]!='\0';i++,j++)
    {
        if(rstr[j]!=str[i])
        {
            f++;
        }


    }
        if(f!=0)
        {
            printf("\nString is not Palindrome");
        }
     else
        {
            printf("\nString is Palindrome");
        }
}
