#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int n=1;
    for(int i=2; i<a; i++){
        if(a%i==0){
            n=0;
            break;
        }
    }
    if(n==1){
        printf("Prime\n");
    }else{
        printf("NotPrime\n");
    }
    
    int cnt=0;
    for(int i=100; i<=200; i++){
        int n=1;
        for(int j=2;j<i; j++){
            if(i%j==0){
                n=0;
                break;
            }
        }
        if(n==1){
            cnt++;
        }
    }
    printf("Count is %d",cnt);
}
