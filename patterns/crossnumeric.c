#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,limit;
    printf("enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit*2-1;i++){
        for(j=1;j<=limit*2-1;j++){
            if(j==i||j==limit*2-i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }



}