#include <stdio.h>
#include <string.h>

int main(void)
{
	char destination[] = "Hello ";
	char source[] = "World!";

	strcat(destination, source);

	printf("Concatenated string: %s\n", destination);

	return(0);
}
