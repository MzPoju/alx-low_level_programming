#include <main.h>
#include <string.h>

int main(void)
{
	char str1[]; // declaration of char array
	char str2[]; // declaration of char array
	int value; // declaration of integer value
	printf("Enter the first string : ");
	scanf("%s",str2);
	printf("Enter the second string : ");
	scanf("%s",str2);
	// comparing both the strings using strcmp() function
	value=strcmp(str1,str2);
	if(value==0)
	printf("strings are same");
	else
	printf("strings are not same")

		return(0)
}
