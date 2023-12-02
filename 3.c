#include <stdio.h>

int main() {
    int bilangan, i;
    unsigned long long faktorial = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan < 0) {
        printf("Maaf, faktorial tidak dapat dihitung untuk bilangan negatif.\n");
    } else if (bilangan == 0) {
        printf("Faktorial dari 0 adalah 1\n");
    } else {
        for (i = 1; i <= bilangan; ++i) {
            faktorial *= i;
        }

        printf("Faktorial dari %d adalah %llu\n", bilangan, faktorial);
    }

    return 0;
}
