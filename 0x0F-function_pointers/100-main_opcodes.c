#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - Prints opcodes of its own main function
 * @argc: The number of arguments in the command line
 * @argv: The array of strings
 *
 * Return: Opcodes
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[]);

		if (val < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}