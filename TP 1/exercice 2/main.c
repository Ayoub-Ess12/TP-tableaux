#include <stdio.h>

int main() {
    int T[100] ;

        for (int i = 0; i < 100 ; i++) {
            printf("remplis le tableau :");
            scanf("%d",&T[i]);

            if(T[i] == -1){
                break;
            }
        }
    printf("le noveaux tableau est : \n");
    for (int i = 0; i < T[i]; i++) {
        printf("%d \t",T[i]+1) ;
    }

    return 0;
}
