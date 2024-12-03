#include<stdio.h>
int main() {

    for(int i=0;i<5;i++) {

        for(int j=0;j<i;j++) printf(" ");
        for(int a=0;a<(5-i)*2-1;a++) printf("*");
        printf("\n");
    }

    for(int i=0;i<4;i++) {

        for(int j=4;j>i+1;j--) printf(" ");
        for(int a=0;a<(i+1)*2+1;a++) printf("*");
        printf("\n");
    }

    return 0;
}