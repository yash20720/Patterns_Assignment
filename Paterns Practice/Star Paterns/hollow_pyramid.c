#include<stdio.h>
int main() {

    for(int i=0;i<5;i++) {

        for(int j=5;j>i+1;j--) printf(" ");
        for(int a=0;a<i*2+1;a++) {
             if(a==0 || a==(i*2) || i==4) printf("*");
             else printf(" ");
        }
        printf("\n");
    }
    return 0;
}