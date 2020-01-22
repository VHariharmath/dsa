#include<stdio.h>
#include<string.h>

char returnCharacter(char *str, int pos) {

	int sum = 0, index = 0;
	int len = strlen(str);
	
	for (int i = 1; i < len; i+=2) {
		sum += str[i] - '0';
		if (sum >= pos) {
			index = i;
			break;
		}
	}

	if (pos > sum) {
		return -1;
	}

	return str[index-1];


}

int main() {
	char *str = "a2b3c3";

	char c = returnCharacter(str, 9);

	printf("%c \n", c);

	return 0;
}
