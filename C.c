#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=4;j++){
            if(j==1 && (i==1 || i==5))
            printf("  ");
            else if (i==1 || i==5 || (j==1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
}