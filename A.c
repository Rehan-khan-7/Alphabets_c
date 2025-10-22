#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=13;j++){
            if ( i+j==8 || j==i+6 || (i==4  && (j==6 || j==8 ) ))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
}