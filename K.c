#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=5;j++){
            if ( (i==j+3 && i>=3) || i+j==5 || j==1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
}

