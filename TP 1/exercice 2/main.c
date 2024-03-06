#include <stdio.h>

int main() {
    int T1[100], i = 0;


    while (1) {
        printf("remplis le tableau :");
        scanf("%d", &T1[i]);
        if (T1[i] == -1) {
            break;
        }
        i++;
    }


    for (int j = 0; j < i; j++) {
        T1[j]++;
    }

    printf("noveau tableau est :\t");
    for (int j = 0; j < i; j++) {
        printf("%d ", T1[j]);
    }

    return 0;
}
