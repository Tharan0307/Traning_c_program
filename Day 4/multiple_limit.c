#include<stdio.h>
void main(){
    int n;
    printf("ENTER the number:");
    scanf("%d",&n);
    for(int i=n; i<=n*10; i+=n){
        printf("%d\n", i );
    }

}
