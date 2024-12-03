#include<stdio.h>
int main() {
    int var=12;
    for(int i=0;i<7;i++){
        for(int j=0;j<i+1;j++) printf("%d",j+1);
        for(int a=0;a<var;a++) printf(" ");
        var-=2;
        for(int b=0;b<i+1;b++) printf("%d",i+1-b);
        printf("\n");
    }
    return 0;
}