#include <stdio.h>

long repeatedString(char* s, long n) {

	if (s == NULL) {
		return 0;
	}

	int rep = 0, len = 0, i = 0 ;
	
	while (*(s+i) != '\0') {
		if (*(s+i) == 'a') {
			rep++;	
		}
		len++;
		i++;
	}

	int rem = n % len;
	long rep_as = (n / len) * rep;

	i = 0;
	while (rem-- != 0) {
		if (*(s+i) == 'a') {
                        rep_as++;
                }
                i++;
	}

	return rep_as;
}

int main() {
	char s[] = "a";
	long n = 1000000000000;

	printf("%ld \n", repeatedString(s, n));

	return 0;
}
