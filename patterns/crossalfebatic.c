#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,limit;
    char k='A'-1;
    printf("enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit*2-1;i++){
        i<=limit?k++:k--;
        for(j=1;j<=limit*2-1;j++){
            if(j==i||j==limit*2-i){
                printf("%c",k);
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }



}