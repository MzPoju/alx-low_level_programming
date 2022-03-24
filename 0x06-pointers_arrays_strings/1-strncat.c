#include <main.h>
#include <string.h>

int main(void)
{
	char destination[] = "Hello ";
	char source[] = "World!\n";

	printf("\nsource string = %s", source);
	printf("\ndestination string = %s", destination );

	strncat(destination, source, 15);

	printf("\ndestination string after strncat() = %s", destination);

	return (0);
}
