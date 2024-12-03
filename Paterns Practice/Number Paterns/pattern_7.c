#include<stdio.h>
int main() {

    for(int i=0;i<8;i++) {
        
        for(int j=8;j>i;j--) {
            if(i%2==0) printf("%d ",j-i);
            else printf("%d ",8-j+1);
        }
        printf("\n");
    }
    return 0;
}