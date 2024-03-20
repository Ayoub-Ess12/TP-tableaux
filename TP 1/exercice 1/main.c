#include <stdio.h>

int main() {
    int T1[100] ,T2[100] , N1 , N2 , j , i , S;

    do {
        printf("entre la taille de tableau 1 :");
        scanf("%d",&N1);

    } while (N1<=0 || N1>100);

    do {

        printf("entre la taille de tableau  :");
        scanf("%d",&N2);

    }while(N2<=0 || N2>100);

    for (int i = 0; i < N1; i++) {
        printf("remplis le tableau 1 :");
        scanf("%d",&T1[i]);
    }
    for (int i = 0; i < N2; i++) {
        printf("remplis le tableau 2 :");
        scanf("%d",&T2[i]);
    }
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < N2; j++) {
            S += T1[i] * T2[j] ;
        }
    }
    printf("Le Schtroumpf sera : %d",S);
    return 0;
}
