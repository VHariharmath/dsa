#include <stdio.h>

int number_of_valleys(int steps, char *data) {

	int i = 0, level = 0, count = 0;

	while (*(data + i) != '\0') {
		if (*(data+i) == 'U') {
			level++;
			if (level == 0) {
				count++;
			}
		} else {
			level--;
		}

		
		i++;
	}

	
	return count;
}

int main() {
	char valley[] = "UDUUUDUDDD";
	int steps = 8;

	printf("%d \n", number_of_valleys(steps, valley));
	return 0;
}
