#include <stdio.h>

int main() {
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   int a=(n*2)+1;
   for(int i=0;i<n;i++){
       for(int j=0;j<i+1;j++){
           printf("*");
       }
       for(int s=0;s<a-((i*2)+2);s++){
           printf(" ");
       }
       for(int k=0;k<i+1;k++){
           printf("*");
       }
       printf("\n");
   }
   for(int i=0;i<a;i++){
       printf("*");
   }
   printf("\n");
   for(int i=0;i<n;i++){
       for(int j=0;j<a-(i+(n+1));j++){
           printf("*");
       }
       for(int s=0;s<((i*2)+1);s++){
           printf(" ");
       }
       for(int k=0;k<a-(i+(n+1));k++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}