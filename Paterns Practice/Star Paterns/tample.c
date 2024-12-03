#include<stdio.h>
int main() {

    for(int i=0;i<5;i++) {
        for(int j=5;j>i;j--) printf(" ");
        for(int a=0;a<i+1;a++) printf("* ");
        printf("\n");
    }

    for(int i=0;i<6;i++) {
        for(int b=0;b<6;b++) printf("* ");
        printf("\n");
    }
    return 0;
}