#include <stdio.h>
int main(void) {


    printf("Multiplos de 3 entre 1 e 100:\n ");
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}