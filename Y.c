#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if ( (i==j && i<=3) || (i+j==6 && i<=3) || (j==3 && i>=3))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
}