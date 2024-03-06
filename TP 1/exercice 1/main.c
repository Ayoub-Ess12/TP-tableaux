#include <stdio.h>

int main() {
    int T1[100],T2[100] , N1 , N2 ,S=0 ;
    do {
        printf("entre la taill de tableau 1 :");
        scanf("%d",&N1);
} while (N1>100 || N1<=0);

    do {
        printf("entre la taill de tableau 2 :");
        scanf("%d",&N2);
    } while (N2>100 || N2<=0);

    for (int i = 0; i < N1; i++) {
        printf("remplis le tableaux 1 :");
        scanf("%d",&T1[i]);
    }
    for (int i = 0; i < N2; i++) {
        printf("remplis le tableaux 2 :");
        scanf("%d",&T2[i]);
    }
    for (int k = 0; k < N1 ; k++) {
        for (int i = 0; i < N2; i++) {
            S += T1[k]*T2[i];
        }

    }
    printf(" le schtroumpf des deux tableaux est : %d",S);
    return 0;
}
