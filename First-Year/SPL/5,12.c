#include<stdio.h>
int main(){
    int n;
    printf("Enter Row Number n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%3d",1);
        for(int j=1 ; j<=i ; j++){
            printf("%3d",j);
        }
        printf("%3d\n",1);
    }
}