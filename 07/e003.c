#include <stdio.h>
int main() {
    int i, r = 0, n=1000;
    
    for(i = 0; i < n; i++){
        if (i%3 == 0 || i%5 == 0){
            r+= i;
        }
    }
    printf("%d", r);
    return 0;
}
