#include <stdio.h>

int main() {

    int TE[10], moyenne, somme = 0;

    for (int i = 0; i < 10; i++) {

        printf("veuillez entre les nombre :");
        do {
            scanf("%d", &TE[i]);
        } while (TE[i]>=0 && TE[i]<=20) ;
        somme += TE[i];
    }
    moyenne = somme / 10;
    printf("la moyenne est %d", moyenne);

    return 0;
}
