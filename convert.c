#include <stdio.h>

void usage(char *program_name) {
	printf("Usage: %s <message> <# of times to repeat>\n", program_name);
	exit(1);
}

int main(int argc, char *argv[]) {
	
	int i, count;

	if(argc < 3)			// if fewer than 3 arguments are used
		usage(argv[0]);		// display usage message and exit.

	count = atoi(argv[2]);	// convert the 2nd arg to an integer
	printf("Repeating %d times...\n", count);

	for(i=0; i < count; i++)
		printf("%3d - %s\n", i, argv[1]);
}
