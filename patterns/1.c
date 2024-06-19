#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,limit;
    printf("enter the limit: ");
    scanf("%d",&limit);

    for ( i = 0; i <= limit-1; i++)
    {
        for(j=0; j<=i;j++){
            printf("* ");

        }
        printf("\n");
    }
    
}