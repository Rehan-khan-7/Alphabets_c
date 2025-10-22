#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=3;j++){
            if (i==1 || i==4 || j==1 || j==3)
            printf("* ");
            else
            printf("    ");
        }
        printf("\n");
        
    }
    for(i=2;i<=4;i++){
        for(j=1;j<=i;j++){
            if(i==2 || j==1 || j==i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}