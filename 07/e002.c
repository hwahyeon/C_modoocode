#include <stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            printf(" ");
         }
        
        for(j = 2*n-1; j > 2*i; j--){
            printf("*");
        }
        printf("\n");
        }
    return 0;
}
