#include<stdio.h>
int main() {

    for(int i=0;i<5;i++) {

        for(int j=5;j>i+1;j--) printf(" ");
        for(int a=0;a<i+1;a++) printf("%d",a+1);
        for(int b=0;b<i;b++) printf("%d",i-b);
        printf("\n");
    }
    return 0;
}