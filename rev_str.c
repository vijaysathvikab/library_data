
//Program to reverse a string | Vijay Sathvika B | 29 aug 2019
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *OriginalString, *ReverseString;
char Reverse_String(char OriginalString[]);

void main()
{   
	int size;
	//Input size
	printf("Enter the size of the string: ");
	scanf("%d",&size);
	OriginalString=(char*)malloc(size*sizeof(char));
	ReverseString=(char*)malloc(size*sizeof(char));
	//Input string
    printf("Enter the string: ");
    scanf("%s", OriginalString);
    Reverse_String(OriginalString);
    printf("The reverse string is:%s", ReverseString);
    free(OriginalString);
    free(ReverseString);
}

//Function to reverse the string
char Reverse_String(char *OriginalString)
{
	int i,n;
    n=strlen(OriginalString);
    for(i=0; *(OriginalString+i) != '\0'; i++,n--)
    {
    	*(ReverseString+n) = *(OriginalString+i);
    }
    *(ReverseString+i+1)='\0';
	return *ReverseString;
}
