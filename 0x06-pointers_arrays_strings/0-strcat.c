#include <main.h>
#include <string.h>

int main(void)
{
	char destination[] = "Hello ";
	char source[] = "World!";

	strcat(destination, source);

	printf("Concatenated String: %s\n", strcat(destination,source));

	return(0);
}
