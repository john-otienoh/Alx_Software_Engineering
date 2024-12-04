#include "monty.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file \n");
		exit(EXIT_FAILURE);
	}
	char *file_location = argv[1];
	FILE *my_file = fopen(file_location, "r");
	if (my_file == NULL)
	{
		fprintf(stderr, "USAGE: Error: Can't open file %s\n", file_location);
		exit(EXIT_FAILURE);
	}
/**	char* my_buffer = NULL;
	size_t len = 0;
	int line_num = 0;
	while (getline(&my_buffer, &len, my_file) != -1)
	{
		line_num++;
		char *opcode = strtok(&my_buffer, "\t\n");
		if (opcode == NULL || strlen(opcode) == 0)
		{
			continue;
		}
		fprintf(stderr, "L%d: unknowninstruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
	free(my_buffer);**/
	fclose(my_file);
	exit(EXIT_FAILURE);

	return(0);
}
