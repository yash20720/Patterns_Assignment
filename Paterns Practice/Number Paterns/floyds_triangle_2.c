#include<stdio.h>
int main() {
    int num=1;

    for(int i=0;i<5;i++) {

        for(int j=0;j<i+1;j++) printf("%d ",num++);
        int num2=num-2;
        for(int a=0;a<i;a++) printf("%d ",num2--);
        printf("\n");
    }
    return 0;
}