#include <stdio.h>

int main() {
    int n, first = 0, second = 1, temp = 0;
    printf("Number of terms to be printed : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {

        printf("%d ", first);

        temp = first + second;
        first = second;
        second = temp;
    }
    return 0;
}