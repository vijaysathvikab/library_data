#include<stdio.h>
char str[40],rev[40];
int i,count=0,n;
char rev_str(char str[]);
void main()
{   
    printf("Enter the string: ");
    scanf("%s", str);
    rev_str(str);
}
char rev_str(char str[])
{
    for(i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    n=count;
    for(i=0; str[i] != '\0'; i++,n--)
    {
        rev[i]=str[n-1];
    }
    rev[count+1]='\0';
    printf("The reverse string is: %s", rev);

}
