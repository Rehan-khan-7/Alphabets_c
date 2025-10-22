#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=7;j++){
            if ((i==1 && j<=5) || (i==5 && j<=5) || (j==1 && i<=5) || (j==5 && i<=5) || (i==j && j>=4))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
}