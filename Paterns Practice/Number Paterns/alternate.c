#include<stdio.h>
int main() {
    for(int i=0;i<5;i++) {
        for(int j=0;j<i+1;j++) {
            if(j%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}