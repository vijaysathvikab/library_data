//Program to reverse a string | Vijay Sathvika B | 29 aug 2019
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *Reverse_String(char *OriginalString, char revstr[], int size);


void main()
{   
	char *ptr;
	int i,l;
	char *OriginalString1, *OriginalString2;
	

	OriginalString1=(char*)malloc(100*sizeof(char));
	

	//Input string
    printf("Enter the string: ");
    gets(OriginalString1);
    //Allocates memory
    l=strlen(OriginalString1);
    printf("%d", l);
    
    OriginalString2=(char*)malloc((l+2)*sizeof(char));
    strcpy(OriginalString2, OriginalString1);
    free(OriginalString1);
    
    
	char ReverseString[sizeof(OriginalString2)];
	
	Reverse_String(OriginalString2, ReverseString, l);
    printf("\nThe reverse string is: %s \n", ReverseString);
}

//Function to reverse the string
char *Reverse_String(char *OriginalString, char ReverseString[], int size)
{
	char *ptr;
	int i;
	char reversestring[sizeof(OriginalString)];
    ptr=reversestring;
    for(i=0; i<size ; i++)
    {
    	*ptr = *(OriginalString+i);
    	ptr++;
    }
    free(OriginalString);
    for(i=0;ptr!=reversestring-1; i++)
    {
    	ReverseString[i]=*(ptr-1);
    	ptr--;
	}
    ReverseString[i+1]='\0';
	return ReverseString;
}       

