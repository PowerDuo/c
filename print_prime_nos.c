#include <stdio.h>

int main()
{
    int n;
    printf("Enter last number : ");
    scanf("%d", &n);
    
    for(int i=2; i<=n; i++) {
        int counter = 0;
        for (int j=(i-1); j>1; j--) {
            if (i%j == 0) {
                counter = counter + 1;
            }
        }
        if (counter == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
} 