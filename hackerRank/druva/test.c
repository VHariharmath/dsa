#include <stdio.h>


int *arrangeElements (int input[], int len, int output[]) {
	int even[len], odd[len];
	int i, j = 0, k = 0;

	for (i = 0; i < len; i++) {
		if (input[i] % 2 == 0) {
			even[j] = input[i];
			j++;
		} else {
			odd[k] = input[i];
			k++;
		}
	}

	int temp;
	for (i = 1; i < j; i++) {
		if (even[i] < even[i-1]) {
			temp = even[i];
			even[i] = even[i-1];
			even[i-1] = temp;
		}
	}

	for (i = 1; i < k; i++) {
		if (odd[i] < odd[i-1]) {
			temp = odd[i];
			odd[i] = odd[i-1];
			odd[i-1] = temp;	
		}
	}

	int x = 0, y = 1;
	if (even[0] < odd[0]) {
		for (i = 0; i < j && i < k ; i++) {
			output[x] = even[i];
			output[y] = odd[i];

			x += 2;
			y += 2;

		}

	} else {
		x = 0, y = 1;
		for (i = 0; i < j && i < k; i++) {
			output[x] = odd[i];
			output[y] = even[i];

			x += 2;
			y += 2;
		}

		if (i < j) {
			for (; i < j; i++) {
				output[i] = even[i];
			}
		}

		if (i < k) {
			for (; i < k; i++) {
				output[i] = odd[i];
			}
		}
	
	}

	return output;

}

int main() {
	int a[] = {90, 47, 36, 17, 88};
	int len = sizeof(a)/sizeof(a[0]);
	int output[len];

	int *b;
	
	b = arrangeElements(a, len, output);

	for (int i = 0; i < len; i++) {
		printf("%d \n", b[i]);
	}
	
	return 0;
}
