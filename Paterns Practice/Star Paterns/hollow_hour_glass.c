#include<stdio.h>
int main() {

    for(int i=0;i<4;i++) {

        for(int j=0;j<i;j++) printf(" ");
        for(int a=0;a<(5-i)*2-1;a++) {
            if(a==0 || i==0 || a==(5-i)*2-2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    

    for(int i=0;i<4;i++) {

        for(int j=4;j>i+1;j--) printf(" ");
        for(int a=0;a<(i+1)*2+1;a++) {
            if(a==0 || a==(i+1)*2 || i==3) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}