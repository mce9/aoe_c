#include <stdio.h>

void function() {		// an example function, with its own context
	int var = 5;
	static int static_var = 5;		// static variable initialization

	printf("\t[in function] var = %d\n", var);
	printf("\t[in function] static_var = %d\n", static_var);
	var++;
	static_var++;
}

int main() {			// main function, with its own context

	int i;
	static int static_var = 31337;		// another static, in a different context

	for(i=0; i < 5; i++) {			// loop 5 times
		printf("[in main] static_var = %d\n", static_var);
		function();					// call the function
	}
}
