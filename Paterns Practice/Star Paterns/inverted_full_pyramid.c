#include<stdio.h>
int main() {

    for(int i=0;i<5;i++) {

        for(int j=0;j<i;j++) printf(" ");
        for(int a=0;a<(((5-i)*2)-1);a++) printf("*");
        printf("\n");
    }

    return 0;
}