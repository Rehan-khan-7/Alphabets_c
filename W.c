#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=13;j++){
            if ( i==j || (i+j==10 && i>=3) || (j==i+4 && i>=3) || (i+j==14))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
}