#include <stdio.h>

int number_of_jumps(int len, int *a) {

	int jumps = 0, i = 0;

	while (i < len-2) {
		
		if (a[i+2] == 0) {
			i = i+2;
			jumps++;	
		} else if (a[i+2] == 1 && a[i+1] == 0) {
			i = i+1;
			jumps++;
		} else {
			break;
		}
	}

	if (i+2 > len-1 && i+1 <= len-1) {
		jumps++;
	}
	return jumps;
}

int main() {
	int a[] = {0, 0, 0, 1, 0, 0};
	int len = sizeof(a)/sizeof(a[0]);
	
	printf("%d \n", number_of_jumps(len, a));
	return 0;
}
