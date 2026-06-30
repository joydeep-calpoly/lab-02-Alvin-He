#include "stdlib.h"
#include "stdio.h"

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++) {
		char* argument = argv[i];
		if (argument[0] == '-') {
			printf("%s\n", argument);
		}
	}
}
