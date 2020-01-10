#include <stdio.h>
#include <string.h>

int sockMerchant(int n, int ar_count, int* ar) {

    if (n != ar_count) {
        return -1;
    }
    int i, max = 0;

    for (i = 0; i < n; i++ ) {
            if (ar[i] > max) {
                max = ar[i];
            }
    }

    int set[max];
    
    for (i = 0; i < n; i++) {
        set[ar[i]] = 0;
    }
    for (i = 0; i < n; i++) {
           set[ar[i]]++;
    }

    int count = 0;
    for (i = 0; i < n; i++) {
	    count += set[ar[i]]/2;
	    set[ar[i]] = 0;
    }

    return count;

}

int main() {

	int ar[] = {10, 20, 20, 10, 10, 30, 50, 10, 20};
	int n = sizeof(ar)/sizeof(ar[0]);

	printf("%d \n", sockMerchant(n, n, ar));
}
