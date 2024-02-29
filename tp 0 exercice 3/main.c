#include <stdio.h>

int main() {
    int T1[8], T2[8], T3[8];

    for (int i = 0; i < 8; i++) {

        printf("entre les valeurs de T1:");
        scanf("%d", &T1[i]);
        
    }
    for (int j = 0; j < 8; j++) {

        printf("entre les valeurs de T2:     ");
        scanf("%d", &T2[j]);

    }
    for (int k = 0; k < 8; k++) {

        T3[k] = T1[k] + T2[k];
        printf("%d \t", T3[k]);
    }
    printf("end")

    return 0;
}
