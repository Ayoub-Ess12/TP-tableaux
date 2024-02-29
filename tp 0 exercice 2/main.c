#include <stdio.h>

int main() {

    int T[7] = {18, 987, 66, 122, 77, 99, 100}, nbr , C = 0;

    printf("entre la valeur recherchee :");
    scanf("%d", &nbr);

    for (int i = 0; i < 7; i++) {

        if (T[i] == nbr) {
            printf("la valeur existe, son emplacement est : %d", i);
            C ++ ;
            break;
        }
    }
    if(C == 0){
        printf("la valeur n'est pas presente !!");
    }


    return 0;
}
